
/* qcamera::QCamera3Stream::bufRelease(int) */

int __thiscall qcamera::QCamera3Stream::bufRelease(QCamera3Stream *this,int param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x27c));
  if ((param_1 < (int)(uint)(byte)this[0x34]) && (*(int *)(this + 0xd0) != 0)) {
    if (*(int *)(param_1 * 0x218 + *(int *)(this + 0xd0) + 0x210) != 0) {
      iVar1 = *(int *)(this + 0x30);
      if (iVar1 == 0) {
        if (*(int *)(*(int *)(DAT_0009cefc + 0x9ceae) + 0x3c) == 0) {
          iVar1 = -0x13;
        }
        else {
          mm_camera_debug_log(2,1,DAT_0009cf04 + 0x9cec6,0x329,DAT_0009cf00 + 0x9cebe);
          iVar1 = -0x13;
        }
      }
      else {
        iVar1 = (**(code **)(iVar1 + 8))(param_1,0xffffffff,3,*(undefined4 *)(iVar1 + 0xc));
        if (iVar1 < 0) {
          if (*(int *)(*(int *)(DAT_0009cf08 + 0x9ced4) + 0x3c) != 0) {
            mm_camera_debug_log(2,1,DAT_0009cf10 + 0x9cef0,0x330,DAT_0009cf0c + 0x9cee6,param_1);
          }
        }
        else {
          *(undefined4 *)(param_1 * 0x218 + *(int *)(this + 0xd0) + 0x210) = 0;
        }
      }
      goto LAB_0009ce9c;
    }
    if (*(int *)(*(int *)(DAT_0009cf14 + 0x9ce7e) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009cf1c + 0x9ce96,0x336,DAT_0009cf18 + 0x9ce8e);
    }
  }
  iVar1 = -0x4b;
LAB_0009ce9c:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x27c));
  return iVar1;
}

