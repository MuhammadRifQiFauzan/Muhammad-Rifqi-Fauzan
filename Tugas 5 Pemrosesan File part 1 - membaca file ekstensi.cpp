#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream myfile;
	char teks;
	
	myfile.open("Test*.txt");

	if(!myfile.fail())
	{
		cout<<"Isi dari file ->";
		
		while(!myfile.eof())
			{
				myfile.get(teks);
				cout<<teks;
			}
				myfile.close();
	}else
		{
			cout<<"Saya Membuka File"<<endl;
		
		}
	
	return 0;
}
