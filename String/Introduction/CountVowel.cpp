// Write a program to count no. of vowels present in the string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int ans = 0;
    for(int i = 0;i < str.length();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'o' || str[i] == 'U') ans++;
    }
    cout<<"Total no. of vowels : "<<ans;
}