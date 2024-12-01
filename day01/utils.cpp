#include "utils.h"
#include <iostream>
#include <fstream>

// --- UTILS ---

// Read input file and return two vectors
std::pair<std::vector<int>, std::vector<int> > readInputFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        throw std::runtime_error("Unable to open file " + filename);
    }

    std::vector<int> list1, list2;
    int value1, value2;

    while (inputFile >> value1 >> value2) {
        list1.push_back(value1);
        list2.push_back(value2);
    }

    return std::make_pair(list1, list2);
}


// --- SOLUTION ---

// Part one
int part1(const std::vector<int>& list1, const std::vector<int>& list2) {
    int result = 0;
    for (int i = 0; i < list1.size(); i++) {
        result += std::abs(list1[i] - list2[i]);
    }
    
    return result;
}

// Part two
int part2(const std::vector<int>& list1, const std::vector<int>& list2) {
    int current_number, nb_apparition1, nb_apparition2, result = 0, i1 = 0, i2 = 0;

    while (i1 < list1.size() && i2 < list2.size()) {
        current_number = list1[i1];
        nb_apparition1 = 0;
        nb_apparition2 = 0;

        while (i1 < list1.size() && list1[i1] == current_number) {
            i1++;
            nb_apparition1++;
        }

        while (i2 < list2.size() && list2[i2] <= current_number) {
            if (list2[i2] == current_number) {
                nb_apparition2++;
            }
            i2++;
        }

        result += current_number * nb_apparition1 * nb_apparition2;
    }
    return result;
}