# 模板方法模式
Define the skeleton of an algorithm in an operation,deferring some steps tosubclasses.Template Method lets subclasses redefine certain steps of an algorithmwithout changing the algorithm's structure.</br>
定义一个操作中的算法的框架，而将一些步骤延迟到子类中。使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤</br>
## 应用
* 封装不变部分，扩展可变部分，把认为是不变的算法封装在父类实现
* 父类提取公共代码，行为由父类控制，子类实现
* 多个子类有公有的方法，并且逻辑基本相同时可以使用
## 扩展
设置`钩子方法（Hook Method）`来控制各子类行为的差别
***
![UML](https://github.com/johnnyleeRH/DesignPattern/blob/master/10%20template/template.png)