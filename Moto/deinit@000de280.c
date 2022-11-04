
/* qcamera::QCameraParameters::deinit() */

void __thiscall qcamera::QCameraParameters::deinit(QCameraParameters *this)

{
  undefined4 *puVar1;
  int extraout_r1;
  int iVar2;
  int *piVar3;
  String8 aSStack24 [4];
  int local_14;
  
  piVar3 = *(int **)(DAT_000de358 + 0xde28c);
  local_14 = *piVar3;
  if (*(int **)(this + 0x1dc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1dc) + 0xc))();
    if (*(int **)(this + 0x1dc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1dc) + 0x2c))();
    }
    *(undefined4 *)(this + 0x1dc) = 0;
    *(undefined4 *)(this + 0x1e0) = 0;
  }
  if (this[0x236] != (QCameraParameters)0x0) {
    if (*(int **)(this + 0xd1c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xd1c) + 4))();
    }
    android::String8::String8(aSStack24);
    android::CameraParameters::unflatten((CameraParameters *)this,aSStack24);
    puVar1 = *(undefined4 **)(this + 0x1d8);
    iVar2 = extraout_r1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = puVar1[1];
    }
    if ((puVar1 != (undefined4 *)0x0 && iVar2 != 0) &&
       (((**(code **)(iVar2 + 0x14))(*puVar1,1), *(int *)(this + 0x1ec) == 1 ||
        (this[0x18] != (QCameraParameters)0x0)))) {
      (**(code **)((*(undefined4 **)(this + 0x1d8))[1] + 0x14))(**(undefined4 **)(this + 0x1d8),2);
    }
    *(undefined4 *)(this + 0x1d4) = 0;
    if (*(int **)(this + 0x1e4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1e4) + 0xc))();
      if (*(int **)(this + 0x1e4) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1e4) + 0x2c))();
      }
      *(undefined4 *)(this + 0x1e4) = 0;
      *(undefined4 *)(this + 0x1e8) = 0;
    }
    *(undefined4 *)(this + 0x294) = 0;
    android::VectorImpl::clear();
    *(undefined4 *)(this + 0x294) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    this[0x236] = (QCameraParameters)0x0;
    android::String8::_String8(aSStack24);
  }
  if (*piVar3 != local_14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

