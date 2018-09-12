

#include <iostream>

using namespace std;

main()
{
    /*
    Exercise 1.

Declare one variable for each of the basic type (char, int, short, float, double),
name them with the letters from alphabet starting from a.
For each of the variable write a comment with information about the number of bytes reserved and the minimum - maximum value range of given type.

eg.  
char a;   //character 1 byte -128 to 127
    */
    char a = 'a';
    int b = 2;
    short c = 5;
    float d = 3.14;
    double e = 6.69;

    cout << a << " : of type char, takes 1bytes" << endl; //character 1 byte -128 to 127
    cout << b << " : of type int, takes 4bytes" << endl; //integer 4 bytes -2147483648 to 2147483647
    cout << c << " : of type short, takes 2bytes" << endl; //short integer 2 bytes -32768 to 3276
    cout << d << " : of type float, takes 4bytes" << endl; //floating point 4 bytes +/- 3.4e +/- 38 (~7 digits)
    cout << e << " : of type double, takes 8bytes" << endl; //double floating point 8 bytes +/- 1.7e +/- 308 (~15 digits)

    /*
    Exercise 2.

Initialize the variables from the first exercise with values of your own choice.
Use cout (console output) to print out the values and their addresses in console (each should be on different line)

eg.
variable a;
(variable a value, address of variable a)
variable b;
(variable b value, address of variable b)
*/

cout << "Variable A " << endl << a << " address if var : " << &a<< endl ;
cout << "Variable B " << endl << b << " address if var : " << &b << endl ;
cout << "Variable C " << endl << c << " address if var : " << &c << endl ;
cout << "Variable D " << endl << d << " address if var : " << &d<< endl ;
cout << "Variable E " << endl << e << " address if var : " << &e<< endl ;

/*
Exercise 3.

Let's assume that we are creating an application for a hotel management.
At this stage of development we need to prepare variables for keeping most important information about rooms.
Declare variables which will contain:
room number, floor level, first name of person renting, last name of person renting, information about meals (if included, true or false).
Choose proper variable type and use self descriptive names.

*/
int roomNumber;
short floorLevel;
string firstName, lastName;
bool mealsIncluded;
}
