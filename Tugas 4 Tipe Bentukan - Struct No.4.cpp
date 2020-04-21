 #include <iostream>
 #include <string.h>
 using namespace std;
 //Deklarasi struct
 struct siswa
 {
 	int no_absen;
 	string nama;
 	float nilai;
 };
 	int main()
 	{
 		siswa deva,icha;//Deklarasi variabel struct
  	//Deklarasi pengaksesan member
 		deva.no_absen = 6;
 		deva.nama = "Deva Ayu Setia Putri";
 		deva.nilai = 92.0;
 		icha.no_absen = 16;
 		icha.nama = "Nur Aisyah Rauf";
 		icha.nilai = 98,5;
 		
 		cout<<"Nomor Absen: "<<deva.no_absen<<endl;
 		cout<<deva.nama<<"\nMendapatkan Nilai "<<deva.nilai<<endl;
 		cout<<endl;
 		cout<<"Nomor Absen: "<<icha.no_absen<<endl;
 		cout<<icha.nama<<"\nMendapatkan Nilai "<<icha.nilai<<endl;
 		
 		return 0;
	 }
