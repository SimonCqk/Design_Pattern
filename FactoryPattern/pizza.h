#include"ingredients.h"
#include<vector>
#include<string>

enum class Ingredients
{
	dough,
	sauce,
	cheese,
	veggie,
	clam,
	pepperoni
};


class Pizza {
public:
	Pizza()
		:dough(nullptr), sauce(nullptr), cheese(nullptr), pepperoni(nullptr), clam(nullptr) {}

	virtual void prepare() = 0; // we need to collect ingredients produced from ingredient factory.

	// set these member functions non-virtual to gurantee the consistency of creating pizza.
	void bake();
	void cut();
	void box();
	void setName(const std::string& name);
	std::string getName() const;
	virtual ~Pizza() = default;
protected:
	std::string name;
	Dough* dough;
	Sauce* sauce;
	Cheese* cheese;
	std::vector<Veggies*> veggies;
	Pepperoni* pepperoni;
	Clams* clam;
};

class PizzaStore {
public:
	Pizza* orderPizza(const Ingredients& type);
protected:
	virtual	Pizza* createPizza(const Ingredients& type) = 0;
};

// derived pizzas.
class CheesePizza :public Pizza {
public:
	explicit CheesePizza(PizzaIngredientFactory* factory) {
		igrdt_factory = factory;
	}
	void prepare() override;
private:
	PizzaIngredientFactory* igrdt_factory;
};

class ClamPizza :public Pizza {
public:
	explicit ClamPizza(PizzaIngredientFactory* factory) {
		igrdt_factory = factory;
	}
	void prepare() override;
private:
	PizzaIngredientFactory* igrdt_factory;
};

class VeggiePizza:public Pizza {
public:
	explicit VeggiePizza(PizzaIngredientFactory* factory) {
		igrdt_factory = factory;
	}
	void prepare() override;
private:
	PizzaIngredientFactory* igrdt_factory;
};

class PepperoniPizza:public Pizza {
public:
	explicit PepperoniPizza(PizzaIngredientFactory* factory) {
		igrdt_factory = factory;
	}
	void prepare() override;
private:
	PizzaIngredientFactory* igrdt_factory;
};

// derived NY style Pizza Store
class NYPizzaStore :public PizzaStore {
protected:
	Pizza* createPizza(const Ingredients& type) override;
};