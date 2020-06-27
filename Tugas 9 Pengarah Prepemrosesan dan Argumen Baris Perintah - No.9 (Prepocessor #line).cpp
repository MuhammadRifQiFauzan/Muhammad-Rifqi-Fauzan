#include <iostream>
#line 2 "Tugas9"
using namespace std;
int main () 
{
   cout << "Baris program : " << __LINE__ << endl;
   cout << "Nama file : " << __FILE__ << endl;
   cout << "Tanggal Pengerjaan : " << __DATE__ << endl;
   cout << "Waktu pengerjaan : " << __TIME__ << endl;
   return 0;
}

