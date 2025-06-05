//--------------------------------------------------LOOPS in C++--------------------------------------------------
/*
Loops can execute a block of code as long as a specified condition is reached.
Loops are handy because they save time, reduce errors, and they make the code more readable.
*/

/*
Use 'for' loop when you know how many times you want to execute a block of code.
Syntax:
for(initialization; condition; increment/decrement){
    //block of code
}
*/
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
Use 'while' loop when you want to execute a block of code as long as a condition is true.
Syntax:
while(condition){
    //block of code
}
*/

/*
Use 'do while' loop to execute a block of code once, and then repeat the loop as long as a condition is true.
Syntax:
do{
    //block of code
}
while(condition);
*/

//For loop
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){ //initialization, condition and increment is necessary
        cout<<i<<endl;
    }
    return 0;
}
//Run the code in your compiler and see the output  

//While loop
#include<iostream>
using namespace std;

int main(){
    int i = 0;
    while(i < 5){ //condition is necessary
        cout<<i<<endl;
        i++;
    }
    return 0;
}
//Run the code in your compiler and see the output

//Do While loop
#include<iostream>
using namespace std;

int main(){
    int i = 0;
    do{
        cout<<i<<endl;
        i++; //increment is necessary
    }
    while(i < 5); //semicolon is necessary
    return 0;
}
//Run the code in your compiler and see the output

//Nested For Loop
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 3; i++){  //outer loop
        for(int j = 0; j < 3; j++){ //inner loop
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
//Run the code in your compiler and see the output