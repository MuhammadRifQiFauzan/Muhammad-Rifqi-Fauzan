#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama,jurusan,nim,kelas;
};
struct nilai{
	float tugas,kuis,MID,UAS;
};

int main()
{

	ofstream myfile;
	mahasiswa mhs;
	nilai saya;
		myfile.open("coba.txt", ios::app);

	if(!myfile.fail())
	{
		myfile<<"Membuka File"<<endl;
		myfile.close(); 
		cout<<"Berkas Stambuk Anda"<<endl;
	}else
		{
			cout<<"File tidak ditemukan"<<endl;
		}
    mhs.nama="MUHAMMAD RIFQI FAUZAN";
    mhs.nim="13020190207";
    mhs.kelas="A4";
    mhs.jurusan="Teknik Informatika";
	
    saya.tugas=95.00f;
    saya.kuis=88.00f;
    saya.MID=85.50f;
    saya.UAS=90.00f;
    
    cout<<"--------------------"<<endl;
    cout<<"Nama\t\t: "<<mhs.nama<<endl;
    cout<<"Stambuk\t\t: "<<mhs.nim<<endl;
     cout<<"Kelas\t\t: "<<mhs.kelas<<endl;
    cout<<"Jurusan\t\t: "<<mhs.jurusan<<endl;
    cout<<"Nilai Tugas\t: "<<saya.tugas<<endl;
    cout<<"Nilai Kuis\t: "<<saya.kuis<<endl;
    cout<<"Nilai MID\t: "<<saya.MID<<endl;
    cout<<"Nilai UAS\t: "<<saya.UAS<<endl;



	return 0;
}
