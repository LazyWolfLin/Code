#pragma once

#include <cmath>

namespace math
{

template<typename T>
T gcd(T p, T q)
{
  if (q == 0) return p;
  return std::abs(gcd(q, p % q));
}

}
