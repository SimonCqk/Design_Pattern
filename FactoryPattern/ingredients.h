#pragma once
#include<vector>

// Ingredients made for pizza.
class Ingredient {
	// just empty, for example.
};

class Dough : public Ingredient {};
class Sauce : public Ingredient {};
class Cheese : public Ingredient {};
class Veggies : public Ingredient {};
class Pepperoni : public Ingredient {};
class Clams : public Ingredient {};

// give some ingredient examples.
class ThinCrustDough :public Dough {};
class MarinaraSauce :public Sauce {};
class ReggianoCheese :public Cheese {};
class Garlic :public Veggies {};
class Onion :public Veggies {};
class SlicedPepperoni :public Pepperoni {};
class FreshClams :public Clams {};

// abstract Ingredient Factory class for producing ingredients.
class PizzaIngredientFactory {
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual std::vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clams* createClams() = 0;
};

// give New York Style Ingredient example.
class NYPizzaIngredientFactory :public PizzaIngredientFactory {
public:
	Dough* createDough() override;
	Sauce* createSauce() override;
	Cheese* createCheese() override;
	std::vector<Veggies*> createVeggies() override;
	Pepperoni* createPepperoni() override;
	Clams* createClams() override;
};