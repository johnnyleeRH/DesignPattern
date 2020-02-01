class Template {
  protected:
    virtual void doA() = 0;
    virtual void doB() = 0;
    // Hook Method
    virtual bool willdob();
  public:
    void docommon();
};

class Concrete1 : public Template {
  protected:
    virtual void doA();
    virtual void doB();
};

class Concrete2 : public Template {
  protected:
    virtual void doA();
    virtual void doB();
    virtual bool willdob();
};