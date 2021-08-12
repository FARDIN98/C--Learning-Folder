#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num1,num2,sum;
    double average;
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    sum = num1 + num2; 
    average = sum / 2;
    cout << "Sum is: "<<sum<<endl;
    cout<< "Average is: "<<average;
    getch();
}

// Output : Sum is : 40
//          Average is: 20

// #include<iostream>
// #include<conio.h>
// using namespace std;

// int main(){
//     double num;
//     cout << "Enter a double number: ";
//     cin >> num;
//     cout << "Entered double number is: "<< num;
//     getch();
// }