//-------------------------------------------------------------------------2D Arrays & Multidimensional Arrays---------------------------------------------------------------------------  

//What is a 2D array? Two Dimensional Arrays are like a table, which has rows and columns. We can store information in rows and columns.
//For example, if we want to store the marks of 50 students in 5 subjects, we can create a 2D array of size 50x5.

//What is a 3D array? Three Dimensional Arrays are like a cube, which has rows, columns, and depth. We can store information in rows, columns, and depth.
//For example, if we want to store the marks of 50 students in 5 subjects in 3 terms, we can create a 3D array of size 50x5x3.

//Syntax for declaring a 2D array:
// data_type array_name[row_size][column_size];

//Declaration of a 2D array:
/*
int marks[5][3];
Here, marks is a 2D array of size 5x3, which can store 5x3 = 15 integer values.
*/

//Initialization of a 2D array:
/*
int marks[5][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90},
    {100, 110, 120},
    {130, 140, 150}
};

        OR

int marks[5][3] = {
    {10, 20, 30,40, 50, 60,70, 80, 90,100, 110, 120,130, 140, 150};

Here, marks is a 2D array of size 5x3, which stores 5x3 = 15 integer values.
*/


//Initialization of a 2D array using a loop:
/*
int marks[5][3];
for(int i = 0; i < 5; i++)
{
    for(int j = 0; j < 3; j++)
    {
        marks[i][j] = i * 10 + j * 10;
    }
}
Here, marks is a 2D array of size 5x3, which stores 5x3 = 15 integer values.
*/


//Accessing elements of a 2D array:
/*
int marks[5][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90},
    {100, 110, 120},
    {130, 140, 150}
};
cout << marks[0][0]; // Output: 10
cout << marks[0][1]; // Output: 20
cout << marks[0][2]; // Output: 30
cout << marks[1][0]; // Output: 40
cout << marks[1][1]; // Output: 50
cout << marks[1][2]; // Output: 60
cout << marks[2][0]; // Output: 70
cout << marks[2][1]; // Output: 80
cout << marks[2][2]; // Output: 90
cout << marks[3][0]; // Output: 100
cout << marks[3][1]; // Output: 110
cout << marks[3][2]; // Output: 120
cout << marks[4][0]; // Output: 130
cout << marks[4][1]; // Output: 140
cout << marks[4][2]; // Output: 150

            OR

int marks[5][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90},
    {100, 110, 120},
    {130, 140, 150}
};

for(int i = 0; i < 5; i++)
{
    for(int j = 0; j < 3; j++)
    {
        cout << marks[i][j] << " ";
    }
    cout << endl;
}
*/

// DMA in 2D arrays:
/*
We can also create 2D arrays dynamically using DMA.
Syntax for creating a 2D array dynamically:
data_type **array_name = new data_type*[row_size];
for(int i = 0; i < row_size; i++)
{
    array_name[i] = new data_type[column_size];
}

Example Code:
*/
#include <iostream>
using namespace std;

int main()
{
    int **marks = new int*[5];
    for(int i = 0; i < 5; i++)
    {
        marks[i] = new int[3];
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            marks[i][j] = i * 10 + j * 10;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 5; i++)
    {
        delete[] marks[i]; //we will study in the topic of new and delete operators
    }
    delete[] marks; //we will study in the topic of new and delete operators
    return 0;
}
// Output: 0 10 20
//         10 20 30
//         20 30 40
//         30 40 50
//         40 50 60

//Example Code:
//using function to print 2D array
#include <iostream>
using namespace std;
void printArray(int **arr, int row_size, int column_size)
{
    for(int i = 0; i < row_size; i++)
    {
        for(int j = 0; j < column_size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int **marks = new int*[5];
    for(int i = 0; i < 5; i++)
    {
        marks[i] = new int[3];
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            marks[i][j] = i * 10 + j * 10;
        }
    }
    printArray(marks, 5, 3);
    for(int i = 0; i < 5; i++)
    {
        delete[] marks[i]; //we will study in the topic of new and delete operators
    }
    delete[] marks; //we will study in the topic of new and delete operators
    return 0;
}   
// Output: 0 10 20
//         10 20 30
//         20 30 40
//         30 40 50
//         40 50 60
