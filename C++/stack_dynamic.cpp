//A Stack-Dynamic Array is an array whose size is determined at runtime, but the memory is allocated on the stack when the function is called
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    //Size is determined at runtime
    int arr[size];  
    for(int i=0; i<size; i++) arr[i] = i+1;
    
    cout << "Stack Dynamic: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}