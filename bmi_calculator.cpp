/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Semer Aissami
 * Date: 24220668
 *
 

#include <iostream>
using namespace std;

int main() {

    // Declare variables
    string name;
    int age;
    double weight, height, bmi;

    // Greet the user
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "This program will calculate your Body Mass Index." << endl;
    cout << endl;

    cout << "What is your name? ";
    cin >> name;

   
    cout << "How old are you? ";
    cin >> age;

    cout << endl;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    cout << "\nHello " << name << "!" << endl;
    cout << "Your BMI is: " << bmi << endl;

    //This code will print the bmi and tell the user after the simple formula is applied persoanlized by the user input and responding with their name
  
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    }
    else if (bmi < 25) {
        cout << "You are in the normal weight category." << endl;
    }
    else if (bmi < 30) {
        cout << "You are overweight." << endl;
    }
    else {
        cout << "You are obese." << endl;
    }

    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}

  
