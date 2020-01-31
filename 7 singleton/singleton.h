class Singleton {
private:
  /* data */
  Singleton(/* args */);
  Singleton(const Singleton&);
public:
  static Singleton& getSingleton();
};

