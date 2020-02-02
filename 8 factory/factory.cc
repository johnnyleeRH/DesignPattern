#include "factory.h"
#include <iostream>
using namespace std;

void ConcreteP1::show() {
  cout << "concretep1 show" << endl;
}

void ConcreteP2::show() {
  cout << "concretep2 show" << endl;
}

template<class T>
T* Factory::CreateProduct(int type) {
  if (1 == type) {
    return new ConcreteP1;
  }
  if (2 == type)
    return new ConcreteP2;
  return NULL;
}

int main() {
  Product* p = Factory::CreateProduct<Product>(2);
  p->show();
}
