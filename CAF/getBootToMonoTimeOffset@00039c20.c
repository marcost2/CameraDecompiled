
/* qcamera::QCameraCommon::getBootToMonoTimeOffset() */

longlong qcamera::QCameraCommon::getBootToMonoTimeOffset(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r8;
  int iVar6;
  undefined4 unaff_r11;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar1 = CONCAT44(local_2c,local_28);
  iVar5 = 3;
  lVar3 = CONCAT44(unaff_r8,unaff_r11);
  do {
    while( true ) {
      iVar6 = (int)((ulonglong)lVar3 >> 0x20);
      lVar8 = systemTime();
      lVar9 = systemTime();
      lVar10 = systemTime();
      lVar2 = lVar10 - lVar8;
      iVar4 = (int)((ulonglong)lVar2 >> 0x20);
      if ((iVar5 == 3) ||
         (bVar7 = (uint)lVar2 < (uint)lVar3,
         (int)((iVar4 - iVar6) - (uint)bVar7) < 0 !=
         (SBORROW4(iVar4,iVar6) != SBORROW4(iVar4 - iVar6,(uint)bVar7)))) break;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return lVar1;
      }
    }
    lVar8 = lVar8 + lVar10;
    lVar1 = lVar9 - CONCAT44((int)(lVar8 >> 0x21),
                             (uint)((byte)((ulonglong)lVar8 >> 0x20) & 1) << 0x1f | (uint)lVar8 >> 1
                            );
    iVar5 = iVar5 + -1;
    lVar3 = lVar2;
  } while (iVar5 != 0);
  return lVar1;
}

