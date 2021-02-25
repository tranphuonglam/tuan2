#include <iostream>
#include <cmath>
 using namespace std;
 
 int main() {
 
    int soDong;
    cin >> soDong;
    for(int i = 1; i <= soDong; i++) { 
        // in ky tu khoang trang
        for(int j = i; j < soDong; j++) {
            cout << " ";
        }
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }
 	return 0;
 }
