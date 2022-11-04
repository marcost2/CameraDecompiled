
/* qcamera::QCamera3GrallocMemory::markFrameNumber(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::markFrameNumber
          (QCamera3GrallocMemory *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      if (*(int *)(*(int *)(DAT_0009aa20 + 0x9a9b0) + 0x20) != 0) {
        uVar3 = 0x3e1;
        iVar1 = DAT_0009aa24 + 0x9a9be;
        iVar2 = DAT_0009aa28 + 0x9a9cc;
        goto LAB_0009a9fe;
      }
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        uVar3 = 0;
        *(uint *)(this + param_1 * 4 + 0x508) = param_2;
        goto LAB_0009aa06;
      }
      if (*(int *)(*(int *)(DAT_0009aa2c + 0x9a9e6) + 0x20) != 0) {
        uVar3 = 0x3e6;
        iVar1 = DAT_0009aa30 + 0x9a9f6;
        iVar2 = DAT_0009aa34 + 0x9aa00;
        goto LAB_0009a9fe;
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_0009aa14 + 0x9a98a) + 0x20) != 0) {
    uVar3 = 0x3dc;
    iVar1 = DAT_0009aa18 + 0x9a99a;
    iVar2 = DAT_0009aa1c + 0x9a9a2;
LAB_0009a9fe:
    mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  }
  uVar3 = 0xffffffb5;
LAB_0009aa06:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar3;
}

