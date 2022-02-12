#include "ShapeStruct.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void RectangleDraw(struct Shape *c_this) {
  printf("Rectangle draw method.\n");
}

struct Shape *RectangleCreate(void) {
  struct Shape *c_this = (struct Shape *)malloc(sizeof(struct Shape));

  if(c_this == NULL) {
    return NULL;;
  }
  memset(c_this, 0, sizeof(struct Shape));
  c_this->Draw = RectangleDraw;
  return c_this;
}