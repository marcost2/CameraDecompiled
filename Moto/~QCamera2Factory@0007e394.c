
/* qcamera::QCamera2Factory::~QCamera2Factory() */

QCamera2Factory * __thiscall qcamera::QCamera2Factory::_QCamera2Factory(QCamera2Factory *this)

{
  int *piVar1;
  int **ppiVar2;
  
  *(int *)this = *(int *)(DAT_0007e3c4 + 0x7e39e) + 8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  ppiVar2 = *(int ***)(DAT_0007e3c8 + 0x7e3b0);
  piVar1 = *ppiVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *ppiVar2 = (int *)0x0;
  }
  return this;
}

