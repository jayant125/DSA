// 14. Write a program that will tell the number of dogs and chicken are there when the
// user will provide the value of total heads and legs.
// For example:
// Input: heads -> 4 legs -> 12
// Output: dogs -> 2 chicken -> 2
#include<iostream>
using namespace std;
int main(){
    int heads, legs, dogs, chicken;
    cout <<"Enter the number of Dogs"<<endl;
    cin >>dogs;
    cout <<"Enter the number of Chicken"<<endl;
    cin >>chicken;
    heads = dogs + chicken;
    legs = 4*dogs + 2*chicken;
    cout <<"Heads ->"<<heads<<" Legs ->"<<legs<<endl;
    return 0;
}
