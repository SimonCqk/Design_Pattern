### 装饰者模式
### Decorator Pattern

<br>

##### 动态地将责任附加到对象上，若要扩展功能，装饰着提供了比继承更有替代的方案。装饰者可以在所委托被装饰者的行为之前与/或之后，加上自己的行为，以达到特定的目的。

<br>

##### Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality. The decorator adds its own behavior either before and/or after delegating to the object it decorates to do the rest of the job.

<br>

##### 以设置咖啡店饮料贩卖体系为例，如果按一般的继承体系，则会遇到类数量爆炸，设计死板，基类新功能不适用于所有子类等情况。可以利用装饰者模式动态的扩展功能，但是还是会用到继承，只不过这里的继承目的不是“获得行为”，而是“类型匹配”。

<br>

##### Take set-selling-system for coffee shop for example. If we adopt common heritance system , we may get class explosions, rigid designs, or add functionality to the sub-classes which may not appropriate.So decorator pattern is helpful to extend functionality dynamically, but heritance is still needed, not for "acquiring behavior" but for "matching type".