#include <iostream>
using namespace std;


class Employee {
public:
   
virtual void showDetails() {
cout << "Employee details" << endl;
}
};


class Manager : public Employee {
public:
    
void showDetails() override {
cout << "I am a Manager. I manage teams." << endl;
}
};


class Developer : public Employee {
public:
    
void showDetails() override {
cout << "I am a Developer. I write code." << endl;
}
};

int main() {
int choice;
    
cout << "What type of employee would you like to create?" << endl;
cout << "1. Manager" << endl;
cout << "2. Developer" << endl;

cout << "Enter your choice 1 or 2: ";
cin >> choice;

    
Employee* em;

if (choice == 1) {
em = new Manager(); 
} else if (choice == 2) {
em = new Developer(); 
} else {
    
cout << "Invalid input!" << endl;
return 0;
}


em->showDetails();

delete em;

return 0;
}
