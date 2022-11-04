
/* qcamera::MotCtrlHal1::~MotCtrlHal1() */

void __thiscall qcamera::MotCtrlHal1::_MotCtrlHal1(MotCtrlHal1 *this)

{
  undefined4 *puVar1;
  int iVar2;
  code *in_r2;
  
  *(int *)this = *(int *)(DAT_001051dc + 0x105186) + 8;
  puVar1 = *(undefined4 **)(this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    if (iVar2 != 0) {
      in_r2 = *(code **)(iVar2 + 0x14);
    }
    if (iVar2 != 0 && in_r2 != (code *)0x0) {
      (*in_r2)(*puVar1,9);
      goto LAB_001051ae;
    }
  }
  __android_log_print(6,DAT_001051e0 + 0x1051a8,DAT_001051e4 + 0x1051aa,DAT_001051e8 + 0x1051ac);
LAB_001051ae:
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 0xc))();
    if (*(int **)(this + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x14) + 0x2c))();
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  MotCtrl::_MotCtrl((MotCtrl *)this);
  return;
}

