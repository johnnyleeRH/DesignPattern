#include "command.h"
#include <iostream>
using namespace std;

void ConcreteRecv1::dosomething() {
  cout << "concrete receiver 1 execute" << endl;
}

void ConcreteRecv2::dosomething() {
  cout << "concrete receiver 2 execute" << endl;
}

ConcreteCmd1::ConcreteCmd1(Receiver& recv) {
  recv_ = &recv;
}

void ConcreteCmd1::execute() {
  cout << "concrete command 1 called." << endl;
  recv_->dosomething();
}

ConcreteCmd2::ConcreteCmd2(Receiver& recv) {
  recv_ = &recv;
}

void ConcreteCmd2::execute() {
  cout << "concrete command 2 called." << endl;
  recv_->dosomething();
}

void Invoker::setCmd(Command& cmd) {
  cmd_ = &cmd;
}

void Invoker::action() {
  cmd_->execute();
}

int main() {
  Invoker invoker;
  ConcreteRecv2 recv;
  ConcreteCmd1 cmd(recv);
  invoker.setCmd(cmd);
  invoker.action();
  return 0;
}
