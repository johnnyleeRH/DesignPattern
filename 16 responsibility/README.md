# 责任链模式
Avoid coupling the sender of a request to its receiver by giving more than one object achance to handle the request.Chain the receiving objects and pass the request alongthe chain until an object handles it.</br>
使多个对象都有机会处理请求，从而避免了请求的发送者和接受者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有对象处理它为止</br>
## 应用
* 要么承担责任，做出回应；要么把请求转发到后序环节
* 每个实现类只要实现两个职责：一是定义自己能够处理的等级级别；二是对请求做出回应
* 优点是请求和处理者分开；缺点是链遍历性能开销及问题定位调试复杂
## 扩展
***
![UML](https://github.com/johnnyleeRH/DesignPattern/blob/master/16%20responsibility/responsibility.png)