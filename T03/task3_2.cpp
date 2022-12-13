#include <iostream>
#include <fstream>
#include <string>

int main() { 
    std::ifstream file("input.txt");
    std::string str[3];
    int total = 0;
    while (std::getline(file, str[0])) {
        std::getline(file, str[1]);
        std::getline(file, str[2]);
        for (int i = 0; i < str[0].length(); ++i) {
            if (str[1].find(str[0][i]) !=  std::string::npos && 
                str[2].find(str[0][i]) !=  std::string::npos) {
                    if (str[0][i] >= 'a' && str[0][i] <= 'z') {
                        total += str[0][i] - 'a' + 1;
                    }
                    else {
                        total += str[0][i] - 'A' + 27;
                    }
                    break;
            }
        }
    }

    std::cout << total << "\n";
}