#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string program_name("our_program");
string version("1.01");

string mumble(int *array, int size);

int main(){
    int array[2];
    int *pArray=array;
    int size=1;
    cout<<mumble(pArray, size).c_str()<<endl;
    return 0;
}

string mumble(int *array, int size){
    if(!array){
        ostringstream outmessage;
        outmessage<<"error:"<<program_name<<"--"<<":"<<__FILE__<<":"<<__LINE__;
        return outmessage.str();
    }
    else{
    return "";
    }
}
