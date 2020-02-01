#include "responsibility.h"
#include <iostream>
using namespace std;

Handle::Handle() {
  next_ = NULL;
}

void Handle::SetNextHandle(Handle& handle) {
  next_ = &handle;
}

void Handle::HandleMessage(int level) {
  if (level == GetHandlerLevel())
    return echo();
  if (next_ == NULL) {
    cout << "no valid handler" << endl;
    return;
  }
    return next_->HandleMessage(level);
}

ConcreteHandle1::ConcreteHandle1(int level) {
  level_ = level;
}

ConcreteHandle2::ConcreteHandle2(int level) {
  level_ = level;
}

int ConcreteHandle1::GetHandlerLevel() {
  return level_;
}

int ConcreteHandle2::GetHandlerLevel() {
  return level_;
}

void ConcreteHandle1::echo() {
  cout << "concrete handle 1 handler" << endl;
}

void ConcreteHandle2::echo() {
  cout << "concrete handle 2 handler" << endl;
}

int main() {
  ConcreteHandle1 handle1(1);
  ConcreteHandle2 handle2(2);
  ConcreteHandle1 handle3(3);
  Handle* head = &handle1;
  head->SetNextHandle(handle2);
  handle2.SetNextHandle(handle3);
  head->HandleMessage(1);
  head->HandleMessage(2);
  head->HandleMessage(3);
  head->HandleMessage(4);
}