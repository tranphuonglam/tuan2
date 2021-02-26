#include <iostream>
#include <cmath>

using namespace std;

int divide(int a, int b)
{
 if(b==0) return a;
 else return divide(b,a%b);
}

int main() {
  double tu, mau;
  cin >> tu >> mau;
  cout << "tuso/mauso = " << tu/mau << endl ;
  int toigian = divide(tu,mau);
  printf("phan so toi gian la %.f/%.f", tu/toigian, mau/toigian);
	return 0;
}
