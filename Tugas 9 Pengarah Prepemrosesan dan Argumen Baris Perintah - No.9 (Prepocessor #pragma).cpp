#include <iostream>
using namespace std;
void func1();
void func2();
void func3();
#pragma starup func1
#pragma exit func3
void func1()
{
    cout<<"FIKOM"<<endl;
}
void func2()
{
    cout<<"UMI"<<endl;
}
void func3()
{
    cout<<"Teknik Informatika"<<endl;
}
int main ()
{
    func1();
    func2();
    func3();
    return 0;
}

