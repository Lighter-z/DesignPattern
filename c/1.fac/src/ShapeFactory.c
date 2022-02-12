#include "ShapeFactory.h"
#include "ShapeStruct.h"

#include <stdlib.h>
#include <string.h>

extern struct Shape* CircleCreate(void);
extern struct Shape* RectangleCreate(void);
extern struct Shape* SquareCreate(void);

Shape* ShapeFactoryCreateShape(const char *shape_type) {
  if(shape_type == NULL) {
    return NULL;
  }
  if (0 == strcasecmp("CIRCLE", shape_type)) {
    return CircleCreate();
  } else if (0 == strcasecmp("RECTANGLE", shape_type)) {
    return RectangleCreate();
  } else if (0 == strcasecmp("SQUARE", shape_type)) {
    return SquareCreate();
  } else {
  return NULL;
  }
}
