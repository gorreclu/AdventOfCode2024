#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>

std::pair<std::vector<int>, std::vector<int> > readInputFile(const std::string& filename);
int part1(const std::vector<int>& list1, const std::vector<int>& list2);
int part2(const std::vector<int>& list1, const std::vector<int>& list2);

#endif // UTILS_H
