#include "observer.h"

void WeatherData::registerObserver(Observer* o)
{
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
	auto it = std::find(observers.begin(), observers.end(), o);
	if (it != observers.end())
		observers.erase(it);
}

void WeatherData::notifyObservers()
{
	for (auto beg = observers.begin(), ed = observers.end();
		beg != ed; ++beg) {
		(*beg)->update(temperature, humidity, pressure);
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
