#include<iostream>
using namespace std;

int main(){
    double base,height,area;
    cout << "Enter The Base of your triangle: ";
    cin >> base;
    cout << "Enter The Height of your triangle: ";
    cin >> height;
    area = 0.5*base*height;
    cout << "Area of your Triangle is: " << area;
    return 0;
}

// Enter The Base of your triangle: 10
// Enter The Height of your triangle: 5
// Area of your Triangle is: 25  