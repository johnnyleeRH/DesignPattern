//Simple Factory Pattern

class Product {
  public:
    virtual void show() = 0;
};

class ConcreteP1 : public Product {
  public:
    virtual void show();
};

class ConcreteP2 : public Product {
  public:
    virtual void show();
};

class Factory {
  public:
    template<class T>
    static T* CreateProduct(int type);
};