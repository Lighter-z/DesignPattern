#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "shape.h"

Shape* ShapeFactoryCreateShape(const char *shape_type);

#ifdef __cplusplus
}
#endif
#endif // ! SHAPE_FACTORY_H_
