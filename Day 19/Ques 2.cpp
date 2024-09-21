#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename = "Ques1"; // file name
    ifstream file(filename);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout<<line<<endl;
        }
        file.close();
    }
    else cout<<"Unable to open file"<<endl;
}
