#include <iostream>
using namespace std;
int main(){
    int num, prev = 0, next = 0, val = 1;
    cout<<"Enter number : ";
    cin>>num;

    do{
        cout<<val<<endl;
        prev = val;
        next = prev+val;
        val = next;

    }while(val<=num);
}
//1,1,2,3,5,8;