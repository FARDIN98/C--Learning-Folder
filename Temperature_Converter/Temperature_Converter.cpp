// Write a programme to show the temperature in celsius

#include<iostream>
using namespace std;

int main(){
    double far, cel;
    cout << "Enter fahrenheit: ";
    cin >> far;
    cel = (5*far - 160) / 9;
    cout << "Celsius is: " << cel;
    return 0;
}

// Enter fahrenheit: 120.5
// Celsius is: 49.1667

// Write a programme ro show the temperature in fahrenheit
#include<iostream>
using namespace std;

int main(){
    double cel,far;
    cout << "Enter Celsius: ";
    cin >> cel;
    far = cel*1.8+32;
    cout << "Fahrenheit is: " << far;
    return 0;
}

// Enter Celsius: 32.5
// Fahrenheit is: 90.5