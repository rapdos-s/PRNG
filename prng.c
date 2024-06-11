#include "prng.h"

static unsigned char g_state = 0;

unsigned char init_prng(unsigned char seed) {
  g_state = seed;

  return (g_state);
}

unsigned char prng(void) {
  unsigned char last_bit;

  last_bit = g_state & 0b00000001U;
  g_state = g_state >> 1;
  if (last_bit == 0b01) {
    g_state = g_state ^ PRNG_TAB_MASK;
  }
  return (g_state);
}
