/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Semer Aissami
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60};

    // to check display  before sorting the first 20 elements
    cout << "Array before sorting:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    
   // Bubble Sort
for (int pass = 0; pass < 99; pass++) {
    for (int j = 0; j < 99 - pass; j++) {
        if (numbers[j] > numbers[j + 1]) {
            int temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
        }
    }
}

    // So what's basically happening first the computer is going to see basically
    // read the arry 99 times and after doing it its going to be like:
    //"then i have to put each of then close to each other and see wich one is bigger"
    //then the computer would say " okay this is bigger and go next to this"
    // and the loop its going to make repeat this 99 times whast going to end up,
    //moving the pieces 99 times and because its always checking wich one is bigger
    //after 99 times its going to have the order desire, its like moving dominos pieces
    // till everything is in order." this next to this, and this one next to this one"
    // 99 times..

    // Display AFTER sorting (first 20 elements)
    cout << "\nArray after sorting:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    //what's happening here is that is going print the array in the order i previously sorted it
    // in this case i wanted to see the 100 elements but the " i < 100; can be change to the amount
    // of elements i would like to be displayed 20 is enough to check if the code worked.

    return 0;
}
