#ifndef HYSTD_H
#define HYSTD_H

#include <stdint.h>

#define REG_BITS        (sizeof(reg_u) * 8)
#define REG_MASK        (sizeof(reg_u) * 8 - 1)

typedef uint32_t        reg_u;
typedef int32_t         reg_i;
typedef float           reg_f;

#endif /* HYSTD_H */
