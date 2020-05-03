#include <iostream>
using namespace std;

struct data 
{
	long long int stambuk;
	string alamat;
};
main ()
{
	struct data x[2];
	
	for (int i=0;i<2;i++)
	{
		cout<<"Stambuk\t: ";
		cin>>x[i].stambuk;
		cout<<"Alamat\t: ";
		cin>>x[i].alamat;
		cout<<"\n";
		
	}cout<<endl;
		for(int i=0;i<2;i++)
		{
			cout<<"\n Data ke-"<<i+1<<endl;
			cout<<"Stambuk\t: "<<x[i].stambuk<<endl;
			cout<<"Alamat\t: "<<x[i].alamat<<endl;
		
		}
		
		return 0;
		
}
