#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string Section;
    string Course;
    Student(string name,int age,string Section,string Course){
        this->name=name;
        this->age=age;
        this->Section=Section;
        this->Course=Course;
    }
    void updateName(string name){
        this->name=name;
    }
    void getDetails(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<Section<<endl;
        cout<<Course<<endl;
    }

};

int main(){
    Student *s1=new Student("Arun",21,"Sk","CSE");
    cout<<s1->name<<endl;
    s1->updateName("Sahil");
    s1->getDetails();
}