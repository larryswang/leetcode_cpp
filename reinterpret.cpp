#include <iostream>
using namespace std;
int main(){
    char cval[]="nmsl";
    char *p1=cval;
    short int *p2=reinterpret_cast<short int*>(p1);
    cout<<cval[0]<<cval[1]<<endl;
    cout<<p1<<"ok"<<endl;
    cout<<p2<<endl;
    return 0;
}
