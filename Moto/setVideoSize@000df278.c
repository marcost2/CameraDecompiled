
/* qcamera::QCameraParameters::setVideoSize(qcamera::QCameraParameters const&) */

void __thiscall
qcamera::QCameraParameters::setVideoSize(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar9 = *(int **)(DAT_000df43c + 0xdf288);
  local_1c = *piVar9;
  iVar1 = android::CameraParameters::get((char *)param_1);
  android::CameraParameters::getVideoSize((CameraParameters *)this,&local_28,&local_2c);
  if (iVar1 != 0) {
    android::CameraParameters::getVideoSize((CameraParameters *)param_1,&local_20,&local_24);
    iVar1 = *(int *)(this + 0x1d4);
    if (*(uint *)(iVar1 + 0x9ac) != 0) {
      piVar4 = (int *)(iVar1 + 0x9b0);
      iVar5 = 0x136;
      do {
        iVar8 = *piVar4;
        bVar10 = local_20 == iVar8;
        if (bVar10) {
          iVar8 = piVar4[1];
        }
        if (bVar10 && local_24 == iVar8) {
          if ((local_28 == -1) || (local_2c == -1)) {
            android::CameraParameters::getPreviewSize((CameraParameters *)this,&local_28,&local_2c);
          }
          if ((this[0x213] != (QCameraParameters)0x0) &&
             (((local_20 != local_28 || (local_24 != local_2c)) &&
              (this[0x230] = (QCameraParameters)0x1,
              *(char *)(*(int *)(this + 0x1d4) + 0x5c4) != '\0')))) {
            if ((local_20 < 0xf00) || (local_24 < 0x870)) {
              this[0xd44] = (QCameraParameters)0x0;
              pcVar3 = *(char **)(DAT_000df44c + 0xdf3e8);
              pcVar7 = *(char **)(DAT_000df450 + 0xdf3ee);
            }
            else {
              pcVar7 = *(char **)(DAT_000df444 + 0xdf3c4);
              setVideoStabilization(this,pcVar7);
              this[0xd44] = (QCameraParameters)0x1;
              pcVar3 = *(char **)(DAT_000df448 + 0xdf3da);
            }
            android::CameraParameters::set((CameraParameters *)this,pcVar3,pcVar7);
          }
          if (*(int *)(*(int *)(DAT_000df454 + 0xdf3fa) + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000df45c + 0xdf41a,0x7d2,DAT_000df458 + 0xdf40c,local_20,
                                local_24);
          }
          android::CameraParameters::setVideoSize((CameraParameters *)this,local_20,local_24);
          goto LAB_000df426;
        }
        piVar4 = piVar4 + 2;
        uVar6 = iVar5 - 0x135;
        iVar5 = iVar5 + 1;
      } while (uVar6 < *(uint *)(iVar1 + 0x9ac));
    }
    if (*(int *)(this + 500) != 1) {
      if (*(int *)(*(int *)(DAT_000df46c + 0xdf34c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000df474 + 0xdf36c,0x7e6,DAT_000df470 + 0xdf35e,local_20,
                            local_24);
      }
      uVar2 = 0xffffffea;
      goto LAB_000df428;
    }
    local_20 = *(int *)(iVar1 + 0x9b0);
    local_24 = *(int *)(iVar1 + 0x9b4);
    bVar10 = local_20 == local_28;
    if (bVar10) {
      local_28 = local_2c;
    }
    if (!bVar10 || local_24 != local_28) {
      this[0x230] = (QCameraParameters)0x1;
    }
    android::CameraParameters::setVideoSize((CameraParameters *)this,local_20,local_24);
    if (*(int *)(*(int *)(DAT_000df460 + 0xdf31e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000df468 + 0xdf342,0x7e2,DAT_000df464 + 0xdf334,local_20,local_24)
      ;
    }
  }
LAB_000df426:
  uVar2 = 0;
LAB_000df428:
  if (*piVar9 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

