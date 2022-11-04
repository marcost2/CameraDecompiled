
/* qcamera::QCameraParameters::setZslMode(bool) */

undefined4 __thiscall qcamera::QCameraParameters::setZslMode(QCameraParameters *this,bool param_1)

{
  QCameraParameters QVar1;
  uint uVar2;
  pthread_t pVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (this[0x212] == (QCameraParameters)0x0) {
    if (*(int *)(*(int *)(DAT_000e782c + 0xe768c) + 0x34) != 0) {
      iVar5 = DAT_000e7838 + 0xe76a0;
      if (this[0x211] == (QCameraParameters)0x0) {
        iVar5 = DAT_000e7834 + 0xe76a2;
      }
      mm_camera_debug_log(1,6,DAT_000e783c + 0xe76b8,0x12e2,DAT_000e7830 + 0xe769e,iVar5);
    }
    uVar2 = count_leading_zeroes(**(undefined4 **)(DAT_000e7840 + 0xe76c0));
    this[0x211] = (QCameraParameters)((byte)(uVar2 >> 5) & param_1);
    iVar5 = *(int *)(this + 0x1e0);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(uint *)(&DAT_000735ec + iVar5) = (uint)param_1;
        uVar4 = 0;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x30) = 1;
        goto LAB_000e77de;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e7844 + 0xe7780,DAT_000e7848 + 0xe7782,DAT_000e784c + 0xe7784,
                        0x12e9,uVar4,0x30);
    uVar4 = 0xffffffea;
    goto LAB_000e77de;
  }
  if (this[0x210] != (QCameraParameters)0x0) {
    uVar4 = 0;
    goto LAB_000e77de;
  }
  android::CameraParameters::set
            ((CameraParameters *)this,*(char **)(DAT_000e780c + 0xe7708),
             *(char **)(DAT_000e7810 + 0xe770e));
  this[0x230] = (QCameraParameters)0x1;
  *(undefined2 *)(this + 0x210) = 0x101;
  iVar5 = *(int *)(this + 0x1e0);
  if (iVar5 == 0) {
    uVar4 = 0;
LAB_000e779c:
    __android_log_print(6,DAT_000e7814 + 0xe77b4,DAT_000e7818 + 0xe77b6,DAT_000e781c + 0xe77b8,
                        0x12db,uVar4,0x30);
    uVar4 = 0xffffffea;
  }
  else {
    if (*(int *)(this + 0xd30) != 1) {
LAB_000e778c:
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar4 = *(undefined4 *)(this + 0x1e0);
      goto LAB_000e779c;
    }
    QVar1 = this[0x212];
    pVar3 = pthread_self();
    if (pVar3 != *(pthread_t *)(this + 0xd34)) goto LAB_000e778c;
    *(uint *)(&DAT_000735ec + iVar5) = (uint)(byte)QVar1;
    uVar4 = 0;
    *(undefined *)(*(int *)(this + 0x1e0) + 0x30) = 1;
  }
  if (*(int *)(*(int *)(DAT_000e7820 + 0xe77c4) + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000e7828 + 0xe77dc,0x12df,DAT_000e7824 + 0xe77d4);
  }
LAB_000e77de:
  if (*(int *)(*(int *)(DAT_000e7850 + 0xe77e4) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e7858 + 0xe7804,0x12ed,DAT_000e7854 + 0xe77f6,this[0x211],uVar4);
  }
  return uVar4;
}

