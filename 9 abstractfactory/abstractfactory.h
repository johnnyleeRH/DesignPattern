class ProductA {
  public:
    void sharedmethod();
    virtual void dosomething() = 0;
};

class ConcretePA1 : public ProductA {
  public:
    virtual void dosomething();
};

class ConcretePA2 : public ProductA {
  public:
    virtual void dosomething();
};

class ProductB {
  public:
    void sharedmethod();
    virtual void dosomething() = 0;
};

class ConcretePB1 : public ProductB {
  public:
    virtual void dosomething();
};

class ConcretePB2 : public ProductB {
  public:
    virtual void dosomething();
};

class Creator {
  public:
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
};

//produce production line 1
class Creator1 : public Creator {
  public:
    virtual ProductA* createProductA();
    virtual ProductB* createProductB();
};

//produce production line 2
class Creator2 : public Creator {
  public:
    virtual ProductA* createProductA();
    virtual ProductB* createProductB();
};