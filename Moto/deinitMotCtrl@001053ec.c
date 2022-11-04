
/* qcamera::MotCtrlHal1::deinitMotCtrl() */

void qcamera::MotCtrlHal1::deinitMotCtrl(void)

{
  int in_r0;
  undefined4 *puVar1;
  int iVar2;
  code *in_r2;
  
  puVar1 = *(undefined4 **)(in_r0 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    if (iVar2 != 0) {
      in_r2 = *(code **)(iVar2 + 0x14);
    }
    if (iVar2 != 0 && in_r2 != (code *)0x0) {
      (*in_r2)(*puVar1,9);
      goto LAB_00105414;
    }
  }
  __android_log_print(6,DAT_0010543c + 0x10540e,DAT_00105440 + 0x105410,DAT_00105444 + 0x105412);
LAB_00105414:
  if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(in_r0 + 0x14) + 0xc))();
    if (*(int **)(in_r0 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(in_r0 + 0x14) + 0x2c))();
    }
    *(undefined4 *)(in_r0 + 0x14) = 0;
  }
  *(undefined4 *)(in_r0 + 4) = 0;
  return;
}

