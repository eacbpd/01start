#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int prt(const int n){
	cout << n << "cnm" << endl;
}
int main()
{
auto rfun = bind(prt, 9);
cout <<  rfun();
return 0;
}
