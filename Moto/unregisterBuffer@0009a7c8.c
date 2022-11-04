
/* qcamera::QCamera3GrallocMemory::unregisterBuffer(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::unregisterBuffer(QCamera3GrallocMemory *this,uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  iVar3 = *(int *)(DAT_0009a8a8 + 0x9a7e0);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009a8b0 + 0x9a7fa,0x38f,DAT_0009a8ac + 0x9a7f0,param_1);
  }
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      if (*(int *)(iVar3 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009a8c0 + 0x9a84a,0x398,DAT_0009a8bc + 0x9a83c,param_1,
                            *(uint *)(this + 0x80c));
      }
      uVar2 = 0xffffffb5;
      goto LAB_0009a87e;
    }
    if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
      unregisterBufferLocked(this,param_1);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0009a8d0 + 0x9a87a,0x3a4,DAT_0009a8cc + 0x9a872);
      }
      uVar2 = 0;
      goto LAB_0009a87e;
    }
    if (*(int *)(iVar3 + 0x20) != 0) {
      uVar2 = 0x39e;
      iVar3 = DAT_0009a8c4 + 0x9a89c;
      puVar1 = &UNK_0009a8a6 + DAT_0009a8c8;
      goto LAB_0009a81c;
    }
  }
  else if (*(int *)(iVar3 + 0x20) != 0) {
    uVar2 = 0x393;
    iVar3 = DAT_0009a8b4 + 0x9a810;
    puVar1 = (undefined *)(DAT_0009a8b8 + 0x9a81e);
LAB_0009a81c:
    mm_camera_debug_log(1,1,puVar1,uVar2,iVar3,param_1);
  }
  uVar2 = 0xffffffea;
LAB_0009a87e:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  return uVar2;
}

