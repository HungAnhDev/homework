#include <iostream>
using namespace std;

int main(){
long long ngay, thang, nam;
freopen("input.inp", "r",stdin);
freopen("output.out", "w",stdout);
cin>>thang>>nam;
switch (thang){
    case 4:
    case 6:
    case 9:
    case 11:
        ngay = 30;
        break;
    case 2:
        if((nam%4==0) && (nam%100!=0) || (nam%400==0)){
            ngay = 29;
        }
        else{
            ngay = 28;
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ngay = 31;
        break;
    default:
        cout<<"Thang khong ton tai";
}
cout<<ngay;
}
