// Sort string in increased order

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    for(int i = 0;i < s.length();i++){
        for(int j = 0;j < s.length() - 1 - i;j++){
            if(s[j] > s[j + 1]){
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    cout<<"After sorting : "<<s;
}