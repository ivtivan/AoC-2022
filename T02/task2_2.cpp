#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    int total = 0;
    while (std::getline(file, str)) {
        if (str[2] == 'Y') {
            total += str[0] - 'A' + 1;
        }
        else if (str[2] == 'Z') {
            total += (str[0] - 'A' + 1) % 3  + 1;
        }
        else  {
            total += (str[0] - 'A' + 2) % 3  + 1;
        }
        total += 3 * (str[2] - 'X');
        std::cout << total << "\n";
    }

    std::cout << total << "\n";
}