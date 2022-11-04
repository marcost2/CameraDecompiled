
/* qcamera::QCameraMuxer::start_preview(camera_device*) */

int qcamera::QCameraMuxer::start_preview(camera_device *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  QCamera2HardwareInterface *this;
  int iVar4;
  undefined4 uVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  
  iVar6 = *(int *)(DAT_000c169c + 0xc1376);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c16a4 + 0xc138e,0x247,DAT_000c16a0 + 0xc1386);
  }
  piVar9 = *(int **)(DAT_000c16a8 + 0xc1396);
  if (*piVar9 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return -0x13;
    }
    uVar5 = 0x248;
    iVar6 = DAT_000c16ac + 0xc13da;
    iVar4 = DAT_000c16b0 + 0xc13e2;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      unaff_r5 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && unaff_r5 != 0) {
      if (*(int *)(unaff_r5 + 0x54) == 0) goto LAB_000c15b2;
      iVar3 = *(int *)(*piVar9 + 0x2c);
      iVar4 = *(int *)(unaff_r5 + 0x5c);
      if (iVar3 + iVar4 * 0x38 != 0) {
        iVar7 = 0x18;
        do {
          iVar3 = iVar3 + iVar4 * 0x38;
          if (*(int *)(iVar3 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return -0x13;
            }
            uVar5 = 0x254;
            iVar6 = DAT_000c16c4 + 0xc1468;
            iVar4 = DAT_000c16c8 + 0xc1470;
            goto LAB_000c13e0;
          }
          iVar4 = QCamera2HardwareInterface::prepare_preview(*(camera_device **)(iVar3 + 0x34));
          if (iVar4 != 0) {
            if (*(int *)(iVar6 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c16d0 + 0xc148e,600,DAT_000c16cc + 0xc1486);
              return iVar4;
            }
            return iVar4;
          }
          uVar2 = *(uint *)(unaff_r5 + 0x54);
          if (uVar2 <= iVar7 - 0x17U) {
            if (uVar2 < 2) goto LAB_000c1582;
            uVar8 = 0;
            goto LAB_000c149e;
          }
          iVar4 = *(int *)(unaff_r5 + iVar7 * 4);
          iVar7 = iVar7 + 1;
          iVar3 = *(int *)(*piVar9 + 0x2c);
        } while (iVar3 + iVar4 * 0x38 != 0);
      }
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x251;
      iVar6 = DAT_000c16bc + 0xc144c;
      iVar4 = DAT_000c16c0 + 0xc1454;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x24c;
      iVar6 = DAT_000c16b4 + 0xc13be;
      iVar4 = DAT_000c16b8 + 0xc13c6;
    }
  }
LAB_000c13e0:
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar6);
  return -0x13;
  while( true ) {
    iVar7 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      uVar10 = 0;
      do {
        if (uVar10 != *(byte *)(unaff_r5 + 0x59)) {
          uVar2 = *(uint *)(unaff_r5 + 100 + uVar10 * 4);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000c16e8 + 0xc1510,0x270,DAT_000c16e4 + 0xc1500,*piVar1,
                                *(undefined4 *)(iVar4 + 100),uVar2);
          }
          iVar7 = QCamera2HardwareInterface::bundleRelatedCameras(this,true,uVar2);
          if (iVar7 != 0) {
            if (*(int *)(iVar6 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c16f8 + 0xc15ec,0x273,DAT_000c16f4 + 0xc15e4);
              return iVar7;
            }
            return iVar7;
          }
          uVar2 = *(uint *)(unaff_r5 + 0x54);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
      iVar7 = *(int *)(iVar3 + 0x10);
    }
    if (iVar7 == 1) {
      uVar2 = *(uint *)(unaff_r5 + (uint)*(byte *)(unaff_r5 + 0x59) * 4 + 100);
      if (*(int *)(iVar6 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c16f0 + 0xc1562,0x27e,DAT_000c16ec + 0xc1552,*piVar1,
                            *(undefined4 *)(iVar4 + 100),uVar2);
      }
      iVar4 = QCamera2HardwareInterface::bundleRelatedCameras(this,true,uVar2);
      if (iVar4 != 0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c1700 + 0xc1696,0x281,DAT_000c16fc + 0xc168e);
          return iVar4;
        }
        return iVar4;
      }
      uVar2 = *(uint *)(unaff_r5 + 0x54);
    }
    uVar8 = uVar8 + 1;
    if (uVar2 <= uVar8) break;
LAB_000c149e:
    iVar4 = unaff_r5 + uVar8 * 4;
    piVar1 = (int *)(iVar4 + 0x5c);
    iVar3 = *(int *)(*piVar9 + 0x2c) + *piVar1 * 0x38;
    if (iVar3 == 0) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x262;
      iVar6 = DAT_000c16d4 + 0xc164e;
      iVar4 = DAT_000c16d8 + 0xc1656;
      goto LAB_000c13e0;
    }
    this = *(QCamera2HardwareInterface **)(iVar3 + 0x30);
    if (this == (QCamera2HardwareInterface *)0x0) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar5 = 0x265;
      iVar6 = DAT_000c16dc + 0xc1666;
      iVar4 = DAT_000c16e0 + 0xc166e;
      goto LAB_000c13e0;
    }
  }
  *(undefined *)(unaff_r5 + 0x58) = 1;
LAB_000c1582:
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      iVar4 = *(int *)(*piVar9 + 0x2c) + *(int *)(unaff_r5 + 0x5c + uVar2 * 4) * 0x38;
      if (iVar4 == 0) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          return -0x13;
        }
        uVar5 = 0x28d;
        iVar6 = DAT_000c1704 + 0xc1600;
        iVar4 = DAT_000c1708 + 0xc1608;
        goto LAB_000c13e0;
      }
      if (*(int *)(iVar4 + 0x30) == 0) {
        if (*(int *)(iVar6 + 0x20) == 0) {
          return -0x13;
        }
        uVar5 = 0x290;
        iVar6 = DAT_000c170c + 0xc1618;
        iVar4 = DAT_000c1710 + 0xc1620;
        goto LAB_000c13e0;
      }
      iVar4 = QCamera2HardwareInterface::start_preview(*(camera_device **)(iVar4 + 0x34));
      if (iVar4 != 0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c1718 + 0xc163a,0x293,DAT_000c1714 + 0xc1632);
          return iVar4;
        }
        return iVar4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unaff_r5 + 0x54));
  }
LAB_000c15b2:
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1720 + 0xc15ca,0x297,DAT_000c171c + 0xc15c2);
  }
  return 0;
}

