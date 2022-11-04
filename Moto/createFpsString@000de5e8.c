
/* qcamera::QCameraParameters::createFpsString(cam_fps_range_t&) */

void qcamera::QCameraParameters::createFpsString(cam_fps_range_t *param_1)

{
  float *in_r2;
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined auStack64 [32];
  int local_20;
  
  piVar2 = *(int **)(DAT_000de698 + 0xde5f8);
  local_20 = *piVar2;
  android::String8::String8((String8 *)param_1);
  fVar3 = ROUND(in_r2[1]);
  fVar4 = ROUND(*in_r2);
  if ((int)((uint)(in_r2[1] < (float)(longlong)(int)fVar3) << 0x1f) < 0) {
    fVar3 = (float)((int)fVar3 + -1);
  }
  if ((float)(longlong)(int)fVar4 <= *in_r2) {
    fVar4 = (float)((int)fVar4 + 1);
  }
  if ((int)fVar4 <= (int)fVar3) {
    FUN_000d6e38(auStack64,0x20,0x20,DAT_000de69c + 0xde652);
    android::String8::append((char *)param_1);
  }
  if ((int)fVar4 < (int)fVar3) {
    iVar1 = DAT_000de6a0 + 0xde668;
    do {
      fVar4 = (float)((int)fVar4 + 1);
      FUN_000d6e38(auStack64,0x20,0x20,iVar1);
      android::String8::append((char *)param_1);
    } while (fVar3 != fVar4);
  }
  if (*piVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

