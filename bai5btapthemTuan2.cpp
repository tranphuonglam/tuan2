#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b;
	cin >>a >> b;
	 while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    cout << a+b;
	return 0;
}
