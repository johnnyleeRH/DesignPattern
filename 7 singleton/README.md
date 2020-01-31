# 单例模式
Ensure a class has only one instance, and provide a global point of access to it.
确保某一个类只有一个实例，而且自行实例化并向整个系统提供这个实例
## 应用
* 生成唯一序列号的环境
* 共享访问点或共享数据
* 创建一个对象需要消耗的资源过多，如IO、数据库等资源
* 需要大量静态常量或静态方法（如工具类）的环境
## 扩展
有固定数目上限的单例模式
