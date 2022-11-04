
/* qcamera::QCameraParameters::setExposureTime(char const*) */

void __thiscall qcamera::QCameraParameters::setExposureTime(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  pthread_t pVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  int iVar9;
  int iVar10;
  cam_manual_capture_type cVar11;
  int *piVar12;
  bool bVar13;
  double dVar14;
  ulonglong uVar15;
  byte local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  piVar12 = *(int **)(DAT_000e4100 + 0xe3f10);
  iVar1 = *piVar12;
  if (param_1 == (char *)0x0) {
LAB_000e3f6c:
    if (*(int *)(*(int *)(DAT_000e4120 + 0xe3f72) + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e4124 + 0xe3f86);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e412c + 0xe3f9a,0x1ff1,DAT_000e4128 + 0xe3f8e,pcVar2);
    }
  }
  else {
    pcVar2 = param_1;
    atof(param_1);
    dVar14 = (double)CONCAT44(extraout_r1,pcVar2);
    uVar15 = __fixdfdi(SUB84(dVar14 * DAT_000e40e0,0),
                       (int)((ulonglong)(dVar14 * DAT_000e40e0) >> 0x20));
    iVar9 = (int)(uVar15 >> 0x20);
    uVar3 = (uint)uVar15;
    if ((longlong)uVar15 < 0) goto LAB_000e3f6c;
    if (uVar15 != 0) {
      iVar4 = *(int *)(this + 0x1d4);
      iVar10 = *(int *)(iVar4 + 0x33cc);
      bVar13 = uVar3 < *(uint *)(iVar4 + 0x33c8);
      if (((int)((iVar9 - iVar10) - (uint)bVar13) < 0 !=
           (SBORROW4(iVar9,iVar10) != SBORROW4(iVar9 - iVar10,(uint)bVar13))) ||
         (iVar10 = *(int *)(iVar4 + 0x33d4), bVar13 = *(uint *)(iVar4 + 0x33d0) < uVar3,
         (int)((iVar10 - iVar9) - (uint)bVar13) < 0 !=
         (SBORROW4(iVar10,iVar9) != SBORROW4(iVar10 - iVar9,(uint)bVar13)))) goto LAB_000e3f6c;
    }
    if (*(int *)(*(int *)(DAT_000e4104 + 0xe3fa4) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e410c + 0xe3fc0,0x1fc7,DAT_000e4108 + 0xe3fb8);
    }
    uVar8 = updateParamEntry(this,*(char **)(DAT_000e4110 + 0xe3fca),param_1);
    if (*(int *)(this + 0x7c0) == 0) {
      local_40 = 0;
    }
    else {
      local_40 = 1;
      iVar4 = (uint)(dVar14 < DAT_000e40e8) << 0x1f;
      iVar10 = iVar9;
      if (-1 < iVar4) {
        iVar10 = 0;
      }
      uVar5 = 100000000;
      if (iVar4 < 0) {
        uVar5 = uVar3;
      }
      if ((int)((uint)(dVar14 < DAT_000e40e8) << 0x1f) < 0) {
        cVar11 = 1;
      }
      else if ((int)((uint)(dVar14 < DAT_000e40f0) << 0x1f) < 0) {
        cVar11 = 2;
      }
      else if ((int)((uint)(dVar14 < DAT_000e40f8) << 0x1f) < 0) {
        cVar11 = 3;
      }
      else {
        cVar11 = 0;
      }
      uVar8 = setManualCaptureMode(this,cVar11);
      uVar15 = CONCAT44(iVar10,uVar5);
    }
    local_34 = (undefined4)(uVar15 >> 0x20);
    local_38 = (undefined4)uVar15;
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar6 = pthread_self(), pVar6 == *(pthread_t *)(this + 0xd34))) {
        *(ulonglong *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar4 + 0x28) =
             (ulonglong)local_40;
        *(longlong *)("APP6 Metadata: %d (AF:%d,AEC:%d,AWB:%d,IS:%d), %lld us" + iVar4 + 0x30) =
             SUB168(CONCAT412(local_34,CONCAT48(local_38,(ulonglong)local_40)) >> 0x40,0);
        *(undefined *)(*(int *)(this + 0x1e0) + 0xd8) = 1;
        *(uint *)(this + 0x7b0) = uVar3;
        *(int *)(this + 0x7b4) = iVar9;
        uVar8 = 0;
        goto LAB_000e40c8;
      }
      uVar8 = MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar7 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(uVar8,6,DAT_000e4114 + 0xe40be,DAT_000e4118 + 0xe40c0,DAT_000e411c + 0xe40c2
                        ,0x1fe7,uVar7,0xd8);
  }
  uVar8 = 0xffffffea;
LAB_000e40c8:
  if (*piVar12 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

