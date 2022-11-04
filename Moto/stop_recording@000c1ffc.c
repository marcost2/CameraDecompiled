
/* qcamera::QCameraMuxer::stop_recording(camera_device*) */

void qcamera::QCameraMuxer::stop_recording(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar5 = *(int *)(DAT_000c22c8 + 0xc200a);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c22d0 + 0xc2022,0x38c,DAT_000c22cc + 0xc201a);
  }
  piVar9 = *(int **)(DAT_000c22d4 + 0xc202a);
  iVar1 = *piVar9;
  if (iVar1 == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar3 = 0x38e;
    iVar5 = DAT_000c22d8 + 0xc209c;
    iVar1 = DAT_000c22dc + 0xc20a4;
    goto LAB_000c2226;
  }
  if ((param_1 == (camera_device *)0x0) || (iVar8 = *(int *)(param_1 + 0x44), iVar8 == 0)) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar3 = 0x391;
    iVar5 = DAT_000c22e0 + 0xc2080;
    iVar1 = DAT_000c22e4 + 0xc2088;
    goto LAB_000c2226;
  }
  if (*(uint *)(iVar8 + 0x54) != 0) {
    uVar6 = 0;
    do {
      iVar4 = *(int *)(iVar1 + 0x2c) + *(int *)(iVar8 + 0x5c + uVar6 * 4) * 0x38;
      if (iVar4 == 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar3 = 0x395;
        iVar5 = DAT_000c22e8 + 0xc20b8;
        iVar1 = DAT_000c22ec + 0xc20c0;
        goto LAB_000c2226;
      }
      if (*(int *)(iVar4 + 0x30) == 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar3 = 0x398;
        iVar5 = DAT_000c22f0 + 0xc20d4;
        iVar1 = DAT_000c22f4 + 0xc20dc;
        goto LAB_000c2226;
      }
      if (*(int *)(iVar4 + 0x10) == 0) {
        QCamera2HardwareInterface::stop_recording(*(camera_device **)(iVar4 + 0x34));
        iVar1 = *piVar9;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar8 + 0x54));
  }
  if ((*(char *)(iVar1 + 0xd7) != '\0') && (*(int *)(iVar8 + 0x54) != 0)) {
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = *(int *)(iVar8 + 0x5c);
    if (iVar4 + iVar1 * 0x38 != 0) {
      iVar7 = 0x18;
      do {
        iVar4 = iVar4 + iVar1 * 0x38;
        if (*(int *)(iVar4 + 0x30) == 0) {
          if (*(int *)(iVar5 + 0x20) == 0) {
            return;
          }
          uVar2 = 1;
          uVar3 = 0x3aa;
          iVar5 = DAT_000c22f8 + 0xc2174;
          iVar1 = DAT_000c22fc + 0xc217c;
          goto LAB_000c2226;
        }
        iVar1 = QCamera2HardwareInterface::restart_stop_preview(*(camera_device **)(iVar4 + 0x34));
        if (iVar1 != 0) {
          if (*(int *)(iVar5 + 0x20) == 0) {
            return;
          }
          uVar2 = 1;
          uVar3 = 0x3ae;
          iVar5 = DAT_000c2308 + 0xc2190;
          iVar1 = DAT_000c230c + 0xc2198;
          goto LAB_000c2226;
        }
        if (*(uint *)(iVar8 + 0x54) <= iVar7 - 0x17U) {
          if (*(uint *)(iVar8 + 0x54) == 0) goto LAB_000c220e;
          iVar1 = *piVar9;
          uVar6 = 0;
          goto LAB_000c21a8;
        }
        iVar1 = *(int *)(iVar8 + iVar7 * 4);
        iVar7 = iVar7 + 1;
        iVar4 = *(int *)(*piVar9 + 0x2c);
      } while (iVar4 + iVar1 * 0x38 != 0);
    }
    if (*(int *)(iVar5 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar3 = 0x3a7;
    iVar5 = DAT_000c2300 + 0xc2158;
    iVar1 = DAT_000c2304 + 0xc2160;
    goto LAB_000c2226;
  }
  goto LAB_000c220e;
  while( true ) {
    iVar1 = QCamera2HardwareInterface::setRecordingHintValue(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(iVar5 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar3 = 0x3bd;
      iVar5 = DAT_000c2320 + 0xc2272;
      iVar1 = DAT_000c2324 + 0xc227a;
      goto LAB_000c2226;
    }
    iVar1 = *piVar9;
    uVar6 = uVar6 + 1;
    *(undefined *)(iVar1 + 0xd7) = 0;
    if (*(uint *)(iVar8 + 0x54) <= uVar6) break;
LAB_000c21a8:
    iVar1 = *(int *)(iVar1 + 0x2c) + *(int *)(iVar8 + 0x5c + uVar6 * 4) * 0x38;
    if (iVar1 == 0) {
      if (*(int *)(iVar5 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar3 = 0x3b6;
      iVar5 = DAT_000c2310 + 0xc2242;
      iVar1 = DAT_000c2314 + 0xc224a;
      goto LAB_000c2226;
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      if (*(int *)(iVar5 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar3 = 0x3b9;
      iVar5 = DAT_000c2318 + 0xc225a;
      iVar1 = DAT_000c231c + 0xc2262;
      goto LAB_000c2226;
    }
  }
  if (*(uint *)(iVar8 + 0x54) != 0) {
    uVar6 = 0;
    do {
      iVar1 = *(int *)(*piVar9 + 0x2c) + *(int *)(iVar8 + 0x5c + uVar6 * 4) * 0x38;
      if (iVar1 == 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar3 = 0x3c6;
        iVar5 = DAT_000c2328 + 0xc228a;
        iVar1 = DAT_000c232c + 0xc2292;
        goto LAB_000c2226;
      }
      if (*(int *)(iVar1 + 0x30) == 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar3 = 0x3c9;
        iVar5 = DAT_000c2330 + 0xc22a2;
        iVar1 = DAT_000c2334 + 0xc22aa;
        goto LAB_000c2226;
      }
      iVar1 = QCamera2HardwareInterface::restart_start_preview(*(camera_device **)(iVar1 + 0x34));
      if (iVar1 != 0) {
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar3 = 0x3cd;
        iVar5 = DAT_000c2338 + 0xc22ba;
        iVar1 = DAT_000c233c + 0xc22c2;
        goto LAB_000c2226;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar8 + 0x54));
  }
LAB_000c220e:
  if (*(int *)(iVar5 + 0x28) == 0) {
    return;
  }
  uVar2 = 3;
  uVar3 = 0x3d2;
  iVar5 = DAT_000c2340 + 0xc2220;
  iVar1 = DAT_000c2344 + 0xc2228;
LAB_000c2226:
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar5);
  return;
}

