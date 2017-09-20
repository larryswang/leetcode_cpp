#include <iostream>
using namespace std;

class student{
    private:
        int id;
        float chinese, english, math;
    public:
        student();
        student(int m_id, float m_chinese, float english, float math);
        void show();
        ~student();
};

student::student(){
    id=0;
    chinese= english= math=0;
}  

student::student(int m_id, float m_chinese, float m_english, float m_math){
    id=m_id;
    chinese=m_chinese;
    english=m_english;
    math=m_math;
}

void student::show(){
    cout<<id<<endl;
    cout<<chinese<<endl;
    cout<<english<<endl;
    cout<<math<<endl;
}

student::~student(){
    cout<<"I am good";
    int *p=&id;
    delete[] p;
}
int main(){
    student s1(100,90,80,70);
    s1.show();
    cout<<"quiting.....";
    return 0;
}
