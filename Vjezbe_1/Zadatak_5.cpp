#include<iostream>
#include<cmath>
using namespace std;
float _my_cube(float x){
	return pow(x,3);
}
int main()
{
	float a;
	cout << "Unesite broj:\n";
	cin >> a;
	cout << _my_cube(a);
	cout <<"\n";
	return 0;
}
