#include "pizza.h"
#include<iostream>

void Pizza::bake()
{
	std::cout << "Bake for 25 minutes at 350." << std::endl;
}

void Pizza::cut()
{
	std::cout << "Cutting the pizza into diagonal slices." << std::endl;
}

void Pizza::box()
{
	std::cout << "Place pizza in official PizzaStore box." << std::endl;
}

void Pizza::setName(const std::string& name)
{
	this->name = name;
}

std::string Pizza::getName() const
{
	return name;
}

Pizza * PizzaStore::orderPizza(const Ingredients & type)
{
	Pizza* pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	return pizza;
}

void CheesePizza::prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = igrdt_factory->createDough();
	sauce = igrdt_factory->createSauce();
	cheese = igrdt_factory->createCheese();
}

void ClamPizza::prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = igrdt_factory->createDough();
	sauce = igrdt_factory->createSauce();
	cheese = igrdt_factory->createCheese();
	clam = igrdt_factory->createClams();
}

Pizza * NYPizzaStore::createPizza(const Ingredients& type)
{
	Pizza* pizza{ nullptr };
	PizzaIngredientFactory* ingredient_factory = new NYPizzaIngredientFactory;
	switch (type) {

	}
}
