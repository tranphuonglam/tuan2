#include <iostream>
#include <cmath>
 using namespace std;
 
 int main() {
 	int n; 
 	cin >> n;
 	if(n < 2){
        cout << "No";
        return 0;
    }
    int bien;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            bien++;
        }
    }
    if(bien == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
 	return 0;
 }
