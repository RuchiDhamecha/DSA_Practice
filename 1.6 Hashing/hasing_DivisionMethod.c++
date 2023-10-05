// Division of hashing to find frequency

// in hashing we store occureance of array at its index value itself 
// by marking its index as 1
// but if array is [1, 3, 5 , 18, 123234] u cannot make such huge hash and to mark 123234 as 1

// for this we have 3 methods  
// 1. division method 
// 2. folding method
// 3. mid square method

// lets understand division method as its bit imp,

// int arr[5] = {1, 3, 5 , 18, 123234};

// while storing in hash at 1st index 1 will be marked from 0 , at 3rd index 1 will be marked as for other but for 123234 hash arr will be so long 

// for this lets divide it ,
// lets mark its %10 value i.e last digit as index as 1
// instead of marking till 123234

// indexes 1 2 5 8 4 will be marked as 1

// so will will need only 6 sized hash array instead of size 123234
// max 9 in any case

//to retrieve element just number % 10

//======================================================

// but what if 2 or more elements have same mod value
// for this we store it in linear chaining using linked list form in sorted way

// in hash arr store the elemet itself at its %10 index
// arr[3]={25,12,5};

// hash ==>
// index arr_element
// 0
// 1
// 2       12
// 3
// 4
// 5       25,5 //linked list

// but at 5th index it is not sorted so using liked list it will be placed at sorted manner

// hash ==>
// index arr_element
// 0
// 1
// 2       12
// 3
// 4
// 5       5,25 //linked list



