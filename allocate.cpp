#include <iostream>
int main(){
    int* p1= new int(34);
    int* p2= new int[6];
    for(int i=0;i<6;i++){
        p2[i]=i;
    }
    delete p1;
    delete p2;
}
