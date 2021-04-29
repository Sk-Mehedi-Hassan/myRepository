#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::string path("23,45,56");
    int number;
    std::stringstream ss(path);
    while (!ss.eof()) {
        if (ss.peek() != ',') {
            ss >> number;
            if (ss.tellg() == -1) {
                std::cout << number;
            }
            else {
                std::cout << number;
            }
        }
        else { ss.get(); }
    }

    return 0;
}

