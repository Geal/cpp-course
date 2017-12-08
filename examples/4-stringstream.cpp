#include <iostream>
#include <sstream>

using namespace std;

int main() {
  stringstream my_stream(ios::in|ios::out);
  std::string dat("1234");

  my_stream.str(dat);
  my_stream.seekg(0,ios::start);

  int val;
  my_stream >> val;

  val= val*val;

  my_stream.seekp(0,ios::start);
  my_stream << val;

  std::string new_val = my_stream.str();
  cout << new_val;

  return 0;
}
