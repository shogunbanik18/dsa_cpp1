
 * C++ Program to Print the Name of the User using Output Stream
 */
#include <iostream>
#include <string>
 
int main()
{
    std::string firstname;
 
    std::cout << "Hello User, Enter your first name.\n ";
    std::cin >> firstname;
    std::cout << "Hello " << firstname
              <<". It was nice to know your name!\n";
}
