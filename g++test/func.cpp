#include "func.h"
#include <map>


unsigned long fib(unsigned long n) {
    static std::map<unsigned long, unsigned long> m;
    m[0] = 0;
    m[1] = 1;
    map<unsigned long, unsigned long>::iterator iter = m.find(n);
    if (iter != m.end()) return iter->second;
    unsigned long res = fib(n-1) + fib(n-2);
    m[n] = res;
    return res;
}