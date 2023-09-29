
//playing with double pointers..

#include<iostream>
using namespace std;

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;


    cout<<"printing p"<<p<<endl;
    cout<<"address of p"<<&p<<endl;
    cout<<"exact same by single pointer "<<*p<<endl;

//these three will give exact same values
    cout<<"value at i"<<i<<endl;
    cout<<"value at i"<<*p<<endl;
    cout<<"value at i"<<**p2<<endl;

//these three will give exact same values
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

}