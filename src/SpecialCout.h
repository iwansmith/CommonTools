#ifndef SPECIALCOUT
#define SPECIALCOUT

#include <ostream>

#include <vector>
#include <map>


template<typename _iterator>
void __OutputContainer(std::ostream& stream, const _iterator& Begin, const _iterator& End);

template<typename _iterator>
void __OutputAssociativeContainer(std::ostream& stream, const _iterator& Begin, const _iterator& End);



template<typename T>
std::ostream& operator <<( std::ostream& lhs, std::vector<T> rhs);


template<typename T1, typename T2>
std::ostream& operator <<( std::ostream& lhs, std::map<T1, T2> rhs);

#endif
