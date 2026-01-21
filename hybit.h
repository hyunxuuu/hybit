#ifndef HYBIT_H
#define HYBIT_H

#include <stdint.h>

#define HYBIT_SET(flag, idx)            \
        {((uint8_t *)(flag))[(idx) / 8] |= 1 << ((idx) % 8);}

#define HYBIT_CLR(flag, idx)            \
        {((uint8_t *)(flag))[(idx) / 8] &= ~(1 << ((idx) % 8));}

#define HYBIT_GET(flag, idx)            \
        ((((uint8_t *)(flag))[(idx) / 8] >> ((idx) % 8)) & 1)

#define HYBIT_SETUP                     (1)
#define HYBIT_UNSET                     (0)

#define FLAG_SET                        HYBIT_SET
#define FLAG_CLR                        HYBIT_CLR
#define FLAG_GET                        HYBIT_GET
#define FLAG_SETUP                      HYBIT_SETUP
#define FLAG_UNSET                      HYBIT_UNSET

#endif /* HYBIT_H */
