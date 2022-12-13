#include <iostream>
#include <fstream>
#include <string>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    std::string half1, half2;
    int total = 0;
    while (std::getline(file, str)) {
        half1 = str.substr(0, str.length()/2);
        half2 = str.substr(str.length()/2, str.length()/2);
        bool found = false;
        for (int i = 0; i < half1.length(); ++i) {
            if (half2.find(half1[i]) !=  std::string::npos) {
                if (half1[i] >= 'a' && half1[i] <= 'z') {
                    total += half1[i] - 'a' + 1;
                }
                else {
                    total += half1[i] - 'A' + 27;
                }
                found = true;
                break;
            }
        }
        if (found) {
            std::cout << total << "\n";
            continue;
        }
        for (int i = 0; i < half2.length(); ++i) {
            if (half1.find(half2[i]) != std::string::npos) {
                if (half2[i] >= 'a' && half2[i] <= 'z') {
                    total += half2[i] - 'a' + 1;
                }
                else {
                    total += half2[i] - 'A' + 27;
                }
                break;
            }
        }
    }

    std::cout << total << "\n";
}