
/* qcamera::QCameraParameters::updateDtVc(int*, int*) */

undefined4 __thiscall
qcamera::QCameraParameters::updateDtVc(QCameraParameters *this,int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  char acStack120 [92];
  int local_1c;
  
  piVar2 = *(int **)(DAT_000f81c4 + 0xf813a);
  local_1c = *piVar2;
  property_get(DAT_000f81cc + 0xf814e,acStack120,*(undefined4 *)(DAT_000f81c8 + 0xf8144));
  uVar1 = atoi(acStack120);
  if (uVar1 == 0) {
    uVar1 = (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x54df);
  }
  *param_1 = uVar1;
  property_get(DAT_000f81d0 + 0xf8170,acStack120,DAT_000f81d4 + 0xf8172);
  uVar1 = atoi(acStack120);
  if (uVar1 == 0xffffffff) {
    uVar1 = (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x54b7);
  }
  *param_2 = uVar1;
  if (*(int *)(*(int *)(DAT_000f81d8 + 0xf8190) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f81e0 + 0xf81ae,0x3f84,DAT_000f81dc + 0xf81a0,*param_1,uVar1);
  }
  if (*piVar2 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

