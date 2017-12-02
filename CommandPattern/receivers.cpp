#include<iostream>
#include "receivers.h"

void Light::on()
{
	std::cout << "Light on." << std::endl;
}

void Light::off()
{
	std::cout << "Light off." << std::endl;
}

void Stereo::on()
{
	std::cout << "Stereo on." << std::endl;
}

void Stereo::setCD()
{
	std::cout << "Stereo on CD mode." << std::endl;
}

void Stereo::setVolume(const int & new_volume)
{
	std::cout << "Stereo set volume from "<<volume <<"to"<<new_volume<< std::endl;
	volume = new_volume;
}
