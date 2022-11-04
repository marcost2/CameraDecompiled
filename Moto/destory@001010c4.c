
/* qcamera::BSTLiveBokeh::destory() */

void qcamera::BSTLiveBokeh::destory(void)

{
  int *piVar1;
  int **ppiVar2;
  
  ppiVar2 = *(int ***)(DAT_001010dc + 0x1010cc);
  piVar1 = *ppiVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *ppiVar2 = (int *)0x0;
  return;
}

