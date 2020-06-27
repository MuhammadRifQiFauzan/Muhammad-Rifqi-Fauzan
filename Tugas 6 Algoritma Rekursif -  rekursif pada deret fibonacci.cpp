#include <iostream>
#include <conio.h>

using namespace std;
int S(int n)
{
if (n==1)
return (2);
else
return (2*n + S(n-1));
}
main ()
{
int n;
cout<<"Masukkan n = "; cin>>n;
cout<<"Deret S = 2 + 4 + 6 + 8 + 10\n";
cout<<"Jumlah Deret S = "<<S(n);
getch();
}
