// passing parameters by reference
#include <iostream>
using namespace std;

void duplicate (int& a, int& b, int& c) {
  a*=2;
  b*=2;
  c*=2;
}

string concat(const string first, const string second) {
  return first + second;
}
string concat2(const string& first, const string& second) {
  return first + second;
}
string concat3(const string* first, const string* second) {
  return first + second;
}

int main () {
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
string a = "abcd";
string b ="efgh";
  cout << "concat: " << concat(a, b)    << endl;
  return 0;
}
