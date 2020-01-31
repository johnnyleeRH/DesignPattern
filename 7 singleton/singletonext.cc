#include "singletonext.h"
#include <cstdio>

SingletonExt::SingletonExt(/* args */)
{
}

SingletonExt::SingletonExt(const SingletonExt&) {
}

SingletonExt& SingletonExt::getSingletonExt() {
  static SingletonExt singleext[SingletonExt::maxcnt_];
  static int index = 0;
  return singleext[(index++)%(SingletonExt::maxcnt_)];
}

int main() {
  SingletonExt& single1 = SingletonExt::getSingletonExt();
  SingletonExt& single2 = SingletonExt::getSingletonExt();
  SingletonExt& single3 = SingletonExt::getSingletonExt();
  printf("inst1 0x%x, inst2 0x%x, inst3 0x%x.\n", &single1, &single2, &single3);
}