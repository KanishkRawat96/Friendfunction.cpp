#include <iostream>
#include <string>
using namespace std;

// Forward declaration of the friend function
void displayStudentDetails(class Student &student);

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize student details
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    // Friend function declaration
    friend void displayStudentDetails(Student &student);
};

// Friend function definition
void displayStudentDetails(Student &student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    // Creating a Student object
    Student student("John Doe", 20, "Computer Science", "Software Engineering");

    // Displaying student details using the friend function
    displayStudentDetails(student);

    return 0;
}
