#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	 if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    cout << a; // in ra b cx dc vi luc nay a va b = nhau 
	return 0;
}
