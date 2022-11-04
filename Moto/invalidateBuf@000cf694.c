
/* qcamera::QCameraStream::invalidateBuf(unsigned int) */

undefined4 __thiscall qcamera::QCameraStream::invalidateBuf(QCameraStream *this,uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(this + 0x10c);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000cf6a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1,0xc0144d01);
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_000cf6d8 + 0xcf6ae) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cf6e0 + 0xcf6ca,0x93f,DAT_000cf6dc + 0xcf6c2);
  }
  return 0xffffffda;
}

