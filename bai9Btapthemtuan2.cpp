#include <iostream>

using namespace std;

int main() {
	int n;
    int sotachra;
    int s = 0;
    cin >> n;
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    cout << "tong cac chu so cua n la: "<< s;
	return 0;
}
