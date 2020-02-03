#include "abstractfactory.h"
#include <iostream>
using namespace std;

void ProductA::sharedmethod() {
  cout << "product a sharedmethod" << endl;
}

void ConcretePA1::dosomething() {
  cout << "concrete product A 1" << endl;
}

void ConcretePA2::dosomething() {
  cout << "concrete product A 2" << endl;
}

void ProductB::sharedmethod() {
  cout << "product b sharedmethod" << endl;
}

void ConcretePB1::dosomething() {
  cout << "concrete product B 1" << endl;
}

void ConcretePB2::dosomething() {
  cout << "concrete product B 2" << endl;
}

ProductA* Creator1::createProductA() {
  return new ConcretePA1;
}

ProductB* Creator1::createProductB() {
  return new ConcretePB1;
}

ProductA* Creator2::createProductA() {
  return new ConcretePA2;
}

ProductB* Creator2::createProductB() {
  return new ConcretePB2;
}

int main() {
  Creator* c1 = new Creator1;
  Creator* c2 = new Creator2;
  ProductA* pa1 = c1->createProductA();
  ProductA* pa2 = c2->createProductA();
  pa1->dosomething();
  pa2->dosomething();
}
