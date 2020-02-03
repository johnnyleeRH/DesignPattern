# 抽象工厂模式
Provide an interface for creating families of related or dependent objects withoutspecifying their concrete classes.</br>
为创建一组相关或相互依赖的对象提供一个接口，而且无须指定它们的具体类</br>
## 应用
* 有M个产品等级就有M个实现工厂类，在每个实现工厂中，实现不同产品族的生产任务
* 场景定义非常简单，一个对象族都有相同的约束则可以使用，如一个应用在不同操作系统平台上运行时，调用不同的工厂方法，由不同的产品类去处理与操作系统交互的信息
## 扩展
***
![UML]()