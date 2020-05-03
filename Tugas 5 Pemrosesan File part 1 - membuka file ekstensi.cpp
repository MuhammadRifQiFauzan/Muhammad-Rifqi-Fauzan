#include <iostream>
#include <fstream>
using namespace std;
int main()
{

	ofstream myfile;

	myfile.open("coba.txt", ios::app);

	if(!myfile.fail())
	{
		myfile<<"Membuka File"<<endl;
		myfile.close(); 
		cout<<"Saya belajar membuat file"<<endl;
	}else
		{
			cout<<"File tidak ditemukan"<<endl;
		}
	return 0;
}
