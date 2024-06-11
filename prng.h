#ifndef PRNG_H
#define PRNG_H

#ifndef PRNG_TAB_MASK
#define PRNG_TAB_MASK 0b10111000U
#endif // PRNG_TAB_MASK

unsigned char init_prng(unsigned char seed);
unsigned char prng(void);

#endif // PRNG_H