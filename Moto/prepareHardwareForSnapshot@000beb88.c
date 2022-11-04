
/* qcamera::QCamera2HardwareInterface::prepareHardwareForSnapshot(int) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::prepareHardwareForSnapshot
          (QCamera2HardwareInterface *this,int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_000bec28 + 0xbeb96);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000bec2c + 0xbeba2) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000bec30 + 0xbebb0) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000bec34 + 0xbec16);
    }
  }
  if (*(int *)(*(int *)(DAT_000bec38 + 0xbebbc) + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000bec40 + 0xbebd4,0x35be,DAT_000bec3c + 0xbebcc);
  }
  uVar1 = (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x28))
                    (**(undefined4 **)(this + 0x60),param_1);
  if (1 < *puVar2) {
    if ((**(byte **)(DAT_000bec44 + 0xbebf0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000bec48 + 0xbebfe) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar1;
}

