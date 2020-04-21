 #include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	struct data_tanggal 
{
	int tahun;
	int bulan;
	int tanggal;
};
	data_tanggal tgl0, tgl1; 
	tgl0.tanggal=28;
	tgl0.bulan=3;
	tgl0.tahun=2020;
//penugasan antara variabel struktur
	tgl1=tgl0;
	cout<<tgl1.tanggal<<'/'<<tgl1.bulan<<'/'<<tgl1.tahun;
}
