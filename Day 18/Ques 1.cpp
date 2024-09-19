#include <iostream>
#include <tuple>
using namespace std;

class Person{
private:
    string firstName;
    string lastName;
    int age;
public:
    Person(string firstName,string lastName,int age){
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }
    string getFullName(){
        return firstName+" "+lastName;
    }
    tuple<string,string,int> getDetails(){
        return make_tuple(firstName,lastName,age);
    }
};
int main(){
    Person A("Aman","Kumar",19);
    cout<<A.getFullName()<<endl;
    auto[firstName,lastName,age] = A.getDetails();
    
    cout<<"First Name: "<<firstName<<endl;
    cout<<"Last Name: "<<lastName<<endl;
    cout<<"Age: "<<age<<endl;
}
