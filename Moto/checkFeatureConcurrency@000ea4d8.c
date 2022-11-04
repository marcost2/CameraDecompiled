
/* qcamera::QCameraParameters::checkFeatureConcurrency() */

undefined4 __thiscall qcamera::QCameraParameters::checkFeatureConcurrency(QCameraParameters *this)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)(byte)this[0x2d9] << 0x16;
  if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
    uVar7 = uVar7 | 0x20;
  }
  if (this[0x2ca] != (QCameraParameters)0x0) {
    uVar7 = uVar7 | 0x2000;
  }
  if ((this[0x2c8] != (QCameraParameters)0x0) && (this[0x2c9] == (QCameraParameters)0x0)) {
    uVar7 = uVar7 | 0x1000;
  }
  if (this[0x302] != (QCameraParameters)0x0) {
    uVar7 = uVar7 | 0x80000;
  }
  if ((this[0x2cb] != (QCameraParameters)0x0) && (uVar8 = *(uint *)(this + 0x37c), -1 < (int)uVar8))
  {
    bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
    if (*(int *)(*(int *)(DAT_000ea67c + 0xea542) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ea684 + 0xea55c,0x27c0,DAT_000ea680 + 0xea552,uVar8,(uint)bVar1
                         );
    }
    if (bVar1 <= uVar8) {
      uVar7 = uVar7 | 0x4000;
    }
  }
  if ((this[0x2c9] != (QCameraParameters)0x0) && (1 < *(byte *)(*(int *)(this + 0x1d4) + 0x384f))) {
    uVar7 = uVar7 | 0x10000;
  }
  if ((uVar7 != 0) && (this[0x216] != (QCameraParameters)0x0)) {
    uVar6 = 0x80000001;
    if (*(int *)(*(int *)(DAT_000ea688 + 0xea592) + 0x20) == 0) {
      return 0x80000001;
    }
    uVar3 = 1;
    uVar5 = 0x1584;
    iVar2 = DAT_000ea68c + 0xea5a4;
    iVar4 = DAT_000ea690 + 0xea5ae;
    goto LAB_000ea670;
  }
  if (this[0x214] == (QCameraParameters)0x0) {
    if (this[0x211] == (QCameraParameters)0x0) {
      uVar7 = uVar7 & 0xffffffdf;
      if (uVar7 == 0) goto LAB_000ea64a;
      uVar6 = 0x80000001;
      if (*(int *)(*(int *)(DAT_000ea6ac + 0xea62c) + 0x20) != 0) {
        uVar3 = 0x159c;
        iVar2 = DAT_000ea6b0 + 0xea63c;
        iVar4 = DAT_000ea6b4 + 0xea646;
        goto LAB_000ea644;
      }
    }
    else if ((uVar7 - 1 & uVar7) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x80000001;
      if (*(int *)(*(int *)(DAT_000ea6a0 + 960000) + 0x20) != 0) {
        uVar3 = 0x1594;
        iVar2 = DAT_000ea6a4 + 0xea610;
        iVar4 = DAT_000ea6a8 + 0xea61a;
LAB_000ea644:
        uVar6 = 0x80000001;
        mm_camera_debug_log(1,1,iVar4,uVar3,iVar2,uVar7);
      }
    }
  }
  else {
    uVar7 = uVar7 & 0x3fbfffff;
    if (uVar7 == 0) {
LAB_000ea64a:
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = 0x80000001;
      if (*(int *)(*(int *)(DAT_000ea694 + 0xea5cc) + 0x20) != 0) {
        uVar3 = 0x158e;
        iVar2 = DAT_000ea698 + 0xea5de;
        iVar4 = DAT_000ea69c + 0xea5e8;
        goto LAB_000ea644;
      }
    }
  }
  if (*(int *)(*(int *)(DAT_000ea6b8 + 0xea658) + 0x34) == 0) {
    return uVar6;
  }
  uVar3 = 6;
  uVar5 = 0x15a0;
  iVar2 = DAT_000ea6bc + 0xea668;
  iVar4 = DAT_000ea6c0 + 0xea672;
LAB_000ea670:
  mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar2,uVar7);
  return uVar6;
}

