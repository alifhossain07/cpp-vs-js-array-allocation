//A Stack-Dynamic Array is an array whose size is determined at runtime, but the memory is allocated on the stack when the function is called

let n = 5;  
let arr = [];  


for (let i = 1; i <= n; i++) {
    arr.push(i);
}

console.log("Stack Dynamic:", arr.join(" "));

// The Array's size is dynamically allocated at run time