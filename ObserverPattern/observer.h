#include<iostream>
#include<vector>
#include<algorithm>

class Observer;

class Subject {
public:
	virtual void registerObserver( Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
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
	void registerObserver(Observer* o) override ;
	void removeObserver(Observer* o)override ;
	void notifyObservers() override ;
	void measurementsChanged();
	void setMeasurements(const float& temp, const float& humidity, const float& pressure);
private:
	std::vector<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
};

// Just define one of three display elements.
class CurrentConditionsDisplay :public Observer, public DisplayElement {
public:
	explicit CurrentConditionsDisplay(Subject* weather_data) {
		weatherData = weather_data;
		weather_data->registerObserver(this);
	}
	void update(const float& temp, const float& humidity, const float& pressure) override;
	void display() override;
private:
	float temperature;
	float humidity;
	Subject* weatherData;
};