
/* qcamera::QCameraParameters::getOptimalThumbnailSize(cam_dimension_t const&, cam_dimension_t&)
   const */

void __thiscall
qcamera::QCameraParameters::getOptimalThumbnailSize
          (QCameraParameters *this,cam_dimension_t *param_1,cam_dimension_t *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)param_2 = 0x200;
  *(undefined4 *)(param_2 + 4) = 0x180;
  iVar4 = *(int *)param_1;
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    if (iVar4 != 0) {
      uVar1 = (uint)(iVar4 << 10) / uVar1;
      iVar4 = 0x555 - uVar1;
      iVar2 = 0;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 2) {
        iVar3 = 0x180;
        iVar2 = iVar3;
      }
      else {
        iVar3 = 0x120;
      }
      iVar5 = 0x71c - uVar1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 2) {
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      if (iVar4 >= 2 && iVar5 >= 2) {
        iVar3 = 0x100;
      }
      iVar6 = 0x800 - uVar1;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 2) {
        iVar2 = iVar3;
      }
      if (iVar2 != 0) {
        uVar1 = (uint)((iVar4 < 2 || iVar5 < 2) || iVar6 < 2);
        if (uVar1 != 0) {
          if (uVar1 != 0) {
            uVar1 = 0x200;
          }
          *(uint *)param_2 = uVar1;
          *(int *)(param_2 + 4) = iVar2;
        }
      }
      return;
    }
    iVar4 = 0;
  }
  __android_log_print(6,DAT_000efe30 + 0xefe24,DAT_000efe34 + 0xefe26,DAT_000efe38 + 0xefe28,iVar4,
                      uVar1);
  return;
}

