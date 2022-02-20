// Copyright 2022 NNTU-CS
#define _USE_MATH_DEFINES
#include <cstdint>
//#include "alg.h"
#include <сmath>

bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value > 1) {
       for (int i = 2; i <= sqrt(value); i++)
            if (value % i == 0) {
                return false;
            }
       return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t chiclo = 0;
  uint64_t i = 0;
    while (i != n) {
        chiclo++;
        if (checkPrime(chiclo))
            i++;
    }
    return chiclo;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t sled_chiclo = 0;
    sled_chiclo = sled_chiclo + value + 1;
    while (!(checkPrime(sled_chiclo))) {
        sled_chiclo++;
    }
    return sled_chiclo;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
   uint64_t sum = 0;
    if (hbound > 2) {
        for (int i = 2; i < hbound; i++)
        if (checkPrime(i)) {
                sum = sum + i;
            }
    }
    return sum;
}
