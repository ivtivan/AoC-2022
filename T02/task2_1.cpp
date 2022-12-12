#include <iostream>
#include <fstream>
#include <string>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    int total = 0;
    while (std::getline(file, str)) {
        total += str[2] - 'X' + 1;
        if (str[2] == str[0] + 'X' - 'A') {
            total += 3;
        }
        else if (str[2] - 'X' - (str[0] - 'A') ==  1 || (str[2] == 'X') && (str[0] == 'C')) {
            total += 6;
        }
    }

    std::cout << total << "\n";
}