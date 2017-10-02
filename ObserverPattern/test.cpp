#include"observer.h"

int main() {
	WeatherData* weather_data = new WeatherData;
	CurrentConditionsDisplay* current= new CurrentConditionsDisplay(weather_data);
	weather_data->setMeasurements(80,65,0.301);
	weather_data->setMeasurements(82, 70, 0.292);
	CurrentConditionsDisplay* new_curr = new CurrentConditionsDisplay(weather_data);
	weather_data->removeObserver(current);
	weather_data->setMeasurements(78, 90, 0.292);
}
