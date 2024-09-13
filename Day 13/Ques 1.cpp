#include <iostream>
#include <vector>
using namespace std;

int main(){
    // dynamic Integer
    int* dy_Int = new int;
    *dy_Int = 10;
    cout<<*dy_Int<<endl;
    delete dy_Int;
    
    // dynamic Character
    char* dy_Char = new char;
    *dy_Char = 'A';
    char ch= *dy_Char;
    cout<<ch<<endl;
    delete dy_Char;
    
    // dynamic Array
    int arr[5] = {0,2,4,6,8};
    int* dy_Arr = new int[5];
    for (int i=0;i<5;i++){
        dy_Arr[i] = arr[i];
        cout<<dy_Arr[i]<<" ";
    }
    cout<<endl;
    
    // dynamic Vector
    vector<int> v{1,3,5,7,9};
    vector<int>* dy_V = new vector<int>;
    for (int i=0;i<5;i++){
        (*dy_V).push_back(v[i]);
        cout<<(*dy_V)[i]<<" ";
    }
    cout<<endl;
    
    // dynamic String
    string str = "Hello World!";
    string* dy_Str = new string;
    *dy_Str = str;
    cout<<*dy_Str<<endl;
}
