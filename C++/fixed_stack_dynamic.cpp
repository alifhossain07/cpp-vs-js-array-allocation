//A Fixed Stack-Dynamic Array is an array with a fixed size determined at compile time, but the memory is allocated at runtime on the stack when a function is called.

#include <iostream>
using namespace std;

int main(){

// - Size is fixed at compile time 
 int arr[5] = {1, 2, 3, 4, 5};
 cout<<"Fixed Stack Dynamic Array: "<<endl;
 for(int i=0; i<5; i++){
  cout<<arr[i]<<" ";
 }
//Memory is allocated at runtime on the stack
}