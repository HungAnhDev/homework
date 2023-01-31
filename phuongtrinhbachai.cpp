#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float a, b, c, d, x1, x2, nghiem;
  cin >> a >> b >> c;
  if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem" << endl;
            } else {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else {
            if (c == 0){
            cout << "Phuong trinh co nghiem la 0" << endl;
            }
            else {
              d = (-c/b);
              cout << "Phuong trinh co nghiem: " << d<< endl;
            }
        }
  }
  else {
    nghiem = b*b - 4*a*c;
    if (nghiem > 0) {
      x1 = (-b + sqrt(nghiem)) / (2*a);
      x2 = (-b - sqrt(nghiem)) / (2*a);
      cout << "Phuong trinh co 2 nghiem phan biet  = " << x1 << " va x2 = " << x2 << endl;
    }
    else if (nghiem == 0) {
      x1 = x2 = -b / (2*a);
      cout << "Phuong trinh co nghiem kep la " << x1 << endl;
    }
    else {
      cout << "Phuong trinh vo nghiem" << endl;
    }
  }
  return 0;
}
