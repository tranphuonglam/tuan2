#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int n;
    cout << "Nhap n = "<< endl;
    cin >> n;
    int a = sqrt(n);
    if(a*a == n){
        cout << n << " la so chinh phuong"<< endl;
    }
    else {
        cout << n << " khong phai so chinh phuong"<< endl;
    }
    return 0;
}
