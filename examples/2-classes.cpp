// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    void set_values (int,int);
    int area() {
      return width*height;
    }
  private:
protected:
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}
Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}
//Rectangle::Rectangle (int x, int y) : width(x), height(y) { }

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
