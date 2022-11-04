
/* qcamera::QCamera3GrallocMemory::getBufferHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getBufferHandle(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      if (*(int *)(*(int *)(DAT_0009adf8 + 0x9ad8c) + 0x20) != 0) {
        uVar3 = 0x4ee;
        iVar1 = DAT_0009adfc + 0x9ad9a;
        iVar2 = DAT_0009ae00 + 0x9ada8;
        goto LAB_0009add8;
      }
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x60c);
        goto LAB_0009adde;
      }
      if (*(int *)(*(int *)(DAT_0009ae04 + 0x9adc0) + 0x20) != 0) {
        uVar3 = 0x4f3;
        iVar1 = DAT_0009ae08 + 0x9add0;
        iVar2 = DAT_0009ae0c + 0x9adda;
        goto LAB_0009add8;
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_0009adec + 0x9ad60) + 0x20) != 0) {
    uVar3 = 0x4e9;
    iVar1 = DAT_0009adf0 + 0x9ad70;
    iVar2 = DAT_0009adf4 + 0x9ad7e;
LAB_0009add8:
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,param_1);
  }
  uVar3 = 0;
LAB_0009adde:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar3;
}

