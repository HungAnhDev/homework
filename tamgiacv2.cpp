#include <iostream>

using namespace std;

int main() {
   int a, b, c, lmao;
   cin>>a>>b>>c;
   if (a+b>c||a+c>b||b+c>a){
        lmao = (a*a)+(b*b);
        if (lmao=(c*c)){
            cout<<"Tam giac la tam giac vuong";
        }
        else if (lmao<(c*c)){
            cout<<"Tam giac la tam giac tu";
        }
        else {
            cout<<"Tam giac la tam giac nhon";
        }
   }
   else{
    cout<<"Tam giac khong ton tai";
   }
}
