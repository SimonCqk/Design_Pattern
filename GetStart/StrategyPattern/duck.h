/*
 * 以设计<鸭子>为例，所有的鸭子都可以游泳，但是不同品种鸭子
 * 的叫和飞行的行为差异非常大，所以将这一容易变化的部分取出
 * 独立设计。
 * 如果使用继承自超类的方法，那么就会被实现所捆绑，每一个子
 * 类都需要改动<飞>和<游泳>两种行为，代码的可复用性差。
 */

/*
 * Take Duck-designing for example, all kinds of ducks
 * can swim, but behave quite separated from one variety
 * to another in quacking or flying. So we'd extract what
 * easily varies and redesign these parts individually.
 * if all sub classes are inherited from base class, then
 * we'll be hijacked by implementation, all related code
 * should be changed, which has a bad reusability.
 */
#include <iostream>

class FlyBehavior;
class QuackBehavior;

// base abstract class - duck.
class Duck {
public:
  Duck() {} // default constructor.
  virtual void display() = 0;
  virtual void siwm();
  virtual void performFly();
  virtual void performQuack();

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
