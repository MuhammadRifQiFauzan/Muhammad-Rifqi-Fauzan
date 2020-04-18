 #include <iostream>
 #include <string.h>
 using namespace std;
 
 int main ()
 {
 	char kalimat[100];
 	int jum_kata;
 	
 	cout<<"Masukkan Kalimat: ";
 	cin.getline(kalimat,sizeof(kalimat));
 	cout<<"Jumlah katanya adalah ";
 	jum_kata=0;
 	
 	for(int a=0;kalimat[a];a++)
	jum_kata++;
 	
 	cout<<cin.gcount() -1;
 }
