 #include <iostream>
using namespace std;

void tukar(float &a, float &b){
	float baru = a;
	a = b;
	b = baru;
}

int main(){
	float a,b;
	cout << "Sebelum ditukar" << endl;
	cout << "a : "; cin >> a;
	cout << "b : "; cin >> b;
	tukar(a,b);
	cout << "Setelah ditukar"<<endl << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	return 0;
}
