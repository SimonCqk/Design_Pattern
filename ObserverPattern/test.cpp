#include"observer.h"

int main() {
	std::shared_ptr<WeatherData> weather_data(new WeatherData);
	std::shared_ptr<CurrentConditionsDisplay> current = std::make_shared<CurrentConditionsDisplay>(weather_data);
	weather_data->registerObserver(current);
	weather_data->setMeasurements(80, 65, 0.301);
	weather_data->setMeasurements(82, 70, 0.292);
	std::shared_ptr<CurrentConditionsDisplay> new_curr = std::make_shared<CurrentConditionsDisplay>(weather_data);
	weather_data->registerObserver(new_curr);
	weather_data->removeObserver(current);
	weather_data->setMeasurements(78, 90, 0.292);
	return 0;
}
