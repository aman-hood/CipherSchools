#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int vowels = 0;
    int consonants = 0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') vowels++;
        else consonants++;
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants;
}
