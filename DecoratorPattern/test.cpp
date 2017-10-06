#include"beverage.h"
#include<iostream>

int main() {
	Beverage* beverage = new Espresso;
	std::cout << beverage->getDescription() << " $ " << beverage->cost() << std::endl;
	Beverage* beverage_2 =new Mocha(new HouseBlend);
	std::cout << beverage_2->getDescription() << " $ " << beverage_2->cost() << std::endl;
}