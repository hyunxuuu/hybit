#ifndef HYBIT_H
#define HYBIT_H

#include <stdint.h>

#define HYBIT_SET(var, bit)            \
        {((uint8_t *)(var))[(bit) / 8] |= 1 << ((bit) % 8);}

#define HYBIT_CLR(var, bit)            \
        {((uint8_t *)(var))[(bit) / 8] &= ~(1 << ((bit) % 8));}

#define HYBIT_GET(var, bit)            \
        ((((uint8_t *)(var))[(bit) / 8] >> ((bit) % 8)) & 1)

#define HYBIT_SETUP                     (1)
#define HYBIT_UNSET                     (0)

#define HYFLAG_SET                      HYBIT_SET
#define HYFLAG_CLR                      HYBIT_CLR
#define HYFLAG_GET                      HYBIT_GET
#define HYFLAG_SETUP                    HYBIT_SETUP
#define HYFLAG_UNSET                    HYBIT_UNSET

#endif /* HYBIT_H */
