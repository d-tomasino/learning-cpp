// a type is a set of values and a set of operations on those values
// an object is a region of storage that has a type, and a value

// c++ has built-in types
#include <iostream>
int main()
{
    // BOOLEAN TYPE
    bool b = true;
    // CHARACTER TYPE
    char c = 'a';
    std::cout << "The value of variable c is: " << c << '\n';
    // access the variable and change the name, no need to declare again
    c = 'B';
    std::cout << "The new value of variable c is: " << c << '\n';
    // print the size of c
    std::cout << "The size of c is: " << sizeof(c) << " byte(s)" << '\n';
    // every character is represented by a integer ASCII code number in the
    // character set.
    // INTEGER TYPE
    int x, y, z;
    x = 456;
    y = -123;
    std::cout << "The value of x is: " << x << '\n';
    std::cout << "The value of y is: " << y << '\n';
    std::cout << "The size of x is: " << sizeof(x)
              << "bytes, while the size of y is : " << sizeof(y)
              << " bytes" << '\n';

    // initialize x,y,z with 10 value, in different literal notations
    x = 10;  // decimal literal
    y = 012; // octal literal
    z = 0xA; // hexadecimal literal

    // FLOATING POINT TYPE
    double d = 3.14;
    double m, n, o, l, p;
    m = 213.456;
    n = 1.;
    o = 0.15;
    l = .15;
    p = 3.14e10;

    // type modifiers
    // long: width least 32 bits, short: width least 16 bits
    // signed can change bold both positive and negative values
    // unsigned means the type has unsigned representation
    // type INT IS SIGNED BY DEFAULT
    int long unsigned k = 9764172;

    // declaration example
    int j, h;
    char g;
    // initialization (after a declaration)
    j = 10;
    h = 15;
    g = 'F';
    // definition (declaration + initialization)
    char t = 'h';
    double r = 88.915;
}