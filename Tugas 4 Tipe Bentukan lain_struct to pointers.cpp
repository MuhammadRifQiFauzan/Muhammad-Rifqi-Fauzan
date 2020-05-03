#include <iostream>
using namespace std;

struct data
{
	string nama;
	long long int stambuk;
};
	int main()
	{
		struct data *identitas, bio;
		bio.nama = "Muhammad Rifqi Fauzan";
		bio.stambuk=13020190207;
		
		identitas = &bio;
		
		cout<<"Nama: "<<identitas ->nama<<endl;
		cout<<"Stambuk: "<<identitas ->stambuk<<endl;
		return 0;
	}
