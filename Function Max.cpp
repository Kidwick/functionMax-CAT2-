#include<iostream>
using namespace std;

//Variable declaration
int num1,num2,num3;

void max()
{
    //User input
    cout<<"Enter three numbers:";
    cin>>num1;
    cin>>num2;
    cin>>num3;

    //logic initialisation
    if(num1>num2 && num1>num3)
    {
        cout<<"greatest num:"<<max<<endl;
    }
    else if(num2>num1 && num2>>num3)
    {
        cout<<"greatest num:"<<max<<endl;
    }
    else
    {
        cout<<"greatest num:"<<max<<endl;
    }
    

}
int main()
{
    cout<<"max"<<endl;
    max();

    return 0;
}