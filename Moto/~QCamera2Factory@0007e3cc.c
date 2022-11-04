
/* qcamera::QCamera2Factory::~QCamera2Factory() */

void __thiscall qcamera::QCamera2Factory::_QCamera2Factory(QCamera2Factory *this)

{
  int *piVar1;
  int **ppiVar2;
  
  *(int *)this = *(int *)(DAT_0007e400 + 0x7e3d6) + 8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  ppiVar2 = *(int ***)(DAT_0007e404 + 0x7e3e8);
  piVar1 = *ppiVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *ppiVar2 = (int *)0x0;
  }
  operator_delete(this);
  return;
}

