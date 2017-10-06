#include "beverage.h"

double Espresso::cost()
{
	return 1.99;
}

double HouseBlend::cost()
{
	return 0.99;
}

double Mocha::cost()
{
	return beverage->cost() + 0.20;
}
