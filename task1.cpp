#include <iostream>
#include <fstream>
#include <string>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    int curr = 0;
    int top3[3] = {0 ,0, 0};
    while (std::getline(file, str)) {
        if (str.compare("") == 0) {
            for (int i = 0; i < 3; ++i) {
                if (top3[i] <= curr) {
                    int tmp = top3[i];
                    top3[i] = curr;
                    curr = tmp;
                }
            }
            curr = 0;
        }
        else {
            curr += stoi(str);
        }
    }

    std::cout << top3[0] + top3[1] + top3[2] << "\n";
}