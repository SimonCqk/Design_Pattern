### ����ģʽ
### Command Pattern

<br>

##### �������󡱷�װ�ɶ����Ա�ʹ�ò�ͬ�����󣬶��л�����־��������������������ģʽҲ֧�ֿɳ����Ĳ�����

<br>

##### Encapsulates a request as an object, thereby letting you parameterize other objects with different requests,queue or log requests, and support undoable operations.

<br>

##### ������󽫾����������͸�����Ľ����߰�װ������ֻ�豩¶`.execute()`�ӿڹ�������ʹ�ã��⽫�������������������߽��

<br>

##### The command object encapsulates a request by binding together a set of actions on a specific receiver. Then just make `.execute()` interface public for invokers to do invoke, all these things decoupled request-invoker and request-receiver.

##### ��ͼ����

![cp](https://github.com/SimonCqk/Design_Pattern/blob/master/image/CommandPattern.png?raw=true)

<br>

##### �����һ��ң����Ϊ����ÿ����۶�Ӧһ�����
