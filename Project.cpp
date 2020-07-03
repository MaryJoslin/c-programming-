// A C++ program to find the size of int,float,double and char //


#include<iostream>
using namespace std;
int main() 
{    
    cout<<"Size of char:"<<sizeof(char)<<" byte"<<endl;
    cout<<"Size of int:"<<sizeof(int)<<" bytes"<<endl;
    cout<<"Size of float:"<<sizeof(float)<<" bytes"<<endl;
    cout<<"Size of double:"<<sizeof(double)<<" bytes"<<endl;
    return 0;
}


// A C++ program to find the product of two numbers entered by the user //


#include <iostream>
using namespace std;
int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;
    productOfTwoNumbers = firstNumber * secondNumber;  
    cout << "Product = " << productOfTwoNumbers;     
    return 0;
}
