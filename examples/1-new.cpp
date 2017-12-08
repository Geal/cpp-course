#include <iostream>
#include <new>
using namespace std;

struct Option {
  int value;
  bool has_value;
};

int get(Option * opt) {}
bool is_some(Option * opt) {}
Option * some(int i){}
Option * non() {}


struct Coords {
  int x;
  int y;
};

Coords * f() {
  Coords * a = new Coords;
  
  a->x = 1; // (*a).x = 1;
  a->y = 2;

  Coords b;
  b.x = 3;
  b.y = 4;

  return a;
}

int main () {

  Coords * pointer = f();
  delete pointer;

  int i,n;
  int * p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p= new int[i];
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else {
    for (n=0; n<i; n++) {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;
  }
  return 0;
}
