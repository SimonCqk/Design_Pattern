### 观察者模式
### Observer Pattern

<br>

##### 定义了对象之间的一对多依赖(主题-观察者们)，这样一来，当一个对象改变状态时，它的所有依赖者都会收到通知并更新。

<br>

##### Define a one-to-many dependency between objects(subject and observers) so that when one object changes state, all of its dependents are notified and updated automatically.

<br>

##### 设计：为了交互对象之间的松耦合设计而努力。松耦合的设计之所以能让我们建立有弹性的OO系统，能够应对变化，是因为对象之间的互相依赖降到了最低。

##### Design: Strive for loosely coupled designs between objects that interact. Loosely coupled designs allow us to build flexible OO systems that can handle change because they minimize the interdependency between obejcts.

<br>

> 以设计气象监测应用为例，由`WeatherData`对象追踪天气状况，并由三种布告板显示，并且需要具备拓展性。

<br>

> Take Designning app of Weather Station for example，the `WeatherData` object takes charge of
monitoring current weather states and shown by three kinds of bulletin board. And this system 
must have a good expendability.

<br>

##### Schematic Diagram

![ws](https://github.com/SimonCqk/Design_Pattern/blob/master/image/WeatherStation.png?raw=true)