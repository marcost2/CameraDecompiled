
/* qcamera::MotCtrl::deinitMotCtrl() */

void qcamera::MotCtrl::deinitMotCtrl(void)

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
      goto LAB_00104e38;
    }
  }
  __android_log_print(6,DAT_00104e5c + 0x104e32,DAT_00104e60 + 0x104e34,DAT_00104e64 + 0x104e36);
LAB_00104e38:
  if (*(QCamera3HeapMemory **)(in_r0 + 0x10) != (QCamera3HeapMemory *)0x0) {
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(in_r0 + 0x10));
    if (*(int **)(in_r0 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(in_r0 + 0x10) + 0x20))();
    }
    *(undefined4 *)(in_r0 + 0x10) = 0;
  }
  *(undefined4 *)(in_r0 + 4) = 0;
  return;
}

