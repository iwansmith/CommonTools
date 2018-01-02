#ifndef SPLITSTRING
#define SPLITSTRING

#include <vector>
#include <iostream>

template<typename T>
std::istream& operator >>(std::istream& lhs, std::vector<T>& rhs);


template<typename T>
std::vector<T> SplitString(const std::string& Input, const std::string& separator = " ");

#endif

