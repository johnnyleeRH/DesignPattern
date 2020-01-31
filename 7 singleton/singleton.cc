#include "singleton.h"
#include <cstdio>

Singleton::Singleton(/* args */)
{
}

Singleton::Singleton(const Singleton&) {
}

Singleton& Singleton::getSingleton() {
  static Singleton single;
  return single;
}

int main() {
  Singleton& single1 = Singleton::getSingleton();
  Singleton& single2 = Singleton::getSingleton();
  printf("inst1 0x%x, inst2 0x%x.\n", &single1, &single2);
}