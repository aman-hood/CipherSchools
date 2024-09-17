#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int width;
public:
    Rectangle(int l,int b) : length(l) , width(b) {}
    Rectangle(const Rectangle& other) : length(other.length), width(other.width) {}
    void Area(){
        cout<<"Area: "<<length*width<<endl;
    }
    void Perimeter(){
        cout<<"Perimeter: "<<2*(length+width)<<endl;
    }
};
int main(){
    int l,b;
    cin>>l>>b;
    Rectangle obj1(l,b);
    cout<<"Obj1 :"<<endl;
    obj1.Area();
    obj1.Perimeter();
    Rectangle obj2 = obj1; // copy constructor
    cout<<"Obj2 :"<<endl;
    obj2.Area();
    obj2.Perimeter();
}
