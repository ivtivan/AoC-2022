#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    int total = 0;
    while (std::getline(file, str)) {
        total += str[2] - 'X';
        if (str[2] += str[0] + 'X' - 'A') {
            total += 3;
        }
        else if ((int)str[2] - (int)str[0] - (int)'X' ==  1 || (str[2] == 'X') && str[0] == 'C') {
            total += 6;
        }
    }

    std::cout << total << "\n";
}