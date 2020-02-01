#include "template.h"
#include <iostream>
using namespace std;

bool Template::willdob() {
  return true;
}

void Template::docommon() {
  doA();
  if (willdob())
    doB();
}

void Concrete1::doA() {
  cout << "concrete 1 do A" << endl;
}

void Concrete1::doB() {
  cout << "concrete 1 do B" << endl;
}

void Concrete2::doA() {
  cout << "concrete 2 do A" << endl;
}

void Concrete2::doB() {
  cout << "concrete 2 do B" << endl;
}

bool Concrete2::willdob() {
  return false;
}

int main() {
  Concrete1 c1;
  Concrete2 c2;
  Template* client = &c1;
  client->docommon();
  client = &c2;
  client->docommon();
}