#include <iostream>

using namespace std;

int main() {
    long long tong;
    int n;
    cin>>n;
    tong = 0;
    int i = 1;
    while (i<=n){
        tong = tong + i ;
        i++;
    }
    cout<<tong;
    return 0;
}
