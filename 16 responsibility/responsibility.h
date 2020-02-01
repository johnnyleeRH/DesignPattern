class Handle {
  private:
    Handle* next_;
  public:
    Handle();
    void SetNextHandle(Handle& handle);
    void HandleMessage(int level);
  protected:
    virtual int GetHandlerLevel() = 0;
    virtual void echo() = 0;
};

class ConcreteHandle1 : public Handle {
  public:
    explicit ConcreteHandle1(int level);
  protected:
    virtual int GetHandlerLevel();
    virtual void echo();
  private:
    int level_;
};

class ConcreteHandle2 : public Handle {
  public:
    explicit ConcreteHandle2(int level);
  protected:
    virtual int GetHandlerLevel();
    virtual void echo();
  private:
    int level_;
};