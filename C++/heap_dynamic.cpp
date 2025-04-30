#include <iostream>
using namespace std;

int main() {
    int size;  // Declare size as a variable

    // Ask the user to enter the array size
    cout << "Enter array size: ";
    cin >> size;

   
    int* arr = new int[size];  
    
 
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

  
    cout << "Heap Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Deallocate memory
    delete[] arr;

    return 0;
}
