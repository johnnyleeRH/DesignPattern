# 工厂方法模式
Define an interface for creating an object,but let subclasses decide which class toinstantiate.Factory Method lets a class defer instantiation to subclasses.</br>
定义一个用于创建对象的接口，让子类决定实例化哪一个类。工厂方法使一个类的实例化延迟到其子类</br>
## 应用
* 良好的封装性，调用者不需要关心产品对象的创建细节
* 扩展性优秀，符合解耦框架
* 屏蔽了产品类，调用者只需要关心调用接口，实例化由工厂类负责（JDBC数据库切换，只需要更改驱动名称）
* new一个对象的替代品，当需要灵活可扩展框架时可以使用工厂类
## 扩展
扩展方式很多，结合使用疗效更广
* 弱化为简单工厂模式（静态工厂模式）
* 升级为多个工厂类，一个产品对应一个工厂类
* 延迟初始化，一个对象被消费完毕后，并不立即释放，可以用于某类产品限制最大实例化数量的情况
***
![UML]()