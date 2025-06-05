//Manipulator is a class that is used to manipulate the output of the stream. It is defined in the header file <iomanip>.
// Types

/*
Argumented Manipulators - These manipulators take arguments and return a new stream. For example, setw(), setprecision(), etc.
Non-Argumented Manipulators - These manipulators do not take arguments and return a new stream. For example, endl, ends, etc.
*/
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
//Example Code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    float b = 10.123456;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a is: " << setw(10) << a << endl;
    cout << "Value of b is: " << setprecision(3) << b << endl;
    return 0;
}
//Practice the code and try to understand the concept of manipulators.

//Standard Input/Output Manipulators in C++
/*
1. setw(int n) - It is used to set the width of the field.  
2. setprecision(int n) - It is used to set the precision of the floating-point numbers.
3. setfill(char c) - It is used to fill the empty spaces with the character c.
4. setbase(int n) - It is used to set the base of the number.
5. endl - It is used to insert a new line and flush the output buffer.
6. skipws - It is used to skip the white spaces.
7. noskipws - It is used to not skip the white spaces.
8. showpoint - It is used to show the decimal point.
9. ends - It is used to insert a null character.
10. flush - It is used to flush the output buffer.
11. hex - It is used to display the number in hexadecimal format.
12. oct - It is used to display the number in octal format.
13. dec - It is used to display the number in decimal format.
14. lock - It is used to lock the stream.
15. unlock - It is used to unlock the stream.
16. ws - It is used to extract the white spaces.
*/

//Example Codes

//Example 1: setw(int n)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    float b = 10.123456;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a is: " << setw(10) << a << endl;
    cout << "Value of b is: " << setprecision(3) << b << endl;
    return 0;
}

//Example 2: Fillin the empty spaces with the character c
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    float b = 10.123456;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a is: " << setw(10) << setfill('*') << a << endl;
    cout << "Value of b is: " << setprecision(3) << b << endl;
    return 0;
}

//Example 3: setbase(int n)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a in octal is: " << setbase(8) << a << endl;
    cout << "Value of a in hexadecimal is: " << setbase(16) << a << endl;
    return 0;
}

//Example 4: flush
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a is: " << a << flush;
    return 0;
}

//Example 5: hex, oct, dec
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a in octal is: " << oct << a << endl;
    cout << "Value of a in hexadecimal is: " << hex << a << endl;
    cout << "Value of a in decimal is: " << dec << a << endl;
    return 0;
}

//Example 6: lock, unlock
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 10;
    cout << "Without Manipulators" << endl;
    cout << "Value of a is: " << a << endl;

    cout << "With Manipulators" << endl;
    cout << "Value of a is: " << a << lock << a << unlock << endl;
    return 0;
}