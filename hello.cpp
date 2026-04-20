#include <iostream>
#include "myclass.h"

using namespace std;

int main () {
  cout << "Hello World" << endl;

  // uh oh changes to same line!

  // changed
  // changed 2
  // mybranch changes
  MyClass a(5);
  cout << a.getX() << endl;
}
