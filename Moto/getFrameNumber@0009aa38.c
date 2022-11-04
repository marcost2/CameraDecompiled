
/* qcamera::QCamera3GrallocMemory::getFrameNumber(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getFrameNumber(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      if (*(int *)(*(int *)(DAT_0009aaf8 + 0x9aa82) + 0x20) == 0) {
        uVar3 = 0xffffffb5;
      }
      else {
        mm_camera_debug_log(1,1,DAT_0009ab00 + 0x9aa9e,0x407,DAT_0009aafc + 0x9aa90,param_1,
                            *(uint *)(this + 0x80c));
        uVar3 = 0xffffffb5;
      }
      goto LAB_0009aabc;
    }
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      uVar3 = *(undefined4 *)(this + param_1 * 4 + 0x508);
      goto LAB_0009aabc;
    }
    if (*(int *)(*(int *)(DAT_0009ab04 + 0x9aace) + 0x20) != 0) {
      uVar3 = 0x40c;
      iVar1 = DAT_0009ab08 + 0x9aae0;
      puVar2 = &UNK_0009aaea + DAT_0009ab0c;
      goto LAB_0009aa6a;
    }
  }
  else if (*(int *)(*(int *)(DAT_0009aaec + 0x9aa54) + 0x20) != 0) {
    uVar3 = 0x402;
    iVar1 = DAT_0009aaf0 + 0x9aa64;
    puVar2 = (undefined *)(DAT_0009aaf4 + 0x9aa6c);
LAB_0009aa6a:
    mm_camera_debug_log(1,1,puVar2,uVar3,iVar1);
  }
  uVar3 = 0xffffffff;
LAB_0009aabc:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar3;
}

