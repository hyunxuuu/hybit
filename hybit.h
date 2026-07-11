#ifndef HYBIT_H
#define HYBIT_H

#include "hystd.h"

#define _HYBIT_SET(var, bit)            do { \
        ((_reg_u *)(var))[(bit) / REG_BITS] |= \
        (_reg_u)1 << ((bit) & REG_MASK); \
        } while(0)
        
#define _HYBIT_CLR(var, bit)            do { \
        ((_reg_u *)(var))[(bit) / REG_BITS] &= \
        ~((_reg_u)1 << ((bit) & REG_MASK)); \
        } while(0)

#define _HYBIT_GET(var, bit)            \
        ((((_reg_u *)(var))[(bit) / REG_BITS] >> \
        ((bit) & REG_MASK)) & (_reg_u)1)

#define _HYBIT_SETUP                    1
#define _HYBIT_UNSET                    0

#define HYBIT_SET                       _HYBIT_SET
#define HYBIT_CLR                       _HYBIT_CLR
#define HYBIT_GET                       _HYBIT_GET
#define HYBIT_SETUP                     _HYBIT_SETUP
#define HYBIT_UNSET                     _HYBIT_UNSET

#endif /* HYBIT_H */
