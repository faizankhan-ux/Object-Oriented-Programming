#include<iostream>
#include<string>
using namespace std;

/*  Object : Entities in real world
 Classes : Blueprint of these entities
 EX- car company , class and student */


class Student{
public:
     int Rollno;
     int Age;
     string Name;
     float Cgpa;

     Student(int Rollno,int Age,string Name,float Cgpa){
          this->Rollno = Rollno;
          this->Age = Age;
          this->Cgpa = Cgpa;
          this->Name = Name;
     }

     void getInfo(){
          cout<<"Roll no : "<<Rollno<<endl;
          cout<<"Age : "<<Age<<endl;
          cout<<"Name: "<<Name<<endl;
          cout<<"Cgpa: "<<Cgpa<<endl;
     }

     
};

class Teacher{
     
     
     //Properties or Attributes
     string Name;
     string Dept;
     string subject;
     double salary;

     //Methods
     void changeDept(string newDept){
          Dept = newDept;
     }
     

};


int main(){

     Student s1(25 , 17 , "Faizan" , 8.9);
     s1.getInfo();
     
     
     


     return 0;
}