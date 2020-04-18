  	#include <iostream>
 	#include <string.h>
	
	using namespace std;
	
	void bineri (int desimal)
	{
		int sisa,hasil;
		if(desimal <=1)
		{
			cout<<desimal;
			return;
		}
		
		sisa=desimal %2;
		hasil=desimal /2;
		bineri(hasil);
		cout<<sisa;
	}
	
	int main ()
	{
		int angka,biner,sisa,n,hasil;
		
		cout<<"Masukkan angka desimal: ";
		cin>>angka;
		cout<<"Angka binerinya adalah: ";
		bineri(angka);
	}
