#ifndef ROOTSPECIALCOUT
#define ROOTSPECIALCOUT

#include <iostream>

#include "TH1F.h"

std::ostream& operator<< (std::ostream& lhs, TH1* rhs);

#endif
