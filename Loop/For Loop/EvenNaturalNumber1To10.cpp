// Question: Write a program to display the 1 to 10 even natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 1;i <= 10;i++){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }
}