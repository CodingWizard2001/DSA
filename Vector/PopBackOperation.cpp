// Pop Back Operation

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.pop_back(); // Remove last element
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}