#include <iostream>

using namespace std;

int main() {

  int a, b;

  int c = 0;

  cin >> a;

  while(a != 0) {

    b = a % 10;

    c = c * 10 + b;

    a /= 10;

  }

  cout <<  c;

  return 0;

}