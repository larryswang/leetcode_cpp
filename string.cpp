#include <iostream>
#include<vector>
using namespace std;
int main(){
    string str("i don't know!");
    vector<int> ivec;
    for(vector<int>::size_type ix=0; ix!=str.size();++ix){
        ivec[ix]=str[ix]; 
    }
    for(vector<int>::iterator iter=ivec.begin(); iter!=ivec.end();
            ++iter){
        *iter=0;
    }
}
