#include <iostream>
using namespace std;

class Student{
private:
    int regisNo;
    string name;
    string section;
    int noOfSubject;
public:
    Student(int regisNo, string name, string section, int noOfSubject){
        this->regisNo = regisNo;
        this->name = name;
        this->section = section;
        this->noOfSubject = noOfSubject;
    }
    void display(){
        cout<<"Registration Number: "<<this->regisNo<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Section: "<<this->section<<endl;
        cout<<"No of Subjects: "<<this->noOfSubject<<endl;
    }
};
int main(){
    int regisNo, noOfSubject;
    string name, section;
    cin>>regisNo;
    cin.ignore();
    getline(cin,name);
    getline(cin,section);
    cin>>noOfSubject;
    Student obj(regisNo,name,section,noOfSubject);
    obj.display();
}
