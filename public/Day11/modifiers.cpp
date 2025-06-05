//------------------------------------------------------Modifiers of String Class-----------------------------------------------------
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
/*
What are Modifiers? Modifiers are functions that change the value or content of a string. 
*/

/*
Why do we use them?
They help you manipulate strings in various ways.

1. append(): Adds more characters to the end of the string.
2. insert(): Inserts characters at a specific position in the string.
3. erase(): Removes characters from the string.
4. replace(): Replaces part of the string with another string.
5. clear(): Removes all characters from the string.
*/

/*
Syntax

1. append() - string.append("text");
2. insert() - string.insert(position, "text");
3. erase() - string.erase(position,
4. replace() - string.replace(position, length, "new_text");
5. clear() - string.clear();

*/

/*
Example Code: 
1. append() 
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    str.append(", World!"); // Adds ", World!" to the end of str
    cout << str << endl;    // Prints: Hello, World!
    return 0;
}


/*
Example Code: 
2. insert() 
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello!";
    str.insert(5, ", World"); // Inserts ", World" at position 5
    cout << str << endl;      // Prints: Hello, World!
    return 0;
}


/*
Example Code: 
3. erase() 
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    str.erase(5, 7); // Removes 7 characters starting from position 5
    cout << str << endl; // Prints: Hello!
    return 0;
}


/*
Example Code: 
4. replace() 
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    str.replace(7, 5, "Universe"); // Replaces "World" with "Universe"
    cout << str << endl; // Prints: Hello, Universe!
    return 0;
}


/*
Example Code: 
5. clear() 
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    str.clear(); // Clears the string
    cout << "String after clearing: " << str << endl; // Prints: String after clearing:
    return 0;
}
