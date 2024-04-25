#include<iostream>
using namespace std;
int factorialFinder(int number){
    ll ans = 1;
    for(int i=1;i<=number;i++){
        ans *= i;
    }
    return ans;
}
int main(){
    int number;
    cin>>number;
    cout<< factorialFinder << endl;
}