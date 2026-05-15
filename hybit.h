#ifndef HYBIT_H
#define HYBIT_H

#include "hystd.h"

#define HYBIT_SET(var, bit)     do { \
        ((reg_u *)(var))[(bit) / REG_BITS] |= \
        (reg_u)1 << ((bit) & REG_MASK); \
        } while(0)

#define HYBIT_CLR(var, bit)     do { \
        ((reg_u *)(var))[(bit) / REG_BITS] &= \
        ~((reg_u)1 << ((bit) & REG_MASK)); \
        } while(0)

#define HYBIT_GET(var, bit)     \
        ((((reg_u *)(var))[(bit) / REG_BITS] >> \
        ((bit) & REG_MASK)) & (reg_u)1)

#define HYBIT_SETUP                     (1)
#define HYBIT_UNSET                     (0)

#define HYFLAG_SET                      HYBIT_SET
#define HYFLAG_CLR                      HYBIT_CLR
#define HYFLAG_GET                      HYBIT_GET
#define HYFLAG_SETUP                    HYBIT_SETUP
#define HYFLAG_UNSET                    HYBIT_UNSET

#endif /* HYBIT_H */
