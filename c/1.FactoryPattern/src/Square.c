#include "ShapeStruct.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void SquareDraw(struct Shape *c_this) {
  printf("Square draw method.\n");
}

struct Shape *SquareCreate(void) {
  struct Shape *c_this = (struct Shape *)malloc(sizeof(struct Shape));

  if(c_this == NULL) {
    return NULL;;
  }
  memset(c_this, 0, sizeof(struct Shape));
  c_this->Draw = SquareDraw;
  return c_this;
}
