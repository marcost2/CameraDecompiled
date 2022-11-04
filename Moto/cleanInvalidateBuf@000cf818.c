
/* qcamera::QCameraStream::cleanInvalidateBuf(unsigned int) */

undefined4 __thiscall qcamera::QCameraStream::cleanInvalidateBuf(QCameraStream *this,uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(this + 0x10c);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000cf82a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1,0xc0144d02);
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_000cf85c + 0xcf832) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cf864 + 0xcf84e,0x954,DAT_000cf860 + 0xcf846);
  }
  return 0xffffffda;
}

