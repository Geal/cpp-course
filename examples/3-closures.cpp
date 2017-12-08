// generic lambda, operator() is a template with two parameters
auto glambda = [&foo](auto a, auto&& b) { return a < b; };
bool b = glambda(3, 3.14); // OK

// generic lambda, operator() is a template with one parameter
auto vglambda = [](auto printer) {
    return [=](auto&&... ts) { // generic lambda, ts is a parameter pack
        printer(std::forward<decltype(ts)>(ts)...);
        return [=]{ printer(ts...); }; // nullary lambda (takes no parameters)
    };
};
auto p = vglambda( [](auto v1, auto v2, auto v3) {
                          std::cout << v1 << v2 << v3;
                      } );
auto q = p(1, 'a', 3.14); // outputs 1a3.14
q();                      // outputs 1a3.14

[=]() -> int fun() {
  int a = 10;

  return [=]() {
    return a;
  }
}
struct X {
   int x, y;
   int operator()(int);
   void f() {
     // the context of the following lambda is the member function X::f
     [=]()->int {
         return operator()(this->x + y); // X::operator()(this->x + (*this).y)
                                         // this has type x*
         };
    }
};
```

```
#include <functional>
#include <vector>

class AddressBook
{
    public:
    std::vector<string> findMatchingAddresses (std::function<bool (const string&)> func)
    { 
        std::vector<string> results;
        for ( auto itr = _addresses.begin(), end = _addresses.end(); itr != end; ++itr )
        {
            // call the function passed into findMatchingAddresses and see if it matches
            if ( func( *itr ) )
            {
                results.push_back( *itr );
            }
        }
        return results;
