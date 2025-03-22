// Take input of principle, time and rate and find the simple interest
#include<iostream>
using namespace std;
int main(){
    int principle, time, rate;
    cout << "Enter principle Amount"<<endl;
    cin >> principle;
    cout << "Enter Time "<<endl;
    cin >> time;
    cout << "Enter Rate "<<endl;
    cin >> rate;
    // Calculate simple interest
    int simple_interest = (principle * time * rate) / 100;
    cout << "Simple Interest is "<<simple_interest<<endl;
    return 0;
}
