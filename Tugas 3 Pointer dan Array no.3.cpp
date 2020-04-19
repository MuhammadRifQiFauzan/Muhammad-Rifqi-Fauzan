 #include <iostream>
using namespace std;
int main(){
	int a[3][3],b,c=0,k=1;
	
	cout << "Jumlah dus : "; cin >> b;
	if(b>9){
		cout << "Jumlah dus yang anda masukkan melebihi muatan kotainer" ;
		return 0;
	}
		
	cout << "Nomor dus = ";
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			c=c+2;
			a[i][j]=c;
			cout <<a[i][j]<<" ";
		}
	}
	cout << endl << "_______________" << endl;
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3 ; j++){
			cout << "Nomor dus = " << k << " : " << a[i][j] << endl;
			k=k+1;
		}
	}
	return 0;
}
