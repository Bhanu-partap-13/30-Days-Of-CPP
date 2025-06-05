//---------------------------------------------------------Conditions In C++---------------------------------------------
/*
C++ usually use logical conditions to perform different actions based on different conditions.
1. Less than (<)
2. Greater than (>)
3. Less than or equal to (<=)
4. Greater than or equal to (>=)
5. Equal to (==)
6. Not equal to (!=)
7. Logical AND (&&)
8. Logical OR (||)
9. Logical NOT (!)
*/
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
Use 'if' statement to execute a block of code if a specified condition is true.
Syntax:
if(condition){
    //block of code
}
*/

/*
Use 'else' statement to execute a block of code if the same condition is false.
Syntax:
if(condition){
    //block of code
}
else{
    //block of code
}
*/

/*
Use 'else if' statement to specify a new condition to test, if the first condition is false.
Syntax:
if(condition1){
    //block of code
}
else if(condition2){
    //block of code
}
else{
    //block of code
}
*/

/*
Use 'switch' statement to select one of many code blocks to be executed.
Syntax:
switch(expression){
    case constant1:
        //block of code
        break;
    case constant2:
        //block of code
        break;
    default:
        //block of code
}
*/

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    if(x < 20){
        cout<<"x is less than 20"<<endl;
    }
    return 0;
}
//Run the code in your compiler and see the output

#include<iostream>
using namespace std;

int main(){
    int x = 10;
    if(x < 20){
        cout<<"x is less than 20"<<endl;
    }
    else{
        cout<<"x is greater than 20"<<endl;
    }
    return 0;
}
//Run the code in your compiler and see the output

#include<iostream>
using namespace std;
 
int main(){
    int x = 10;
    if(x < 20){
        cout<<"x is less than 20"<<endl;
    }
    else if(x == 20){
        cout<<"x is equal to 20"<<endl;
    }
    else{
        cout<<"x is greater than 20"<<endl;
    }
    return 0;
}

// Nested If Else
#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;
    if(x == 10){
        if(y == 20){
            cout<<"x = 10 and y = 20"<<endl;
        }
        else{
            cout<<"x = 10 and y != 20"<<endl;
        }
    }
    else{
        cout<<"x != 10"<<endl;
    }
    return 0;
}

//Switch Case
#include<iostream>
using namespace std;

int main() {
    int x = 2;
    switch(x){
        case 1:
            cout<<"x is 1"<<endl;
            break;
        case 2:
            cout<<"x is 2"<<endl;
            break;
        case 3:
            cout<<"x is 3"<<endl;
            break;
        default:
            cout<<"x is not 1, 2 or 3"<<endl;
    }
    return 0;
}


