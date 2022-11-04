
/* qcamera::QCamera3HardwareInterface::needReprocess(unsigned long long) */

undefined4 qcamera::QCamera3HardwareInterface::needReprocess(ulonglong param_1)

{
  QCamera3HardwareInterface *in_r0;
  int iVar1;
  uint in_r2;
  uint in_r3;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0005111c + 0x510a8) + *(int *)(in_r0 + 0x4c) * 4);
  if ((*(uint *)(iVar1 + 0x2ff0) | *(uint *)(iVar1 + 0x2ff4)) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_00051120 + 0x510ca) + 0x28);
    if ((in_r2 | in_r3) == 0) {
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
        mm_camera_debug_log();
      }
    }
    else if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      mm_camera_debug_log();
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = __ThumbV7PILongThunk__ZN7qcamera25QCamera3HardwareInterface21needRotationReprocessEv
                    (in_r0);
  return uVar2;
}

