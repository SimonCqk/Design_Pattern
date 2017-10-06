#include<string>

class Beverage {
public:
	virtual double cost() = 0;
	virtual std::string getDescription() const {
		return description;
	}
protected:
	std::string description;
};


// Condiment may substitute beverage in some scenes.
// So it's inherited from Beverage.
class CondimentDecorator : public Beverage {
public:
	virtual std::string getDescription() = 0;
};

// Define some beverages.
class Espresso :public Beverage {
public:
	Espresso() {
		description = "Espresso";
	}
	double cost();
};

class HouseBlend :public Beverage {
public:
	HouseBlend() {
		description = "House Blend Coffee";
	}
	double cost();
};

// Define main decorator.
class Mocha : public CondimentDecorator {
public:
	explicit Mocha(Beverage* bev) :
		beverage(bev) {}
	std::string getDescription() {
		return beverage->getDescription() + " Mocha";
	}
	double cost();
private:
	Beverage* beverage;
};