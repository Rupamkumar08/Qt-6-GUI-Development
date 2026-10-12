#include <iostream>

using namespace std;

int main()
{
    // 1.cout (prints data to the console)
    std::cout << "Hello World!" << std::endl;

    // 2.cerr (does usually the same thing but prints error on the console)
    std::cerr <<"There was an error" << std::endl;

    // 3.clog (useful for logging the data)
    std::clog <<"This is a log message" << std::endl;

    // 4.cin
    std::string name;
    std::cout << "Please type in your firstname : ";
    std::cin >> name;

    std::cout << "Your firstname is : " << name << std::endl;
    return 0;
}
