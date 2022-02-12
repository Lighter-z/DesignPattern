#ifndef SHAPE_STRUCT_H_
#define SHAPE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Shape {
  void *priv_;
  void (*Draw)(struct Shape *c_this);
  void (*Destroy)(struct Shape *c_this);
};

#ifdef __cplusplus
}
#endif
#endif // ! SHAPE_STRUCT_H_
