class Command {
  public:
    virtual void  execute(){};
};

class Receiver {
  public:
    virtual void dosomething(){};
};

class ConcreteRecv1 : public Receiver {
  public:
    virtual void dosomething();
};

class ConcreteRecv2 : public Receiver {
  public:
    virtual void dosomething();
};

class ConcreteCmd1 : public Command {
  public:
    ConcreteCmd1(Receiver& recv);
    virtual void execute();
  private:
    Receiver* recv_;
};

class ConcreteCmd2 : public Command {
  public:
    ConcreteCmd2(Receiver& recv);
    virtual void execute();
  private:
    Receiver* recv_;
};

class Invoker {
  public:
    void setCmd(Command& cmd);
    void action();
  private:
    Command* cmd_;
};
