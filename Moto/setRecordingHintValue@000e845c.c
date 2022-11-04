
/* qcamera::QCameraParameters::setRecordingHintValue(int) */

void __thiscall
qcamera::QCameraParameters::setRecordingHintValue(QCameraParameters *this,int param_1)

{
  undefined *puVar1;
  QCameraParameters QVar2;
  char *__s1;
  int iVar3;
  int iVar4;
  pthread_t pVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  char *local_2c;
  char *local_28;
  int local_24;
  
  piVar10 = *(int **)(DAT_000e8714 + 0xe846c);
  local_24 = *piVar10;
  iVar11 = *(int *)(DAT_000e8718 + 0xe847a);
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e8720 + 0xe8498,0x2d84,DAT_000e871c + 0xe848e,param_1);
  }
  __s1 = (char *)android::CameraParameters::get((char *)this);
  if (this[0x213] == (QCameraParameters)(0 < param_1)) {
    this[0x214] = this[0x213];
  }
  else {
    this[0x230] = (QCameraParameters)0x1;
    this[0x214] = (QCameraParameters)(0 < param_1);
    if (*(int *)(*(int *)(this + 0x1d4) + 4) == 0) {
      if (param_1 < 1) {
        if (this[0xd24] != (QCameraParameters)0x0) {
          setAutoDcOffsetMode(this,*(char **)(DAT_000e8738 + 0xe86bc));
          if (*(int *)(iVar11 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e873c + 0xe86d6,0x2d97,DAT_000e8740 + 0xe86d8,
                                DAT_000e873c + 0xe86d6);
          }
          QVar2 = (QCameraParameters)0x0;
          goto LAB_000e86e2;
        }
      }
      else if ((__s1 != (char *)0x0) &&
              (iVar3 = strcmp(__s1,*(char **)(DAT_000e8728 + 0xe85a6)), iVar3 == 0)) {
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000e872c + 0xe85c2,0x2d91,DAT_000e8730 + 0xe85c4,
                              DAT_000e872c + 0xe85c2);
        }
        setAutoDcOffsetMode(this,*(char **)(DAT_000e8734 + 0xe85d2));
        QVar2 = (QCameraParameters)0x1;
LAB_000e86e2:
        this[0xd24] = QVar2;
      }
    }
    iVar3 = *(int *)(this + 0x1d4);
    if (*(char *)(iVar3 + 0x2f7d) != '\0') {
      if (this[0x214] == (QCameraParameters)0x0) {
        createZoomRatioValuesString((uint *)&local_2c,0);
        android::CameraParameters::set
                  ((CameraParameters *)this,*(char **)(DAT_000e8760 + 0xe85f0),local_2c);
        android::CameraParameters::set
                  ((CameraParameters *)this,*(char **)(DAT_000e8764 + 0xe8602),
                   *(int *)(*(int *)(this + 0x1d4) + 0x4c) + -1);
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000e8768 + 0xe8622,0x2db8,DAT_000e876c + 0xe8624,
                              DAT_000e8768 + 0xe8622,*(int *)(*(int *)(this + 0x1d4) + 0x4c) + -1);
        }
        puVar1 = &stack0xffffffec;
      }
      else {
        uVar7 = *(uint *)(iVar3 + 0x4c);
        if ((uVar7 == 0) ||
           (fVar12 = (float)(ulonglong)*(uint *)(iVar3 + 0x50), 4.0 <= fVar12 / fVar12)) {
          uVar9 = 0;
        }
        else {
          uVar8 = 1;
          do {
            uVar9 = (uint)uVar8;
            if (uVar7 <= uVar9) break;
            uVar8 = uVar8 + 1;
          } while ((float)(ulonglong)*(uint *)(iVar3 + uVar9 * 4 + 0x50) / fVar12 < 4.0);
        }
        createZoomRatioValuesString((uint *)&local_28,uVar7);
        android::CameraParameters::set
                  ((CameraParameters *)this,*(char **)(DAT_000e8744 + 0xe8526),local_28);
        iVar3 = uVar9 - 1;
        android::CameraParameters::set
                  ((CameraParameters *)this,*(char **)(DAT_000e8748 + 0xe8538),iVar3);
        if (*(int *)(iVar11 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000e874c + 0xe8554,0x2dac,DAT_000e8750 + 0xe8552,
                              DAT_000e874c + 0xe8554,iVar3);
        }
        iVar4 = android::CameraParameters::getInt((char *)this);
        if ((int)uVar9 <= iVar4) {
          if (*(int *)(iVar11 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000e8758 + 0xe8580,0x2dae,DAT_000e875c + 0xe8582,
                                DAT_000e8758 + 0xe8580);
          }
          setZoom(this,iVar3);
        }
        puVar1 = &stack0xfffffff0;
      }
      android::String8::_String8((String8 *)(puVar1 + -0x18));
    }
  }
  iVar11 = *(int *)(this + 0x1e0);
  if (iVar11 == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(int *)(this + 0xd30) == 1) &&
       (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
      *(int *)("%s: Failed to set LED eeprom/otp data!\n" + iVar11 + 0x1c) = param_1;
      *(undefined *)(*(int *)(this + 0x1e0) + 0x2b) = 1;
      uVar6 = 0;
      goto LAB_000e869c;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
    uVar6 = *(undefined4 *)(this + 0x1e0);
  }
  __android_log_print(6,DAT_000e8770 + 0xe8692,DAT_000e8774 + 0xe8694,DAT_000e8778 + 0xe8696,0x2dbf,
                      uVar6,0x2b);
  uVar6 = 0xffffffea;
LAB_000e869c:
  if (*piVar10 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

