#include "ShapeStruct.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void CircleDraw(struct Shape *c_this) {
  printf("Circle draw method.\n");
}

struct Shape *CircleCreate(void) {
  struct Shape *c_this = (struct Shape *)malloc(sizeof(struct Shape));

  if(c_this == NULL) {
    return NULL;;
  }
  memset(c_this, 0, sizeof(struct Shape));
  c_this->Draw = CircleDraw;
  return c_this;
}
