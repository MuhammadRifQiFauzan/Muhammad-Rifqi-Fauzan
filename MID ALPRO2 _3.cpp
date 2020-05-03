#include <iostream>
#include <string.h>
using namespace std;

struct mahasiswa {
    string nama, nim;
    double tugas, kuis, uts, uas;
};

int main(){
    const int jumlah_mhs = 2;
    mahasiswa mhs[jumlah_mhs];
    int i;
    
    cout << "--------------------------------------------------------------------" << endl;
    cout << "\t NILAI AKHIR MAHASISWA TEKNIK INFORMATIKA\t" << endl;
     cout << "\t\t UNIVERSITAS MUSLIM INDONESIA\t" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

    
    i = 0;
    do {
    
        cout << "=====================================" << endl;
        cout << "\tDATA MAHASISWA KE- " << i+1 << endl;
        cout << "=====================================" << endl;

       
		
        cout << "NAMA MAHASISWA: ";
        cin >> mhs[i].nama;
        cout << "STAMBUK: ";
        cin >> mhs[i].nim;
        cout << "NILAI TUGAS: ";
        cin >> mhs[i].tugas;    
        cout << "NILAI KUIS: ";
        cin >> mhs[i].kuis;
        cout << "NILAI UTS: ";
        cin >> mhs[i].uts;
        cout << "NILAI UAS: ";
        cin >> mhs[i].uas;
       
        cout << "-------------------------------------------------------------------------------" << endl;
        cout<<endl;
        cout <<"NO."<<"\t"<< "NAMA" << "\t" << "STAMBUK" << "\t" << "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" <<endl;
        cout<<endl;
        cout << "-------------------------------------------------------------------------------";
        cout<<endl;



        cout <<i+1<<"\t"<< mhs[i].nama << "\t" << mhs[i].nim << "\t" << mhs[i].tugas << "\t" << mhs[i].kuis << "\t" << mhs[i].uts << "\t" << mhs[i].uas << "\t";
        cout<<endl;
    
        i = i + 1;
        cout<<endl;
    } while (i < jumlah_mhs);

    cout << endl;
}
