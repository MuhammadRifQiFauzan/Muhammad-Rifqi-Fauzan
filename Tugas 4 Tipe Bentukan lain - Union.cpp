#include <iostream>
using namespace std;

union data 
{ 
	int a; 
	int b;
};
	int main()
{
		union data dt;
		dt.a = 16;
		dt.b = 12 ; 
		cout<<"Data A : "<<dt.a<< "\nData B : " <<dt.b;
		
	return 0;
} 
