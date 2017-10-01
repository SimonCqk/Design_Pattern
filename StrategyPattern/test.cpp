#include"duck.h"

int main() {
	Duck *mallard = new MallardDuck;
	mallard->performFly();
	mallard->performQuack();
	Duck *model = new ModelDuck;
	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered);
	model->performFly();
}