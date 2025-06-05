//--------------------------------------------------------------------------Arrays--------------------------------------------------------------------------------------------
// 1. Array is a collection of similar data type elements stored in contiguous memory locations.    
// 2. The elements of an array can be accessed using an index.
// 3. The index of the first element of an array is 0 and index of the last element of an array is size-1.
// 4. The size of an array must be a constant value.
// 5. The size of an array must be specified at the time of declaration.
// 6. The size of an array cannot be changed once it is declared.
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//What is a 1D array? One Dimensional Arrays are like a row of boxes, each box has a number on it and we can store information in each box.
//For example, if we want to store the marks of 50 students, we can create an array of size 50.

//Syntax for declaring a 1D array:
// data_type array_name[size];

//Declaration of a 1D array:
/*
int marks[5];
Here, marks is an array of size 5, which can store 5 integer values.
*/

//Initialization of a 1D array:
/*
int marks[5] = {10, 20, 30, 40, 50};
Here, marks is an array of size 5, which stores 5 integer values: 10, 20, 30, 40, 50.
*/

//Accessing elements of a 1D array:
/*
int marks[5] = {10, 20, 30, 40, 50};
cout << marks[0]; // Output: 10
cout << marks[1]; // Output: 20
cout << marks[2]; // Output: 30
cout << marks[3]; // Output: 40
cout << marks[4]; // Output: 50

            OR

int marks[5] = {10, 20, 30, 40, 50};
for(int i = 0; i < 5; i++)
{
    cout << marks[i] << " ";
}
*/


// DMA in 1D arrays:
/*
We can also create 1D arrays dynamically using DMA.
Syntax for creating a 1D array dynamically:
data_type *array_name = new data_type[size];
Example Code:
*/
#include <iostream>
using namespace std;

int main()
{
    int *marks = new int[5];
    for(int i = 0; i < 5; i++)
    {
        marks[i] = i * 10;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    delete[] marks; //we will study in the topic of new and delete operators
    return 0;
}
// Output: 0 10 20 30 40

/*
In the above code, we have created an integer array marks of size 5 dynamically using DMA.
We have initialized the array with values 0, 10, 20, 30, 40.
We have printed the elements of the array using a for loop.
Finally, we have deleted the array using delete[] marks.
*/

//Accessing Elements 
//Time Complexity: O(1)
//Space Complexity: O(1)

//Modifying Elements
//Time Complexity: O(1)
//Space Complexity: O(1)

//Inserting Elements
//Time Complexity: O(n)
//Space Complexity: O(1)

//Deleting Elements
//Time Complexity: O(n)
//Space Complexity: O(1)

//Searching Elements
//Time Complexity: O(n)
//Space Complexity: O(1)

//Sorting Elements
//Time Complexity: O(nlogn)
//Space Complexity: O(1)

//Reversing Elements
//Time Complexity: O(n)
//Space Complexity: O(1)

//Example Code:
#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    marks[2] = 35;
    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}
// Output: 10 20 35 40 50


//Example Code:
//using function to print array
#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    printArray(marks, 5);
    return 0;
}
// Output: 10 20 30 40 50
