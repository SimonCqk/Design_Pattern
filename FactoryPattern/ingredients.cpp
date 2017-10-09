#include "ingredients.h"

Dough * NYPizzaIngredientFactory::createDough()
{
	return (new ThinCrustDough);
}

Sauce * NYPizzaIngredientFactory::createSauce()
{
	return (new MarinaraSauce);
}

Cheese * NYPizzaIngredientFactory::createCheese()
{
	return (new ReggianoCheese);
}

std::vector<Veggies*> NYPizzaIngredientFactory::createVeggies()
{
	return { (new Garlic),(new Onion) };
}

Pepperoni * NYPizzaIngredientFactory::createPepperoni()
{
	return (new SlicedPepperoni);
}

Clams * NYPizzaIngredientFactory::createClams()
{
	return (new FreshClams);
}
