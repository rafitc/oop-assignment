#include <iostream>
using namespace std;
int main(){
    int num, fact = 1, val;
    cout<<"Enter a number : ";
    cin>>num;
    val = num;
    while (num!=0)
    {
        fact = fact * num;
        num--;
    }
    cout<<"Factorial of " <<val<<" is " <<fact<<endl;
    
}