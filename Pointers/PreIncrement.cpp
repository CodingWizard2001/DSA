// Pre Increment

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    int b = ++(*p);
    cout<<a<<" "<<b;
}