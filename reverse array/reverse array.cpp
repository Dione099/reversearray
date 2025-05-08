// reverse array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function prototypes
int* ReverseArray(int const arr[], int size);
void print(int const arr[], int size);

int main() {
    const int SIZE = 10;
    int original[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "Original array:" << endl;
    print(original, SIZE);

    int* reversed = ReverseArray(original, SIZE);

    cout << "Reversed array:" << endl;
    print(reversed, SIZE);

    delete[] reversed;

    return 0;
}

int* ReverseArray(int const arr[], int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[size - 1 - i];
    }
    return newArr;
}

void print(int const arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
