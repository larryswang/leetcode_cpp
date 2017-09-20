#include <iostream>
using namespace std;

int cutrod(int* p, int n){
    int r[n];
    r[0]=0;
    for(int j=1; j<n; j++){
        int q=-1;
        for(int i=1; i<=j; i++){
            q=max(q, p[i]+r[j-i]);  
        }
        r[j]=q;
    }
    return r[n-1];
}

int main(int argc, char* argv[]){
    int p[11]={0,1,5,8,9,10,17,17,20,24,30};
    int* pArray=p;
    cout<<cutrod(pArray,3);
}
