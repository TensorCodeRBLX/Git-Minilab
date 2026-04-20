#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;



  // changed
  MyClass a(5);
  cout << a.getX() << endl;
}
