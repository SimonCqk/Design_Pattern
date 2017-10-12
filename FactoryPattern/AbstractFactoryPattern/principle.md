### 抽象工厂模式
### Abstract Factory Pattern

<br>

##### 提供一个接口，用于创建相关或依赖对象的家族，而不需要明确指定具体类（从具体的类中解耦）。

<br>

##### Provide an interface for creating families of related or dependent objects without specifying their concrete classes (decoupled from any of the specifics of the concrete classes).

<br>

##### 区分`工厂方法 FM`和`抽象工厂 AF`（目的都是把应用程序从特定的实现中解耦）：
- FM使用`类`，而AF使用`对象`。
- FM通过继承创建对象，而AF通过对象的组合。
- FM只创建一个产品，而AF创建的是产品的家族。

<br>

##### Distinguish from `Factory Method` and `Abstract Factory`(both of them aim to docouple from specific implementation):
- FM uses `class` while AF uses `object`.
- FM creates objects by inheriting while AF by combining of objects.
- FM creates a single product while AF create families of products.