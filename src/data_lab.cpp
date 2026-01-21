#include "data_lab.hpp"
#include <cstdint>

namespace data_lab {

int32_t add(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);
    bool carry = 0;
    uint32_t sum = 0;
    for(int i = 0;i<32;i++){
        bool ai = (ua & (1 << i)) != 0;
        bool bi = (ub & (1 << i)) != 0;
        bool si = ai ^ bi ^ carry; // sum bit at position i
        sum += static_cast<uint32_t>(si) << i; // set the i-th bit of sum
        carry = (ai & bi) | (carry & (ai ^ bi)); // update carry
    }  
    return static_cast<int32_t>(sum);
}

int32_t subtract(int32_t a, int32_t b) {
    return add(a, add(~b, 1));
}

int32_t multiply(int32_t a, int32_t b) {
    return a * b;
}

int32_t divide(int32_t a, int32_t b) {
    return a / b;
}

int32_t modulo(int32_t a, int32_t b) {
    return a % b;
}

}  // namespace data_lab