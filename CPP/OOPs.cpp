#include <bits/stdc++.h>
using namespace std;

//Note: 
// 1. Class will not take any space(or memory)
// 2. When we create an object it will take some space
// 3. we define constructor same as class name but there is no return type
// 4. And it will call automatically when object is created.
// 5. this keyword is refering the attribute of current object.


class Car
{
    public:
    string brand;
    string model;
    int year;
    Car(string b, string m, int y){
        brand = b;
        model = m;
        year = y;
    }
    void displayInfo(){
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Student{
  public:
  int roll;
  string name;
  int age;

  Student(int r, string n, int a){
    roll = r;
    name = n;
    age = a;
  }
  void display(){
    cout << "Roll: " << roll << ", Name: " << name << ", Age: " << age << endl;
  }
};

int main(){
    Car car1("Toyota", "Camry", 2020);
    Car car2("Honda", "Civic", 2019);

    Car *car3 = new Car("Ford", "Mustang", 2021);

    car1.displayInfo();
    car2.displayInfo();
    car3->displayInfo();
    delete car3; // free the allocated memory

    // Student object

    Student student1(1, "Shivam", 20); // it will create inside the stack memory
    Student student2(2, "Ram", 22);
    Student *student3 = new Student(3, "Mohan", 21); // it will create inside the heap memory
    student1.display();
    student2.display();
    student3->display();
    delete student3; // free the allocated memory
    return 0;
}