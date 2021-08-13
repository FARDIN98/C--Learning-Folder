// Some Assignment Operator: +=,-=,*=,/=,%=

#include<iostream>
using namespace std;

int main(){
    int x=6,y=2;
    x += y;  // x += means x = x + y  
    cout << x << endl;

    x -= y;
    cout << x << endl;

    x *= y;
    cout << x << endl;

    x %= y;
    cout << x;
    return 0;
}