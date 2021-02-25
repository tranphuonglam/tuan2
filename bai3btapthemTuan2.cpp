#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b, lcm;
    cin >> a >> b;
    int maxV = a*b;
    int step =  max(a, b);
    for(int i = step; i <= maxV; i+= step){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    cout << "BCNN(a, b) = " << lcm;
}
