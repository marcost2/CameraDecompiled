
/* qcamera::QCameraParameters::setReprocCount() */

void __thiscall qcamera::QCameraParameters::setReprocCount(QCameraParameters *this)

{
  QCameraParameters QVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char acStack112 [92];
  int local_14;
  
  piVar5 = *(int **)(DAT_000e7940 + 0xe7868);
  local_14 = *piVar5;
  this[0x374] = (QCameraParameters)0x1;
  if (2 < *(int *)(this + 0x7c0)) {
    if (*(int *)(*(int *)(DAT_000e7944 + 0xe7880) + 0x2c) == 0) {
      QVar1 = (QCameraParameters)0x2;
    }
    else {
      mm_camera_debug_log(1,4,DAT_000e794c + 0xe7898,0x3b7c,DAT_000e7948 + 0xe7890);
      QVar1 = (QCameraParameters)((char)this[0x374] + '\x01');
    }
    this[0x374] = QVar1;
  }
  if (this[0x800] == (QCameraParameters)0x0) {
    property_get(DAT_000e7954 + 0xe78be,acStack112,*(undefined4 *)(DAT_000e7950 + 0xe78b4));
    iVar2 = atoi(acStack112);
    if (iVar2 == 0) goto LAB_000e792e;
  }
  if (*(int *)(this + 0x378) == 0) {
LAB_000e791e:
    if (this[0x800] == (QCameraParameters)0x0) goto LAB_000e792e;
  }
  else if (this[0x800] == (QCameraParameters)0x0) {
    uVar3 = getBurstCountForAdvancedCapture(this);
    uVar4 = android::CameraParameters::getInt((char *)this);
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    if (uVar3 == (uVar4 & 0xff)) {
      if (*(int *)(*(int *)(DAT_000e795c + 0xe78fa) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000e7964 + 0xe7912,0x3b87,DAT_000e7960 + 0xe790a);
      }
      this[0x374] = (QCameraParameters)((char)this[0x374] + '\x01');
    }
    goto LAB_000e791e;
  }
  this[0x374] = (QCameraParameters)((char)this[0x374] + '\x01');
LAB_000e792e:
  if (*piVar5 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

