
/* qcamera::QCameraDisplay::computeAverageVsyncInterval(long long) */

void qcamera::QCameraDisplay::computeAverageVsyncInterval(longlong param_1)

{
  bool bVar1;
  int in_r0;
  uint uVar2;
  uint in_r2;
  uint uVar3;
  int iVar4;
  int in_r3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  
  uVar7 = *(uint *)(in_r0 + 0x18);
  *(uint *)(in_r0 + 8) = in_r2;
  *(int *)(in_r0 + 0xc) = in_r3;
  uVar2 = *(uint *)(in_r0 + 0x1c);
  if ((uVar7 | uVar2) != 0) {
    iVar9 = *(int *)(in_r0 + 0x60);
    *(uint *)(in_r0 + 0x20 + iVar9 * 8) = in_r2 - uVar7;
    *(uint *)(in_r0 + 0x20 + iVar9 * 8 + 4) = (in_r3 - uVar2) - (uint)(in_r2 < uVar7);
    uVar7 = *(uint *)(in_r0 + 0x20);
    iVar9 = *(int *)(in_r0 + 0x24);
    uVar10 = *(uint *)(in_r0 + 0x60) + 1;
    uVar2 = (uint)((int)(*(int *)(in_r0 + 100) + (uint)(0xfffffffe < *(uint *)(in_r0 + 0x60))) >>
                  0x1f) >> 0x1d;
    uVar3 = uVar10 + uVar2 & 0xfffffff8;
    *(uint *)(in_r0 + 0x60) = uVar10 - uVar3;
    *(uint *)(in_r0 + 100) = -(uint)(uVar10 < uVar3) - (uint)CARRY4(uVar10,uVar2);
    iVar5 = 0;
    uVar2 = uVar7;
    iVar11 = iVar9;
    uVar3 = uVar7;
    iVar12 = iVar9;
    do {
      iVar4 = *(int *)(in_r0 + 0x28 + iVar5 + 4);
      uVar10 = *(uint *)(in_r0 + 0x28 + iVar5);
      bVar1 = (int)((iVar9 - iVar4) - (uint)(uVar7 < uVar10)) < 0 ==
              (SBORROW4(iVar9,iVar4) != SBORROW4(iVar9 - iVar4,(uint)(uVar7 < uVar10)));
      bVar13 = (int)((iVar4 - iVar12) - (uint)(uVar10 < uVar2)) < 0 !=
               (SBORROW4(iVar4,iVar12) != SBORROW4(iVar4 - iVar12,(uint)(uVar10 < uVar2)));
      iVar8 = iVar12;
      if (bVar13) {
        iVar8 = iVar4;
      }
      if (bVar1) {
        iVar12 = iVar8;
      }
      uVar6 = uVar2;
      if (bVar13) {
        uVar6 = uVar10;
      }
      if (bVar1) {
        uVar2 = uVar6;
      }
      bVar13 = CARRY4(uVar3,uVar10);
      uVar3 = uVar3 + uVar10;
      iVar11 = iVar11 + iVar4 + (uint)bVar13;
      if (!bVar1) {
        uVar7 = uVar10;
        iVar9 = iVar4;
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0x38);
    uVar14 = __aeabi_ldivmod((uVar3 - uVar7) - uVar2,
                             (((iVar11 - iVar9) - (uint)(uVar3 < uVar7)) - iVar12) -
                             (uint)(uVar3 - uVar7 < uVar2),6,0);
    *(int *)(in_r0 + 0x10) = (int)uVar14;
    *(int *)(in_r0 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  }
  *(uint *)(in_r0 + 0x18) = in_r2;
  *(int *)(in_r0 + 0x1c) = in_r3;
  return;
}

