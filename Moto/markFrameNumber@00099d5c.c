
/* qcamera::QCamera3HeapMemory::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::markFrameNumber(QCamera3HeapMemory *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < *(uint *)(this + 4)) {
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      uVar3 = 0;
      *(uint *)(this + param_1 * 4 + 0x508) = param_2;
      goto LAB_00099dd2;
    }
    if (*(int *)(*(int *)(DAT_00099dec + 0x99db2) + 0x20) != 0) {
      uVar3 = 0x1af;
      iVar1 = DAT_00099df0 + 0x99dc2;
      iVar2 = DAT_00099df4 + 0x99dcc;
      goto LAB_00099dca;
    }
  }
  else if (*(int *)(*(int *)(DAT_00099de0 + 0x99d90) + 0x20) != 0) {
    uVar3 = 0x1aa;
    iVar1 = DAT_00099de4 + 0x99d9e;
    iVar2 = DAT_00099de8 + 0x99dac;
LAB_00099dca:
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,param_1);
  }
  uVar3 = 0xffffffb5;
LAB_00099dd2:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar3;
}

