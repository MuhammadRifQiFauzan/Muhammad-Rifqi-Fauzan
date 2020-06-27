#define NILAI 80
#if NILAI<70 //if
#define NILAI "TIDAK LULUS"
#elif NILAI>=70 //else if
#define NILAI "LULUS"
#else //else
#define NILAI "TIDAK ADA"
#endif
#include <iostream>
using namespace std;
int main(){
//pemanggilan macro NILAI
cout<<"NILAI ANDA : "<<(NILAI)<<endl;
return 0;
}

