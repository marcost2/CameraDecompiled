
/* qcamera::QCameraDisplay::computePresentationTimeStamp(long long) */

undefined8 qcamera::QCameraDisplay::computePresentationTimeStamp(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  QCameraDisplay *in_r0;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_r2;
  int in_r3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar3 = isSyncing(in_r0);
  if (iVar3 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(in_r0 + 0x10);
  uVar8 = *(uint *)(in_r0 + 0x14);
  if ((uVar6 | uVar8) == 0) {
    return 0;
  }
  uVar9 = *(uint *)(in_r0 + 8);
  uVar7 = *(uint *)(in_r0 + 0xc);
  if ((uVar9 | uVar7) == 0) {
    return 0;
  }
  lVar2 = (ulonglong)uVar6 * (ulonglong)*(uint *)(in_r0 + 0x70);
  uVar4 = (uint)lVar2;
  uVar10 = uVar4 + in_r2;
  iVar3 = in_r3 + uVar8 * *(uint *)(in_r0 + 0x70) + (int)((ulonglong)lVar2 >> 0x20) +
          (uint)CARRY4(uVar4,in_r2);
  if ((int)((uVar7 - iVar3) - (uint)(uVar9 < uVar10)) < 0 ==
      (SBORROW4(uVar7,iVar3) != SBORROW4(uVar7 - iVar3,(uint)(uVar9 < uVar10)))) {
    uVar7 = 0;
    goto LAB_0003987c;
  }
  uVar4 = uVar6;
  __aeabi_ldivmod(uVar10 - uVar9,(iVar3 - uVar7) - (uint)(uVar10 < uVar9),uVar6,uVar8);
  uVar7 = (uVar6 - *(int *)(in_r0 + 0x78)) - uVar4;
  iVar5 = (uVar8 - *(int *)(in_r0 + 0x8c)) - (uint)(uVar6 < *(uint *)(in_r0 + 0x88));
  bVar11 = uVar6 - *(uint *)(in_r0 + 0x88) < uVar4;
  iVar1 = (int)uVar4 >> 0x1f;
  if ((int)((iVar5 - iVar1) - (uint)bVar11) < 0 ==
      (SBORROW4(iVar5,iVar1) != SBORROW4(iVar5 - iVar1,(uint)bVar11))) {
    iVar5 = (uVar8 - *(int *)(in_r0 + 0x84)) - (uint)(uVar6 < *(uint *)(in_r0 + 0x80));
    bVar11 = uVar4 < uVar6 - *(uint *)(in_r0 + 0x80);
    if ((int)((iVar1 - iVar5) - (uint)bVar11) < 0 !=
        (SBORROW4(iVar1,iVar5) != SBORROW4(iVar1 - iVar5,(uint)bVar11))) {
      uVar6 = 0;
      uVar8 = 0;
      goto LAB_0003982a;
    }
  }
  else {
LAB_0003982a:
    *(uint *)(in_r0 + 0x68) = uVar6;
    *(uint *)(in_r0 + 0x6c) = uVar8;
  }
  if (*(int *)(*(int *)(DAT_00039894 + 0x39834) + 0x48) != 0) {
    mm_camera_debug_log();
  }
LAB_0003987c:
  return CONCAT44(iVar3 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar7) + *(int *)(in_r0 + 0x6c)
                  + (uint)CARRY4(uVar10 + uVar7,*(uint *)(in_r0 + 0x68)),
                  uVar10 + uVar7 + *(uint *)(in_r0 + 0x68));
}

