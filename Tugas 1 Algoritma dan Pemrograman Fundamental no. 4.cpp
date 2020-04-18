 #include <iostream>
using namespace std;

int main(){
	int jumlah, c=0;
	cout << "Jumlah bilangan : "; cin >> jumlah ;
	int tempat[jumlah];
	
	for(int a=0; a<jumlah; a++){
		cin >> tempat[a];
	}
	for(int a=1; a<jumlah; a++){
		tempat[c] = tempat[a] + tempat[c];
	}
	cout << "Hasil Penjumlahan : " << tempat[c] << endl;
	return 0;
}
