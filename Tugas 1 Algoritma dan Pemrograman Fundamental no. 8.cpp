#include <iostream>
using namespace std;

int main(){
	int jumlah, dus[3][3], c=0, k=1;
	
	cout << "Masukkan jumlah dus : ";cin >> jumlah;
	if (jumlah>9){
		cout << "Jumlah dus yang anda masukkan melebihi kapasitas kontainer";
	}
	
	else if(jumlah==9){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==8){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
				dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==7){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
				dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==6){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==5){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
											  dus[1][2] = 0;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==4){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
							   dus[1][1] = 0; dus[1][2] = 0;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==3){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
				dus[1][0] = 0; dus[1][1] = 0; dus[1][2] = 0;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==2){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
							   				  dus[0][2] = 0;
				dus[1][0] = 0; dus[1][1] = 0; dus[1][2] = 0;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else if(jumlah==1){
		cout << "Nomor dus : ";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				c = c + 2; dus[i][j] = c;
							   dus[0][1] = 0; dus[0][2] = 0;
				dus[1][0] = 0; dus[1][1] = 0; dus[1][2] = 0;
				dus[2][0] = 0; dus[2][1] = 0; dus[2][2] = 0;
				cout << dus[i][j] << " ";
			}
		}
		cout << "\n________________\n\n";
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout << "Nomor dus = " << k << " : " << dus[i][j] << "\n";
				k = k + 1;
			}
		}
	}
	
	else
		return 0;
}
