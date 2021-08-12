#include<iostream>
#include<iomanip>  //For using setprecision()
using namespace std;

int main(){
    double num1,num2,sum,sub,mul,div;
    int rem;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << showpoint;    // "Showpoint" is used to show point in result
    cout << fixed;
    cout << setprecision(2);  //"setprecision" is used show how many values we wanna show INCLUDING before point value.

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = (int) num1 % (int) num2;
    cout <<setw(20) << "Sum is: " <<  sum <<endl;
    cout << noshowpoint;  //"noshowpoint" is used to not show the points in result
    cout <<setw(20) << "Substraction is: " << sub <<endl;
    cout <<setw(20) << "Multiplication is: " << mul <<endl;
    cout <<setw(20) << "Division is: " << div <<endl;
    cout <<setw(20) << "Remainder is: " << rem;
    return 0;
}