#include <stdio.h>

void countcircles(int sidelen);
int countvertices(int sidelen);

int main(void) {
  int sidelen = 0;

  while (sidelen < 1) {
    printf("Enter lattice side length: ");
    scanf("%i", &sidelen);
    printf("\nSide length: %i\n", sidelen);
  }

  countcircles(sidelen);
  return 0;
}

void countcircles(int sidelen) {
  int layer = 0;
  int circles = 0;
  for (int i = sidelen; i > 0; i = (i - 2)) {
//    printf("Vertices on layer %i: %i\n", layer, countvertices(i));
//    printf("Circles on layer %i: %i\n", layer, (countvertices(i) * layer));
    circles = circles + (countvertices(i) * layer);
    layer++;
  }
  printf("Circles: %i\n", circles);
}

int countvertices(int sidelen) {
  int vertices = 0;
  if (sidelen == 1) {
    return 1;
  } else {
    return ((4 * sidelen) - 4);
  }
}
