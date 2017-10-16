#include "observer.h"

void WeatherData::registerObserver(std::shared_ptr<Observer> o)
{
	observers.emplace_back(o);
}

void WeatherData::removeObserver(const std::shared_ptr<Observer>& o)
{
	// find it.
	auto beg = observers.begin();
	for (; beg != observers.end(); ++beg) {
		if (beg->lock().get() == o.get())
			break;
	}
	if (beg != observers.end())
		observers.erase(beg);
}

void WeatherData::notifyObservers()
{
	for (auto beg = observers.begin(), ed = observers.end();
		beg != ed; ++beg) {
		if(!beg->expired())
			beg->lock()->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::setMeasurements(const float & temp, const float & humidity, const float & pressure)
{
	this->temperature = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}

void CurrentConditionsDisplay::update(const float & temp, const float & humidity, const float & pressure)
{
	this->temperature = temp;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	std::cout << "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
}
