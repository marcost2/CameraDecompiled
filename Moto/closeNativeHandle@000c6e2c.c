
/* qcamera::QCameraVideoMemory::closeNativeHandle(void const*, bool) */

undefined4 __thiscall
qcamera::QCameraVideoMemory::closeNativeHandle(QCameraVideoMemory *this,void *param_1,bool param_2)

{
  uint uVar1;
  
  if (param_2 == false) {
    if (*(int *)(*(int *)(DAT_000c6ec4 + 0xc6e66) + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c6ecc + 0xc6e7e,0x692,DAT_000c6ec8 + 0xc6e76);
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (((param_1 == (void *)0x0) || (*param_1 != 3)) || (*(int *)((int)param_1 + 4) == 0)) {
      if (*(int *)(*(int *)(DAT_000c6eb8 + 0xc6e8c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c6ec0 + 0xc6ea4,0x68e,DAT_000c6ebc + 0xc6e9c);
      }
      return 0xffffffea;
    }
    if ((byte)this[0x820] != 0) {
      uVar1 = 0;
      do {
        if (**(void ***)(this + uVar1 * 4 + 0x720) == param_1) {
          *(undefined4 *)((int)param_1 + 4) = 0;
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (byte)this[0x820]);
      return 0;
    }
  }
  return 0;
}

