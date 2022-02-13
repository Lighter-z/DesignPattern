#include "Shape.h"
#include "ShapeStruct.h"

#include <assert.h>
#include <stdlib.h>

void ShapeDraw(Shape *c_this) {
  assert(c_this != NULL);
  if(c_this->Draw != NULL) {
    c_this->Draw(c_this);
  }
}

void ShapeDestory(Shape **c_this) {
  if(c_this == NULL || *c_this == NULL) {
    return;
  }

  Shape *shape = *c_this;
  if(shape->Destroy != NULL) {
    shape->Destroy(shape);
  }
  free(*c_this);
  *c_this = NULL;
}
