#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,i,j,k;
	cin >> n;
	 for(i=0;i<=n;i++){ 
  for(j=1;j<=i;++j) 
    cout<<" ";                             
  for(k=n-i;k>=1;k--)cout<<"*";                 
  cout<<"\n"; 
} 
   
   cout<<"\n"; 
   return 0;
}
