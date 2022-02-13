#ifndef SHAPE_H_
#define SHAPE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Shape Shape;

void ShapeDraw(Shape *c_this);
void ShapeDestory(Shape **c_this);

#ifdef __cplusplus
}
#endif
#endif // ! SHAPE_H_
