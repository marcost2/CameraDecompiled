
/* qcamera::QCamera2Factory::~QCamera2Factory() */

QCamera2Factory * __thiscall qcamera::QCamera2Factory::_QCamera2Factory(QCamera2Factory *this)

{
  *(int *)this = *(int *)(DAT_00039e7c + 0x39e6a) + 8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}

