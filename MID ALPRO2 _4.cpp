#include <iostream>
using namespace std;

void ulang(int*a, int*b, int*c)
{	
	cout << "Hasil Pertukaran : " << *a << " " << *b << " " << *c << endl;
}

int main()
{
	int a=2, b=8, c=9;
	cout<<"Angka : "<<a<<" "<<b<<" "<<c<<endl;
	ulang(&c, &a, &b);
	return 0;
}
