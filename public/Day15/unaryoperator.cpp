// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13

//--------------------------------------------------Unary Operators in C++--------------------------------------------------
/*
What are Unary Operators?
- Unary operators are operators that work with only one operand
- They perform operations on a single value/variable
- Common unary operators include: ++, --, -, +, !, ~

Examples:
1. Increment (++): Increases value by 1
   int x = 5;
   x++; // x is now 6
   
2. Decrement (--): Decreases value by 1
   int y = 5;
   y--; // y is now 4

3. Unary minus (-): Changes sign of value
   int z = 5;
   int neg = -z; // neg is -5

4. Logical NOT (!): Inverts boolean value
   bool flag = true;
   bool inverse = !flag; // inverse is false
*/

// Example of Unary Operator Overloading
#include <iostream>
using namespace std;

class Number {
private:
    int value;
    
public:
    // Constructor
    Number(int v = 0) : value(v) {}
    
    // Display value
    void display() {
        cout << "Value: " << value << endl;
    }
    
    // Overload unary minus (-)
    Number operator-() {
        Number temp;
        temp.value = -value;
        return temp;
    }
    
    // Overload increment operator (++)
    Number operator++() {
        // Pre-increment
        ++value;
        return *this;
    }
    
    // Overload decrement operator (--)
    Number operator--() {
        // Pre-decrement
        --value;
        return *this;
    }
};

int main() {
    // Create object
    Number num(5);
    
    cout << "Original ";
    num.display();
    
    // Using overloaded unary minus
    Number num2 = -num;
    cout << "After unary minus ";
    num2.display();
    
    // Using overloaded increment
    ++num;
    cout << "After increment ";
    num.display();
    
    // Using overloaded decrement
    --num;
    cout << "After decrement ";
    num.display();
    
    return 0;
}
