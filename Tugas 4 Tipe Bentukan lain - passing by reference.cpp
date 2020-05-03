#include <iostream>
using namespace std;

struct data
{
	char nama[30];
	long long int stambuk;
	float nilai;
};
void display(struct data *dt)
{
	cout<<"Stambuk: "<<dt ->stambuk;
	cout<<"\nNama: "<<dt ->nama;
	cout<<"\nNilai: "<<dt ->nilai;
}

	int main()
	{
		data dt;
	
		cout<<"Stambuk: ";cin>>dt.stambuk;
		cout<<"Nama: ";cin>>dt.nama;
		cout<<"Nilai: ";cin>>dt.nilai;
		display(&dt);
	
		
		return 0;
	}
