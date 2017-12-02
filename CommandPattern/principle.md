### 命令模式
### Command Pattern

<br>

##### 将“请求”封装成对象，以便使用不同的请求，队列或者日志来参数化其他对象。命令模式也支持可撤销的操作。

<br>

##### Encapsulates a request as an object, thereby letting you parameterize other objects with different requests,queue or log requests, and support undoable operations.

<br>

##### 命令对象将具体的命令动作和该命令的接收者包装进对象，只需暴露`.execute()`接口供调用者使用，这将请求调用者与请求接收者解耦。

<br>

##### The command object encapsulates a request by binding together a set of actions on a specific receiver. Then just make `.execute()` interface public for invokers to do invoke, all these things decoupled request-invoker and request-receiver.

##### 类图如下

![cp](https://github.com/SimonCqk/Design_Pattern/blob/master/image/CommandPattern.png?raw=true)

<br>

##### 以设计一个遥控器为例（每个插槽对应一种命令）
