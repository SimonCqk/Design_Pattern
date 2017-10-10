#include "pizza.h"
#include<iostream>


inline std::string EnumToString(const Ingredients& ing) {
	switch (ing)
	{
	case Ingredients::cheese:
		return "cheese";
	case Ingredients::clam:
		return "clam";
	case Ingredients::dough:
		return "dough";
	case Ingredients::pepperoni:
		return "pepperoni";
	case Ingredients::sauce:
		return "sauce";
	case Ingredients::veggie:
		return "veggie";
	default:
		return "UNKOWN TYPE.";
	}
}


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

void VeggiePizza::prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = igrdt_factory->createDough();
	sauce = igrdt_factory->createSauce();
	cheese = igrdt_factory->createCheese();
	veggies = igrdt_factory->createVeggies();
}

void PepperoniPizza::prepare()
{
	std::cout << "Preparing " << name << std::endl;
	dough = igrdt_factory->createDough();
	sauce = igrdt_factory->createSauce();
	cheese = igrdt_factory->createCheese();
	pepperoni = igrdt_factory->createPepperoni();
}

Pizza * NYPizzaStore::createPizza(const Ingredients& type)
{
	Pizza* pizza{ nullptr };
	PizzaIngredientFactory* ingredient_factory = new NYPizzaIngredientFactory;
	switch (type) {
	case Ingredients::cheese:
		pizza = new CheesePizza(ingredient_factory);
		pizza->setName("New York Style Cheese Pizza.");
		break;
	case Ingredients::veggie:
		pizza = new VeggiePizza(ingredient_factory);
		pizza->setName("New York Style Veggie Style.");
		break;
	case Ingredients::clam:
		pizza = new ClamPizza(ingredient_factory);
		pizza->setName("New York Style Clam Style.");
		break;
	case Ingredients::pepperoni:
		pizza = new PepperoniPizza(ingredient_factory);
		pizza->setName("New York Style Pepperoni Style.");
		break;
	default:
		break;
	}
	return pizza;
}
