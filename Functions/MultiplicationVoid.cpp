// Create a function to display multiply of two integers without any return data to main() function

#include<iostream>
using namespace std;

void multiply(int num1,int num2){
    cout<<"Multiply Will be : "<<(num1 * num2);
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    multiply(num1,num2);
}