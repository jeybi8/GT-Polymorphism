#include <iostream>
using namespace std;

class Calculator {
public:
   
int add(int a, int b) {
return a + b;
}

int add(int a, int b, int c) {
return a + b + c;
}

float add(float a, float b) {
return a + b;
}

int subtract(int a, int b) {
return a - b;
}

   
int multiply(int a, int b) {
return a * b;
}

    
float divide(float a, float b) {
if (b == 0) {
cout << "Cannot divide by zero!" << endl;
return 0;
} else {
return a / b;
    
}
}
};

int main() {
    Calculator calc;
    int choice, num1, num2, num3;
    float num1f, num2f;

cout << "=== Simple Calculator ===" << endl;
cout << "1. Add two integers" << endl;
cout << "2. Add three integers" << endl;
cout << "3. Add two floats" << endl;
cout << "4. Subtract two integers" << endl;
cout << "5. Multiply two integers" << endl;
cout << "6. Divide two floats" << endl;

cout << "Enter your choice (1-6): ";
cin >> choice;

switch(choice) {
    case 1:
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Result: " << calc.add(num1, num2) << endl;
    break;
    case 2:
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Result: " << calc.add(num1, num2, num3) << endl;
    break;
    case 3:
    cout << "Enter two floating-point numbers: ";
    cin >> num1f >> num2f;
    cout << "Result: " << calc.add(num1f, num2f) << endl;
    break;
    case 4:
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Result: " << calc.subtract(num1, num2) << endl;
    break;
    case 5:
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Result: " << calc.multiply(num1, num2) << endl;
    break;
    case 6:
    cout << "Enter two floating-point numbers: ";
    cin >> num1f >> num2f;
    cout << "Result: " << calc.divide(num1f, num2f) << endl;
    break;
    default:
    cout << "Invalid choice!" << endl;
}

return 0;
}
