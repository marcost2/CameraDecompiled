
/* qcamera::QCameraParameters::setPreviewFpsRange(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setPreviewFpsRange(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  pthread_t pVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  
  piVar9 = *(int **)(DAT_000e06f4 + 0xe0488);
  local_24 = *piVar9;
  android::CameraParameters::getPreviewFpsRange
            ((CameraParameters *)this,(int *)&local_30,(int *)&local_34);
  android::CameraParameters::getPreviewFpsRange
            ((CameraParameters *)param_1,(int *)&local_28,(int *)&local_2c);
  iVar10 = *(int *)(DAT_000e06f8 + 0xe04aa);
  if ((*(int *)(iVar10 + 0x28) != 0) &&
     (mm_camera_debug_log(1,3,DAT_000e0700 + 0xe04ce,0x9d0,DAT_000e06fc + 0xe04c0,local_30,local_34)
     , *(int *)(iVar10 + 0x28) != 0)) {
    mm_camera_debug_log(1,3,DAT_000e0708 + 0xe04f2,0x9d1,DAT_000e0704 + 0xe04e4,local_28,local_2c);
  }
  iVar1 = UpdateHFRFrameRate(this,param_1);
  if (iVar1 == 0) {
LAB_000e053c:
    if (*(int *)(iVar10 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e071c + 0xe0558,0x9da,DAT_000e0718 + 0xe054e,iVar1);
    }
    if ((local_28 == local_30) && (local_2c == local_34)) {
      if (this[0x269] == (QCameraParameters)0x0) {
        if (iVar1 == 0) {
          if (*(int *)(iVar10 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e072c + 0xe06e4,0x9ea,DAT_000e0728 + 0xe06dc);
          }
          uVar11 = 0;
          goto LAB_000e063a;
        }
      }
      else {
        iVar1 = android::CameraParameters::getPreviewFrameRate((CameraParameters *)param_1);
        local_28 = (float)(iVar1 * 1000);
        iVar1 = android::CameraParameters::getPreviewFrameRate((CameraParameters *)param_1);
        local_2c = (float)(iVar1 * 1000);
        this[0x269] = (QCameraParameters)0x0;
      }
    }
    uVar5 = *(uint *)(*(int *)(this + 0x1d4) + 0x274);
    if (uVar5 != 0) {
      pfVar7 = (float *)(*(int *)(this + 0x1d4) + 0x27c);
      uVar4 = 0;
      do {
        if ((pfVar7[-1] * DAT_000e06f0 <= (float)(longlong)(int)local_28) &&
           ((float)(longlong)(int)local_2c <= *pfVar7 * DAT_000e06f0)) {
          if (*(int *)(iVar10 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e0724 + 0xe0682,0x9f8,DAT_000e0720 + 0xe0666,uVar4,
                                local_28,local_2c,ROUND(*(float *)(this + 0x2e4)),
                                ROUND(*(float *)(this + 0x2e8)));
          }
          fVar3 = local_2c;
          fVar6 = local_28;
          if ((0.0 < *(float *)(this + 0x2e4)) && (0.0 < *(float *)(this + 0x2e8))) {
            fVar3 = ROUND(*(float *)(this + 0x2e8));
            fVar6 = ROUND(*(float *)(this + 0x2e4));
          }
          setPreviewFpsRange(this,(int)local_28,(int)local_2c,(int)fVar6,(int)fVar3);
          uVar11 = 0;
          goto LAB_000e063a;
        }
        pfVar7 = pfVar7 + 4;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    if (*(int *)(iVar10 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000e0734 + 0xe0634,0xa1a,DAT_000e0730 + 0xe062c);
    }
  }
  else {
    this[0x230] = (QCameraParameters)0x1;
    iVar8 = *(int *)(this + 0x1e0);
    if (iVar8 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(int *)(this + 0xd30) == 1) {
        uVar11 = *(undefined4 *)(this + 0x2fc);
        pVar2 = pthread_self();
        if (pVar2 == *(pthread_t *)(this + 0xd34)) {
          *(undefined4 *)
           (
           "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
           + iVar8 + 0x3c) = uVar11;
          *(undefined *)(*(int *)(this + 0x1e0) + 0x25) = 1;
          goto LAB_000e053c;
        }
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar11 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e070c + 0xe05b8,DAT_000e0710 + 0xe05ba,DAT_000e0714 + 0xe05bc,
                        0x2483,uVar11,0x25);
  }
  uVar11 = 0xffffffea;
LAB_000e063a:
  if (*piVar9 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}

