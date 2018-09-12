#include <iostream>

using namespace std;

main()
{
    //type_of_variable nameOfVariable
    //Type_of_variable nameOfVar1,nameOfVar2;

    int a = 40, b = 12, c; // -2bill - +2bill, 4 bytes

    c = 5;
    c = c+1;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    short int t1; // -32768 to +32767. 2bytes
    short t2 = 5;

    cout << "t2 : " << t2<< endl;

    float f1 = 5.212; // 4 BYTES, that are u to 38 seros
    double d1 = 5.12;// 8 BYTES,  that are up to 308 zeros, greater percision( more numbers after decimal point
    cout << f1<< endl;
    cout << d1 << endl;


    char t4; //character
    t4 = 'a';
    cout << t4 << endl;
    string t5 = "Hello world!";

    cout << t5 << endl;
    string x = "part1";
    string y = "part 2";

    string combinedStrings = x+ " " +y;

    cout << combinedStrings << endl;

    //boolean | true or false, so false is always 0 every other number is true
    bool t6 = 123;
    bool t7 = false;

    cout << t6 << endl;
    cout << t7 << endl;

    //for unsigned short int 0 - 65535
    unsigned short t8 = 3700;
    cout << t8 << endl;

    //constant variables, cant change in other part of program
    const string NAMEOFGAME = "conqueror of c++";

    cout << NAMEOFGAME << endl;
    //NAMEOFGAME = "WILLY";


}
