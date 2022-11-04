
/* qcamera::MotCtrlHal1::~MotCtrlHal1() */

void __thiscall qcamera::MotCtrlHal1::_MotCtrlHal1(MotCtrlHal1 *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  code *in_r2;
  
  *(int *)this = *(int *)(DAT_00105250 + 0x1051f6) + 8;
  puVar1 = *(undefined4 **)(this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = puVar1[1];
    if (iVar3 != 0) {
      in_r2 = *(code **)(iVar3 + 0x14);
    }
    if (iVar3 != 0 && in_r2 != (code *)0x0) {
      (*in_r2)(*puVar1,9);
      goto LAB_0010521e;
    }
  }
  __android_log_print(6,DAT_00105254 + 0x105218,DAT_00105258 + 0x10521a,DAT_0010525c + 0x10521c);
LAB_0010521e:
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 0xc))();
    if (*(int **)(this + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x14) + 0x2c))();
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  pvVar2 = (void *)MotCtrl::_MotCtrl((MotCtrl *)this);
  operator_delete(pvVar2);
  return;
}

