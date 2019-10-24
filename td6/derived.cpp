#include "derived.hpp" 

Derived:: Derived(int a, int b, double c, double d)
    : Base(a, b, c)
  {
    this->w = d;
  }
