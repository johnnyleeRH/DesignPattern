# 命令模式
Encapsulate a request as an object,therebyletting you parameterize clients with different requests,queue or log requests,andsupport undoable operations.</br>
将一个请求封装成一个对象，从而让你使用不同的请求把客户端参数化，对请求排队或者记录请求日志，可以提供命令的撤销和恢复功能</br>
## 应用
* 对客户发出的命令进行封装，每个命令是一个对象，避免客户、负责人、组员之间的交流误差，封装后的结果就是客户只要说一个命令，我的项目组就立刻开始启动，不用思考、解析命令字符串
* 调用者与接收者角色之间没有任何依赖关系，只要调用Command抽象类的execute方法，不需要了解到底是哪个接收者执行
* Command子类可以非常容易地扩展
## 扩展
* 结合`责任链`模式，实现命令族解析
* 结合`模板方法`模式，减少Command子类的膨胀问题
***
![UML](https://github.com/johnnyleeRH/DesignPattern/tree/master/15%20command/command.png)