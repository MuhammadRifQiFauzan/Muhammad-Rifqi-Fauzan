#include <iostream>
using namespace std;


int faktorial (int bil)
{
      if(bil==1)
            return 1;
      else
            return bil*faktorial(bil-1);
}

int main ()
{
      int n;
      cout<<"\nMasukkan nilai n = ";
      cin>>n;
      cout<<"\nFaktorial "<<n<<"!= "<<faktorial(n)<<endl;

      return 0;
}
