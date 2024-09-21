#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string filename;
    cout<<"Enter the filename: ";
    cin>>filename;
    string name, email, phone;
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter your email: ";
    cin>>email;
    cout<<"Enter your phone number: ";
    cin>>phone;

    ofstream file(filename);

    if (file.is_open()) {
        file<<"Name: "<<name<<endl;
        file<<"Email: "<<email<<endl;
        file<<"Phone: "<<phone<<endl;
        file.close();
        cout<<"Details written to file successfully!"<<endl;
    }
    else cout<<"Unable to open file"<<endl;

    // Read from the file and print the details
    ifstream readFile(filename);
    string line;
    if (readFile.is_open()) {
        while (getline(readFile, line)) {
            cout<<line<<endl;
        }
        readFile.close();
    } 
    else cout<<"Unable to open file"<<endl;
}
