#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() { 
    std::ifstream file("input.txt");
    std::string str;
    int total = 0;
    std::vector<std::vector<int>> pairs;
    while (std::getline(file, str)) {
        std::string ranges[2];
        int indexDel = str.find(",");
        ranges[0] = str.substr(0, indexDel);
        ranges[1] = str.substr(indexDel + 1);

        std::vector<int> nums;
        for (int i = 0; i < 2; ++i) {
            indexDel = ranges[i].find("-");
            nums.push_back(std::stoi(ranges[i].substr(0, indexDel)));
            nums.push_back(std::stoi(ranges[i].substr(indexDel + 1)));
        }

        pairs.push_back(nums);
    }

    for (int i = 0; i < pairs.size(); ++i) {
        if (pairs.at(i)[0] <= pairs.at(i)[2] && pairs.at(i)[1] >= pairs.at(i)[3]) {
            ++total;
        }
        else if (pairs.at(i)[0] >= pairs.at(i)[2] && pairs.at(i)[1] <= pairs.at(i)[3]) {
            ++total;
        }
    }

    std::cout << total << "\n";
}