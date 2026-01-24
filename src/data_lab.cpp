#include "data_lab.hpp"
#include <cstdint>

namespace data_lab {

bool less_than_zero(int32_t x) {
    return (x >> 31) & 1;
}

uint32_t helper_add(uint32_t a, uint32_t b, bool carry = 0){
    uint32_t sum = 0;
    
    // Bit 0
    bool a0 = a & (1 << 0);
    bool b0 = b & (1 << 0);
    bool s0 = a0 ^ b0 ^ carry;
    sum |= static_cast<uint32_t>(s0) << 0;
    carry = (a0 & b0) | (carry & (a0 ^ b0));
    
    // Bit 1
    bool a1 = a & (1 << 1);
    bool b1 = b & (1 << 1);
    bool s1 = a1 ^ b1 ^ carry;
    sum |= static_cast<uint32_t>(s1) << 1;
    carry = (a1 & b1) | (carry & (a1 ^ b1));
    
    // Bit 2
    bool a2 = a & (1 << 2);
    bool b2 = b & (1 << 2);
    bool s2 = a2 ^ b2 ^ carry;
    sum |= static_cast<uint32_t>(s2) << 2;
    carry = (a2 & b2) | (carry & (a2 ^ b2));
    
    // Bit 3
    bool a3 = a & (1 << 3);
    bool b3 = b & (1 << 3);
    bool s3 = a3 ^ b3 ^ carry;
    sum |= static_cast<uint32_t>(s3) << 3;
    carry = (a3 & b3) | (carry & (a3 ^ b3));
    
    // Bit 4
    bool a4 = a & (1 << 4);
    bool b4 = b & (1 << 4);
    bool s4 = a4 ^ b4 ^ carry;
    sum |= static_cast<uint32_t>(s4) << 4;
    carry = (a4 & b4) | (carry & (a4 ^ b4));
    
    // Bit 5
    bool a5 = a & (1 << 5);
    bool b5 = b & (1 << 5);
    bool s5 = a5 ^ b5 ^ carry;
    sum |= static_cast<uint32_t>(s5) << 5;
    carry = (a5 & b5) | (carry & (a5 ^ b5));
    
    // Bit 6
    bool a6 = a & (1 << 6);
    bool b6 = b & (1 << 6);
    bool s6 = a6 ^ b6 ^ carry;
    sum |= static_cast<uint32_t>(s6) << 6;
    carry = (a6 & b6) | (carry & (a6 ^ b6));
    
    // Bit 7
    bool a7 = a & (1 << 7);
    bool b7 = b & (1 << 7);
    bool s7 = a7 ^ b7 ^ carry;
    sum |= static_cast<uint32_t>(s7) << 7;
    carry = (a7 & b7) | (carry & (a7 ^ b7));
    
    // Bit 8
    bool a8 = a & (1 << 8);
    bool b8 = b & (1 << 8);
    bool s8 = a8 ^ b8 ^ carry;
    sum |= static_cast<uint32_t>(s8) << 8;
    carry = (a8 & b8) | (carry & (a8 ^ b8));
    
    // Bit 9
    bool a9 = a & (1 << 9);
    bool b9 = b & (1 << 9);
    bool s9 = a9 ^ b9 ^ carry;
    sum |= static_cast<uint32_t>(s9) << 9;
    carry = (a9 & b9) | (carry & (a9 ^ b9));
    
    // Bit 10
    bool a10 = a & (1 << 10);
    bool b10 = b & (1 << 10);
    bool s10 = a10 ^ b10 ^ carry;
    sum |= static_cast<uint32_t>(s10) << 10;
    carry = (a10 & b10) | (carry & (a10 ^ b10));
    
    // Bit 11
    bool a11 = a & (1 << 11);
    bool b11 = b & (1 << 11);
    bool s11 = a11 ^ b11 ^ carry;
    sum |= static_cast<uint32_t>(s11) << 11;
    carry = (a11 & b11) | (carry & (a11 ^ b11));
    
    // Bit 12
    bool a12 = a & (1 << 12);
    bool b12 = b & (1 << 12);
    bool s12 = a12 ^ b12 ^ carry;
    sum |= static_cast<uint32_t>(s12) << 12;
    carry = (a12 & b12) | (carry & (a12 ^ b12));
    
    // Bit 13
    bool a13 = a & (1 << 13);
    bool b13 = b & (1 << 13);
    bool s13 = a13 ^ b13 ^ carry;
    sum |= static_cast<uint32_t>(s13) << 13;
    carry = (a13 & b13) | (carry & (a13 ^ b13));
    
    // Bit 14
    bool a14 = a & (1 << 14);
    bool b14 = b & (1 << 14);
    bool s14 = a14 ^ b14 ^ carry;
    sum |= static_cast<uint32_t>(s14) << 14;
    carry = (a14 & b14) | (carry & (a14 ^ b14));
    
    // Bit 15
    bool a15 = a & (1 << 15);
    bool b15 = b & (1 << 15);
    bool s15 = a15 ^ b15 ^ carry;
    sum |= static_cast<uint32_t>(s15) << 15;
    carry = (a15 & b15) | (carry & (a15 ^ b15));
    
    // Bit 16
    bool a16 = a & (1 << 16);
    bool b16 = b & (1 << 16);
    bool s16 = a16 ^ b16 ^ carry;
    sum |= static_cast<uint32_t>(s16) << 16;
    carry = (a16 & b16) | (carry & (a16 ^ b16));
    
    // Bit 17
    bool a17 = a & (1 << 17);
    bool b17 = b & (1 << 17);
    bool s17 = a17 ^ b17 ^ carry;
    sum |= static_cast<uint32_t>(s17) << 17;
    carry = (a17 & b17) | (carry & (a17 ^ b17));
    
    // Bit 18
    bool a18 = a & (1 << 18);
    bool b18 = b & (1 << 18);
    bool s18 = a18 ^ b18 ^ carry;
    sum |= static_cast<uint32_t>(s18) << 18;
    carry = (a18 & b18) | (carry & (a18 ^ b18));
    
    // Bit 19
    bool a19 = a & (1 << 19);
    bool b19 = b & (1 << 19);
    bool s19 = a19 ^ b19 ^ carry;
    sum |= static_cast<uint32_t>(s19) << 19;
    carry = (a19 & b19) | (carry & (a19 ^ b19));
    
    // Bit 20
    bool a20 = a & (1 << 20);
    bool b20 = b & (1 << 20);
    bool s20 = a20 ^ b20 ^ carry;
    sum |= static_cast<uint32_t>(s20) << 20;
    carry = (a20 & b20) | (carry & (a20 ^ b20));
    
    // Bit 21
    bool a21 = a & (1 << 21);
    bool b21 = b & (1 << 21);
    bool s21 = a21 ^ b21 ^ carry;
    sum |= static_cast<uint32_t>(s21) << 21;
    carry = (a21 & b21) | (carry & (a21 ^ b21));
    
    // Bit 22
    bool a22 = a & (1 << 22);
    bool b22 = b & (1 << 22);
    bool s22 = a22 ^ b22 ^ carry;
    sum |= static_cast<uint32_t>(s22) << 22;
    carry = (a22 & b22) | (carry & (a22 ^ b22));
    
    // Bit 23
    bool a23 = a & (1 << 23);
    bool b23 = b & (1 << 23);
    bool s23 = a23 ^ b23 ^ carry;
    sum |= static_cast<uint32_t>(s23) << 23;
    carry = (a23 & b23) | (carry & (a23 ^ b23));
    
    // Bit 24
    bool a24 = a & (1 << 24);
    bool b24 = b & (1 << 24);
    bool s24 = a24 ^ b24 ^ carry;
    sum |= static_cast<uint32_t>(s24) << 24;
    carry = (a24 & b24) | (carry & (a24 ^ b24));
    
    // Bit 25
    bool a25 = a & (1 << 25);
    bool b25 = b & (1 << 25);
    bool s25 = a25 ^ b25 ^ carry;
    sum |= static_cast<uint32_t>(s25) << 25;
    carry = (a25 & b25) | (carry & (a25 ^ b25));
    
    // Bit 26
    bool a26 = a & (1 << 26);
    bool b26 = b & (1 << 26);
    bool s26 = a26 ^ b26 ^ carry;
    sum |= static_cast<uint32_t>(s26) << 26;
    carry = (a26 & b26) | (carry & (a26 ^ b26));
    
    // Bit 27
    bool a27 = a & (1 << 27);
    bool b27 = b & (1 << 27);
    bool s27 = a27 ^ b27 ^ carry;
    sum |= static_cast<uint32_t>(s27) << 27;
    carry = (a27 & b27) | (carry & (a27 ^ b27));
    
    // Bit 28
    bool a28 = a & (1 << 28);
    bool b28 = b & (1 << 28);
    bool s28 = a28 ^ b28 ^ carry;
    sum |= static_cast<uint32_t>(s28) << 28;
    carry = (a28 & b28) | (carry & (a28 ^ b28));
    
    // Bit 29
    bool a29 = a & (1 << 29);
    bool b29 = b & (1 << 29);
    bool s29 = a29 ^ b29 ^ carry;
    sum |= static_cast<uint32_t>(s29) << 29;
    carry = (a29 & b29) | (carry & (a29 ^ b29));
    
    // Bit 30
    bool a30 = a & (1 << 30);
    bool b30 = b & (1 << 30);
    bool s30 = a30 ^ b30 ^ carry;
    sum |= static_cast<uint32_t>(s30) << 30;
    carry = (a30 & b30) | (carry & (a30 ^ b30));
    
    // Bit 31
    bool a31 = a & (1 << 31);
    bool b31 = b & (1 << 31);
    bool s31 = a31 ^ b31 ^ carry;
    sum |= static_cast<uint32_t>(s31) << 31;
    carry = (a31 & b31) | (carry & (a31 ^ b31));
    
    return sum;
}

uint64_t helper_add(uint64_t a, uint64_t b, bool carry = 0){ // uint64_t version
    uint64_t sum = 0;
    for(int i = 0;i<64;i++){
        bool ai = a & (1ULL << i);
        bool bi = b & (1ULL << i);
        bool si = ai ^ bi ^ carry; // sum bit at position i
        sum |= static_cast<uint64_t>(si) << i; // set the i-th bit of sum
        carry = (ai & bi) | (carry & (ai ^ bi)); // update carry
    } 
    return sum;
}

int32_t add(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);

    return static_cast<int32_t>(helper_add(ua, ub));
}

int32_t subtract(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(~b);
    
    return static_cast<int32_t>(helper_add(ua, ub, 1));
}

int32_t multiply(int32_t a, int32_t b) {
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);
    uint32_t ans = 0;
    for(int i = 0;i<32;i++){
        if(ub & (1 << i)){
            uint64_t tmp = static_cast<uint64_t>(ua) << i;
            ans = helper_add(ans, static_cast<uint32_t>(tmp));
        }
    }
    return static_cast<int32_t>(ans);
}

int32_t divide(int32_t a, int32_t b) {
    bool inverse = false;
    if(less_than_zero(a) ^ less_than_zero(b)) inverse = true;
    if(less_than_zero(a)) a = add(~a, 1);
    if(less_than_zero(b)) b = add(~b, 1);
    uint64_t divisor = static_cast<uint64_t>(b) << 31;
    uint64_t remainder = static_cast<uint64_t>(a);
    uint32_t quotient = 0;
    for(int _ = 1; _ <= 32; _++){
        quotient <<= 1;
        if(!((helper_add(remainder, ~divisor, 1) >> 63) & 1)) {
            remainder = helper_add(remainder, ~divisor, 1);
            quotient |= 1;
        }
        divisor >>= 1;
    }
    if(inverse) quotient = helper_add(~quotient, 1);
    return static_cast<int32_t>(quotient);
}

int32_t modulo(int32_t a, int32_t b) {
    bool inverse = false;
    if(less_than_zero(a)) {a = add(~a, 1); inverse = true;}
    if(less_than_zero(b)) b = add(~b, 1);
    uint64_t divisor = static_cast<uint64_t>(b) << 31;
    uint64_t remainder = static_cast<uint64_t>(a);
    uint32_t quotient = 0;
    for(int _ = 1; _ <= 32; _++){
        quotient <<= 1;
        if(!((helper_add(remainder, ~divisor, 1) >> 63) & 1)) {
            remainder = helper_add(remainder, ~divisor, 1);
            quotient |= 1;
        }
        divisor >>= 1;
    }
    if(inverse) remainder = helper_add(~remainder, 1);
    return static_cast<int32_t>(remainder);
}

}  // namespace data_lab