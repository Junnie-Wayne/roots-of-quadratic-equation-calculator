#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float discriminant;
    float realpart;
    float imaginary;


    cout << "Enter the coefficient of x^2: " << endl;
    cin >> a;

    cout << "Enter the coefficient of x: " << endl;
    cin >> b;

    cout << "Enter the constant: " << endl;
    cin >> c;

    discriminant = (b*b - 4 * a * c);

    if(discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "The roots are real and unequal." << endl << endl;
        cout << "The roots of the quadratic equation are " << x1 << " and " << x2 << endl;
    }
    else if(discriminant == 0) {
        x1 = (-b)/(2 * a);

        cout << "The roots are real and equal." << endl << endl;
        cout << "The root of the quadratic equation is " << x1 << endl;
    }
    else {
        realpart = (-b)/(2 * a);
        imaginary = sqrt(-discriminant)/(2 * a);

        cout << "The roots of the quadratic equation are complex and different." << endl << endl;
        cout << "The roots of the quadratic equation are " << "(" << realpart << " + " << imaginary << "i" << ")" << " and " << "(" << realpart << " - " << imaginary << "i"  << ")" << endl;
    }

  return 0;
}
