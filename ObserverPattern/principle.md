### �۲���ģʽ
### Observer Pattern

<br>

##### �����˶���֮���һ�Զ�����(����-�۲�����)������һ������һ������ı�״̬ʱ���������������߶����յ�֪ͨ�����¡�

<br>

##### Define a one-to-many dependency between objects(subject and observers) so that when one object changes state, all of its dependents are notified and updated automatically.

<br>

##### ��ƣ�Ϊ�˽�������֮����������ƶ�Ŭ��������ϵ����֮�����������ǽ����е��Ե�OOϵͳ���ܹ�Ӧ�Ա仯������Ϊ����֮��Ļ���������������͡�

##### Design: Strive for loosely coupled designs between objects that interact. Loosely coupled designs allow us to build flexible OO systems that can handle change because they minimize the interdependency between obejcts.

<br>

> �����������Ӧ��Ϊ������`WeatherData`����׷������״�����������ֲ������ʾ��������Ҫ�߱���չ�ԡ�

<br>

> Take Designning app of Weather Station for example��the `WeatherData` object takes charge of
monitoring current weather states and shown by three kinds of bulletin board. And this system 
must have a good expendability.

<br>

##### Schematic Diagram

![ws](https://github.com/SimonCqk/Design_Pattern/blob/master/image/WeatherStation.png?raw=true)