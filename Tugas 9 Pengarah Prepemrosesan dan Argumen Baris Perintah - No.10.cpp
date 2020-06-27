#include <iostream>
#define x 10
using namespace std;
int main (){
    #if x == -10
    #error x tidak boleh bernilai negatif
    #endif
    
    return 0;
}


