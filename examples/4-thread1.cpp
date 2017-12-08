#include <iostream>
#include <thread>

void f() {
  std::cout << "Hello, World" << std::endl;
}

int main() {
  std::thread t1(f);
  t1.join();

  return 0;
}
