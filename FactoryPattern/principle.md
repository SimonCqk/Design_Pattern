### ����ģʽ
### Factory Pattern

<br>

##### ������һ����������Ľӿڣ������������Ҫʵ������������һ�����������������ʵ�����Ƴٵ����࣬���ﵽ�����󴴽��Ĺ��̷�װ��Ŀ�ġ�

<br>

##### Define an interface for creating an object, but let subclasses to decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses for encapsulating objects creation.

<br>

##### ��ʹֻ��һ��ConcreteCreator������������Ȼ��Ч�����������ǽ���ʵ�֡��͡�ʹ�á����

##### Even though there is only one ConcreteCreator, Factory Method is still useful �� It helps us decouple between "implement" and "use".

<br>

##### ��������ԭ��Ҫ�������󣬲�Ҫ���������ࡣ

###### ����������ѭ��ԭ���ָ������

- ���������Գ��о����������
- ��Ҫ���������Ծ�����
- ��Ҫ���ǻ�������ʵ�ֵķ���

##### Dependency Inversion Principle: Depend upon abstractions. Do not depend upon concrete classes.

###### Some guidelines help you follow the principle.

- No variable should hold a reference to a concrete class.
- No class should derive from a concrete class.
- No method should override an implemented method of any of its base classes.

<br>

##### �����������Ϊ����Ϊ�˴����������̵�һ���ԣ��Լ��ü��˵��ں������������Լ��ĵ��ԣ�����Ӧ����Ƴ�����������࣬���ҽ�����Ĺ���������������С�ͬ���ģ�����֮�����ǻ�Ӧ����һ�µ�ԭ�Ϲ���������

<br>

##### Take pizza store designing for example. For the consistency of creating pizzas, and remain flexible to process some other follow up things for franchises, we'd design abstract pizza store class, and put abstract factory method into it. Meanwhile, we'd provide similar ingredient supply plan.