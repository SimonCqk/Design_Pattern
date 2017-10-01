#include"duck.h"

int main() {
	Duck *mallard = new MallardDuck;
	mallard->performFly();
	mallard->performQuack();
}