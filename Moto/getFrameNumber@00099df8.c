
/* qcamera::QCamera3HeapMemory::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::getFrameNumber(QCamera3HeapMemory *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < *(uint *)(this + 4)) {
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x508);
      goto LAB_00099e6a;
    }
    if (*(int *)(*(int *)(DAT_00099e84 + 0x99e4a) + 0x20) != 0) {
      uVar3 = 0x1d2;
      iVar1 = DAT_00099e88 + 0x99e5a;
      iVar2 = DAT_00099e8c + 0x99e64;
      goto LAB_00099e62;
    }
  }
  else if (*(int *)(*(int *)(DAT_00099e78 + 0x99e28) + 0x20) != 0) {
    uVar3 = 0x1cd;
    iVar1 = DAT_00099e7c + 0x99e36;
    iVar2 = DAT_00099e80 + 0x99e44;
LAB_00099e62:
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,param_1);
  }
  uVar3 = 0xffffffff;
LAB_00099e6a:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar3;
}

