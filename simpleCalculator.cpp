#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Give the first number : "<<endl;
    cin>>num1;
    cout<<"Give the second number : "<<endl;
    cin>>num2;
    cout<<"Choose the operation which do you want to perform : "<<endl; 
    cout<<"(Please enter '+' for addition, '-' for substraction, '*' for multiplication, '/' for devision )"<<endl;
    char ch;
    cin>>ch;
    switch(ch){
    case '+':
    cout<<"Answer is "<<num1+num2<<endl;
    break;
    case '-':
    cout<<"Answer is "<<num1-num2<<endl;
    break;
    case '*':
    cout<<"Answer is "<<num1*num2<<endl;
    break;
    case '/':
    cout<<"Answer is "<<num1/num2<<endl;
    break;
    default:
    cout<<"Invalid operation is choosen"<<endl;   
    }



}