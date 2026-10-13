#include <iostream>
using namespace std;

int main()
{
    // Syntax for the lambda function
    /*
        [capture list](parameter list) -> return_value_type { function body }
    */

    // Give lambda function a name and call it later
    /*
    auto func = []() {
        cout << "Hello World!" << endl;
    };

    func();
    func();
    func();
    */

    // call lambda function directly after definition
    /*
    [](){
        cout << "Hello World!" << endl;
    }();
    */

    // Define a lambda function that takes parameters
    /*
    [](int a , int b){
        cout << "Sum is : " << a + b << endl;
    }(7,3);
    */

    // Store the lambda function in a variable
    /*
    auto func =  [](int a , int b){
        cout << "Sum is : " << a + b << endl;
    };

    func(7,3);
    */

    // Define a lambda that returns something
    /*
    auto func = [](int a , int b)->int{
        return a + b;
    };
    auto value = func(7,3);
    cout << "The sum is : " << value << endl;
    */

    // Capture Lists
    /*
    int a = 7;
    int b = 3;

    [a,b](){
        cout << "Sum is : " << a + b << endl;
    }();
    */

    // Capturing by value
    /*
    int c = 42;

    auto func = [c](){
        // The c here is a copy
        cout << "The inner value of c is : " << c << endl;
    };

    for(int i = 1 ; i < 5 ; i++)
    {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c+1;
    }
    */

    // Capturing by reference
    /*
    int c = 42;

    auto func = [&c](){
        cout << "The inner value of c is : " << c << endl;
    };

    for(int i = 1 ; i < 5 ; i++)
    {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c+1;
    }
    */

    // Capture everything by value
    /*
    int c = 42;
    int d = 6;

    auto func = [=](){
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for(int i = 1 ; i < 5 ; i++)
    {
        cout << "THe outer value of c is : " << c << endl;
        cout << "THe outer value of d is : " << d << endl;
        func();
        c = c + 1;
        d = d + 1;
    }
    */

    // Capture everything by reference

    int c = 42;
    int d = 6;

    auto func = [&](){
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for(int i = 1 ; i < 5 ; i++)
    {
        cout << "The outer value of c is : " << c << endl;
        cout << "The outer value of d is : " << d << endl;
        func();
        c = c + 1;
        d = d + 1;
    }
    return 0;
}