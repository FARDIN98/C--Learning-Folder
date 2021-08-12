// Arithmetic Operator is +,-,*,/,%

// Make a simple calculator using arithmetic Operator

#include<iostream>
using namespace std;

int main(){
    double num1,num2,sum,substract,mul,div;
    int rem;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    if (num1 < num2){
        cout << "Your 1st number should bigger than 2nd number"<< endl;
        return 0;
    }
    sum = num1 + num2;
    substract = num1 - num2;
    mul = num1*num2;
    div = num1/num2;
    rem = num1 / num2;
    cout << "Sum is: "<< sum <<endl;
    cout << "Substract is: " << substract << endl;
    cout << "Multiplication is: "<< mul << endl;
    cout << "Division is: "<< div << endl;
    cout << "Remainder is: "<< rem ;  
    return 0;
}
// Sum is: 15
// Substract is: 5      
// Multiplication is: 50
// Division is: 2       
// Remainder is: 2