
/* qcamera::MotCtrlHal1::MotCtrlHal1() */

void __thiscall qcamera::MotCtrlHal1::MotCtrlHal1(MotCtrlHal1 *this)

{
  int *piVar1;
  
  piVar1 = (int *)MotCtrl::MotCtrl((MotCtrl *)this);
  piVar1[5] = 0;
  *piVar1 = *(int *)(DAT_00105178 + 0x105170) + 8;
  piVar1[1] = 0;
  return;
}

