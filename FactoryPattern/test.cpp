#include"ingredients.h"
#include"pizza.h"

int main() {
	PizzaStore* ny_pizza_store = new NYPizzaStore;
	ny_pizza_store->orderPizza(Ingredients::cheese);
	return 0;
}