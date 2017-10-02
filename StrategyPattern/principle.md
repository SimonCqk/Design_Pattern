### 策略模式
### StrategyPattern

<br>

##### 定义算法族，分别封装起来，让它们之间可以互相替换，此模式让算法的变化独立于使用算法的客户。

<br>

##### Define a family of algorithms, encapsulate each one, and makes them interchangeable from clients that use it.

<br>


> 以设计<鸭子>为例，所有的鸭子都可以游泳，但是不同品种鸭子
的叫和飞行的行为差异非常大，所以将这一容易变化的部分取出
独立设计。
如果使用继承自超类的方法，那么就会被实现所捆绑，每一个子
类都需要改动<飞>和<游泳>两种行为，代码的可复用性差。

<br>

> Take Duck-designing for example, all kinds of ducks
can swim, but behave quite separated from one variety
to another in quacking or flying. So we'd extract what
easily varies and redesign these parts individually.
if all sub classes are inherited from base class, then
we'll be hijacked by implementation, all related code
should be changed, which has a bad reusability.
