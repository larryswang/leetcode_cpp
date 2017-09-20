#include <iostream>
#include <vector>
//#include <string>
using namespace std;
int main(){
    string s = "i don't know!";
    vector<string>test;
    for(int i=0;i<s.size();i++){
        test.push_back(s[i]);
    }
    //for(int i=0; i<test.size();i++){
    //    test[i]=0;
    //}
    //cout<<test<<endl;
    return 0;
}
