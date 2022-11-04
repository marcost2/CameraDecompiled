
/* qcamera::QCamera3Stream::cancelBuffer(unsigned int) */

int __thiscall qcamera::QCamera3Stream::cancelBuffer(QCamera3Stream *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if ((param_1 < (byte)this[0x34]) && (*(int *)(this + 0xd0) != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_0009cdf8 + 0x9cd46) + 0x3c);
    if (*(int *)(this + 0xcc) == 0) {
      if (iVar1 != 0) {
        mm_camera_debug_log(2,1,DAT_0009ce00 + 0x9cddc,0x2ff,DAT_0009cdfc + 0x9cdd4);
      }
      iVar1 = -0x16;
    }
    else {
      if (iVar1 != 0) {
        if (*(int *)(this + 0x14) == 0) {
          uVar2 = 0xc;
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(this + 0x14) + 4);
        }
        mm_camera_debug_log(2,1,DAT_0009ce08 + 0x9cd72,0x306,DAT_0009ce04 + 0x9cd64,param_1,uVar2);
      }
      iVar1 = (**(code **)(*(int *)(this + 0x10) + 0x70))
                        (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                         *(undefined4 *)(this + 0xc),param_1);
      if (iVar1 == -1) {
        iVar1 = -0x26;
      }
      else if (iVar1 < 0) {
        iVar1 = -0x7ffffffe;
      }
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0009cdec + 0x9cd98) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009cdf4 + 0x9cdb4,0x2fa,DAT_0009cdf0 + 0x9cda6,param_1,
                          (uint)(byte)this[0x34]);
    }
    iVar1 = -0x4b;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return iVar1;
}

