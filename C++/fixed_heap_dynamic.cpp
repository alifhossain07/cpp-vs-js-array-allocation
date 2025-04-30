//A Fixed Heap Dynamic Array is an array whose size is determined at runtime but remains constant throughout its lifetime. The memory for this array is allocated on the heap, and the array's size is fixed once it is allocated.

#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    //Allocating memory on the heap
    int* arr = new int[size];  
    
    for(int i=0; i<size; i++) arr[i] = i+1;
    
    cout << "Fixed Heap Dynamic: ";
    
    for(int i=0; i<size; i++) 
    cout << arr[i] << " ";
    
    return 0;
}
