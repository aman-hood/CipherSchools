#include <iostream>
#include <vector>
using namespace std;

class Car{
private:
    string brandName;
    string model;
    string engine;
    int noOfSeats;
public:
    Car(string b,string m,string e,int n) : brandName(b),model(m),engine(e),noOfSeats(n) {}
    void displayInfo(){
        cout<<"Details of Car -\n";
        cout<<"Brand Name: "<<brandName<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine: "<<engine<<endl;
        cout<<"No. of seats: "<<noOfSeats<<endl;
    }
};
int main(){
    Car A("Honda","Amaze","1.2L i-VTEC petrol",5);
    A.displayInfo();
}
