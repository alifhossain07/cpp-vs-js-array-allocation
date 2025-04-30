#include <iostream>
using namespace std;

int main() {
    const int size = 5;  

    // Allocate memory on the heap for the array
    int* arr = new int[size];  
    
    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;  
    }


    cout << "Heap Dynamic ): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }

    // Deallocate memory 
    delete[] arr;

    return 0;
}
