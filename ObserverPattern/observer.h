#include<iostream>
#include<vector>
#include<algorithm>
#include<memory>

class Observer;

class Subject {
public:
	virtual void registerObserver(std::shared_ptr<Observer> o) = 0;
	virtual void removeObserver(const std::shared_ptr<Observer>& o) = 0;
	virtual void notifyObservers() = 0;
};

class Observer {
public:
	virtual void update(const float& temp, const float& humidity, const float& pressure) = 0;
};

class DisplayElement {
public:
	virtual void display() = 0;
};

class WeatherData :public Subject {
public:
	void registerObserver(std::shared_ptr<Observer> o) override;
	void removeObserver(const std::shared_ptr<Observer>& o)override;
	void notifyObservers() override;
	void measurementsChanged();
	void setMeasurements(const float& temp, const float& humidity, const float& pressure);
private:
	std::vector<std::weak_ptr<Observer>> observers;
	float temperature;
	float humidity;
	float pressure;
};

// Just define one of three display elements.
class CurrentConditionsDisplay :public Observer, public DisplayElement {
public:
	CurrentConditionsDisplay(std::shared_ptr<Subject> weather_data){
		weatherData = weather_data;
	}
	void update(const float& temp, const float& humidity, const float& pressure) override;
	void display() override;
private:
	float temperature;
	float humidity;
	std::shared_ptr<Subject> weatherData;
};