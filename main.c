#include "prng.h"
#include <stdio.h>

int main(void) {
  unsigned char seed;
  unsigned char ret_init_prng;
  unsigned char ret_prng;
  unsigned char generation_count;
  unsigned char unsigned_char_max;

  seed = 42;
  ret_init_prng = init_prng(seed);

  printf("seed: %i | ", (int)seed);
  printf("ret_init_prng: %i\n\n", (int)ret_init_prng);

  printf("Generating 254 random numbers:\n");
  generation_count = 0;
  unsigned_char_max = 255;
  while (generation_count < unsigned_char_max) {
    generation_count++;
    printf("%i ", (int)prng());
  }
  printf("\n");
}
