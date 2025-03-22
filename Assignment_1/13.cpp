// 13. Write a program to find the euclidean distance between two coordinates.Take both the coordinates from the user as input.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cout<<"Enter the first coordinate(x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter the second coordinate(x2,y2): ";
    cin>>x2>>y2;
    int distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"The Euclidean distance between the two coordinates is: "<<distance;
    return 0;
}
