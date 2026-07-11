#ifndef HYSTD_H
#define HYSTD_H

#include <stdint.h>

#define REG_BITS        (sizeof(reg_u) * 8)
#define REG_MASK        (sizeof(reg_u) * 8 - 1)

typedef uintptr_t       _reg_u;
typedef intptr_t        _reg_i;
typedef float          _reg_f;

typedef _reg_u           reg_u;
typedef _reg_i           reg_i;
typedef _reg_f           reg_f;

#endif /* HYSTD_H */
