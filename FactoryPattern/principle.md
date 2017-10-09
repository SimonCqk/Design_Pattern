### 工厂模式
### Factory Pattern

<br>

##### 定义了一个创建对象的接口，但由子类决定要实例化的类是哪一个。工厂方法把类的实例化推迟到子类，来达到将对象创建的过程封装的目的。

<br>

##### Define an interface for creating an object, but let subclasses to decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses for encapsulating objects creation.

<br>

##### 即使只有一个ConcreteCreator，工厂方法依然有效，它帮助我们将“实现”和“使用”解耦。

##### Even though there is only one ConcreteCreator, Factory Method is still useful — It helps us decouple between "implement" and "use".

<br>

##### 依赖倒置原则：要依赖抽象，不要依赖具体类。

###### 几个帮助遵循此原则的指导方针

- 变量不可以持有具体类的引用
- 不要让类派生自具体类
- 不要覆盖基类中已实现的方法

##### Dependency Inversion Principle: Depend upon abstractions. Do not depend upon concrete classes.

###### Some guidelines help you follow the principle.

- No variable should hold a reference to a concrete class.
- No class should derive from a concrete class.
- No method should override an implemented method of any of its base classes.

<br>

##### 以设计披萨店为例。为了创建披萨流程的一致性，以及让加盟店在后续流程中有自己的弹性，我们应该设计抽象的披萨店类，并且将抽象的工厂方法放入此类中。同样的，除此之外我们还应该有一致的原料供给方案。

<br>

##### Take pizza store designing for example. For the consistency of creating pizzas, and remain flexible to process some other follow up things for franchises, we'd design abstract pizza store class, and put abstract factory method into it. Meanwhile, we'd provide similar ingredient supply plan.