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
![avatar](data:image/png;base64,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)