#include <iostream>

class FlyBehavior;
class QuackBehavior;

// base abstract class - duck.
class Duck {
public:
  Duck() {} // default constructor.
  virtual void display() = 0;
  virtual void siwm();
  // interfaces to perform fly&quack behaviors.
  virtual void performFly(); 
  virtual void performQuack();
  // interfaces to change fly & quack behaviors dynamically (at runtime).
  virtual void setFlyBehavior(FlyBehavior* newbhv);
  virtual void setQuarkBehavior(QuackBehavior* newbhv);
protected:
  // use pointer to realize polymorphic.
  FlyBehavior *flyBehavior;
  QuackBehavior *quackBehavior;
};

// define all kinds of fly behaviors.

// base abstract FlyBehavior class.
class FlyBehavior {
public:
  virtual void fly() = 0;
};

// base abstract QuackBehavior class.
class QuackBehavior {
public:
  virtual void quack() = 0;
};

class FlyWithWings : public FlyBehavior {
public:
  void fly() override;
};

class FlyRocketPowered :public FlyBehavior {
public:
	void fly() override;
};

class FlyNoWay : public FlyBehavior {
public:
  void fly() override;
};

class Quack : public QuackBehavior {
public:
  void quack() override;
};

class MuteQuack : public QuackBehavior {
public:
  void quack() override;
};

class Squeak : public QuackBehavior {
public:
  void quack() override;
};

// define a MallardDuck subclass.
class MallardDuck : public Duck {
public:
  // since flyBehavior & quackBehavior is deribed from duck class
  // so they can't initialzed by list-initialization but assignment is OK.
  MallardDuck() {
    flyBehavior = new FlyWithWings;
    quackBehavior = new Quack;
  }

  void display() override;
};

class ModelDuck :public Duck {
public:
	ModelDuck() {
		flyBehavior = new FlyNoWay;
		quackBehavior = new Quack;
	}
	void display() override;
};