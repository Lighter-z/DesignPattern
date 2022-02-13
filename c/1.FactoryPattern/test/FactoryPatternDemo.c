#include "ShapeFactory.h"

#include <stdio.h>
#include <stdlib.h>

void main(void) {
  //获取 Circle 的对象，并调用它的 draw 方法
  Shape* circle_shape = ShapeFactoryCreateShape("CIRCLE");
  ShapeDraw(circle_shape);
  ShapeDestory(&circle_shape);

  //获取 Rectangle 的对象，并调用它的 draw 方法
  Shape* rectangle_shape = ShapeFactoryCreateShape("RECTANGLE");
  ShapeDraw(rectangle_shape);
  ShapeDestory(&rectangle_shape);

  //获取 Square 的对象，并调用它的 draw 方法
  Shape* square_shape = ShapeFactoryCreateShape("SQUARE");
  ShapeDraw(square_shape);
  ShapeDestory(&square_shape);
  system("pause");
}
