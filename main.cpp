#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::sqrt;

int main(){
    // variant 1 
    int a;
    int b;
    int c;
    cout << "Input a, b and c" << endl;
    cin >> a; cin >> b; cin >> c;

    float p = (a + b + c)/2.0;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Area of a triangle: " + std::to_string(area) << endl;

    return 0;
}

