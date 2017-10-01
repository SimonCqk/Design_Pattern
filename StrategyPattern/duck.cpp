#include"duck.h"

void Duck::siwm()
{
	std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior * newbhv)
{
	flyBehavior = newbhv;
}

void Duck::setQuarkBehavior(QuackBehavior * newbhv)
{
	quackBehavior = newbhv;
}

void FlyWithWings::fly()
{
	std::cout << "I'm flying!" << std::endl;
}

void FlyNoWay::fly()
{
	std::cout << "I can't fly!" << std::endl;
}

void Quack::quack()
{
	std::cout << "Quack." << std::endl;
}

void MuteQuack::quack()
{
	std::cout << "<< Silence >>" << std::endl;
}

void Squeak::quack()
{
	std::cout << "<< Squeak >>" << std::endl;
}

void MallardDuck::display()
{
	std::cout << "I'm a real Mallard Duck!" << std::endl;
}

void FlyRocketPowered::fly()
{
	std::cout << "I'm flying with a rocket!" << std::endl;
}

void ModelDuck::display()
{
	std::cout << "I'm a model duck!" << std::endl;
}
