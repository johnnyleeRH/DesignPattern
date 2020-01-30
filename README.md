# DesignPattern
作为《设计模式知禅（第2版）》的记录，及C++示例的自我整理
## 6大设计原则
### 单一职责原则
SRP(Single Responsibility Principle):应该有且仅有一个原因引起类的变更，适用于接口</br>
### 里氏替换原则
LSP(Liskov Substitution Principle):所有引用基类的地方必须能透明地使用其子类的对象</br>
如果子类不能完整地实现父类的方法，后者父类的某些方法在子类中已经发生“畸变”，则建议断开继承关系，采用依赖、聚集、组合等关系替代继承</br>
### 依赖倒置原则
DIP(Dependence Inversion Principle):模块间的依赖通过抽象发生，实现类之间不发生直接的依赖关系，变量的表面类型尽量是接口或抽象类</br>
### 接口隔离原则
ISP(Interface Segregation Principle):客户端不应该依赖它不需要的接口，首先必须满足单一职责原则</br>
### 迪米特法则
LOD(Law of Demeter),LKP(Least Knowledge Principle):低耦合，一个类对自己需要耦合或调用的类知道的最少</br>
### 开闭原则
OCP(Open Close Principle):对扩展开放，对修改关闭，高内聚，低耦合
