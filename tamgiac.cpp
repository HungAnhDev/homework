#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, chuvi, temp, temp2, dientich;
    cin>>a>>b>>c;
    if (a+b>c||a+c>b||b+c>a){
       chuvi = a + b + c;
       temp = (a+b+c)/2;
       temp2 = temp*(temp-a)*(temp-b)*(temp-c);
       dientich = sqrt(temp2);
       cout<<chuvi<<"  "<<dientich;
    }
    else{
        cout<<"Tam giac khong ton tai";
    }
    return 0;
}
