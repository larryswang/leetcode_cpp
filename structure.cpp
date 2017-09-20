#include<iostream>
using namespace std;
struct person{
    int age;
    char gender;
};
int main(){
    person xiaoming={20,'M'};
    person *a=&xiaoming;
    //cout<<xiaoming<<endl;
    cout<<(*a).gender<<endl;    
}

