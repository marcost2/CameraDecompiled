
/* qcamera::MotCtrl::~MotCtrl() */

MotCtrl * __thiscall qcamera::MotCtrl::_MotCtrl(MotCtrl *this)

{
  undefined4 *puVar1;
  int iVar2;
  code *in_r2;
  
  *(int *)this = *(int *)(DAT_00104e00 + 0x104da6) + 8;
  puVar1 = *(undefined4 **)(this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    if (iVar2 != 0) {
      in_r2 = *(code **)(iVar2 + 0x14);
    }
    if (iVar2 != 0 && in_r2 != (code *)0x0) {
      (*in_r2)(*puVar1,9);
      goto LAB_00104dce;
    }
  }
  __android_log_print(6,DAT_00104e04 + 0x104dc8,DAT_00104e08 + 0x104dca,DAT_00104e0c + 0x104dcc);
LAB_00104dce:
  if (*(QCamera3HeapMemory **)(this + 0x10) != (QCamera3HeapMemory *)0x0) {
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x10));
    if (*(int **)(this + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x10) + 0x20))();
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 8));
  return this;
}
