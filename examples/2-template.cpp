// overloading functions
#include <iostream>
using namespace std;

template<class T>
T mul(T a, T b) {
  return a*b;
}

/*int mul (int a, int b) {
  return (a*b);
}

double mul (double a, double b) {
  return (a*b);
}*/

int main () {
  int x=5,y=2;
  double n=5.0,m=2.0;
  cout << mul<int>(x,y) << '\n';
  cout << mul<double>(n,m) << '\n';
  return 0;
}
