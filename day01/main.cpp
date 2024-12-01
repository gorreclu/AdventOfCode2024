#include "utils.h"
#include <iostream>
#include <string>

int main() {
    try {
        auto [list1, list2] = readInputFile("input.txt");
        std::sort(list1.begin(), list1.end());
        std::sort(list2.begin(), list2.end());

        // Part 1
        int result1 = part1(list1, list2);
        std::cout << "Result of Part 1: " << result1 << std::endl;

        // Part 2
        int result2 = part2(list1, list2);
        std::cout << "Result of Part 2: " << result2 << std::endl;

    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
        return 1;
    }

    return 0;
}
