class SingletonExt {
private:
  /* data */
  SingletonExt(/* args */);
  SingletonExt(const SingletonExt&);
  static const int maxcnt_ = 2;
public:
  static SingletonExt& getSingletonExt();
};