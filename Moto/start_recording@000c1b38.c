
/* qcamera::QCameraMuxer::start_recording(camera_device*) */

int qcamera::QCameraMuxer::start_recording(camera_device *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int unaff_r7;
  int iVar11;
  
  iVar11 = *(int *)(DAT_000c1eb0 + 0xc1b46);
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1eb8 + 0xc1b62,0x313,DAT_000c1eb4 + 0xc1b5a);
  }
  piVar10 = *(int **)(DAT_000c1ebc + 0xc1b6a);
  if (*piVar10 == 0) {
    if (*(int *)(iVar11 + 0x20) == 0) {
      return -0x13;
    }
    uVar6 = 0x314;
    iVar11 = DAT_000c1ec8 + 0xc1ba6;
    iVar3 = DAT_000c1ecc + 0xc1bae;
    goto LAB_000c1bac;
  }
  if (param_1 != (camera_device *)0x0) {
    unaff_r7 = *(int *)(param_1 + 0x44);
  }
  if (param_1 == (camera_device *)0x0 || unaff_r7 == 0) {
    if (*(int *)(iVar11 + 0x20) == 0) {
      return -0x13;
    }
    uVar6 = 0x319;
    iVar11 = DAT_000c1ec0 + 0xc1b8c;
    iVar3 = DAT_000c1ec4 + 0xc1b94;
    goto LAB_000c1bac;
  }
  if (*(int *)(unaff_r7 + 0x54) != 0) {
    iVar2 = *(int *)(*piVar10 + 0x2c);
    iVar3 = *(int *)(unaff_r7 + 0x5c);
    if (iVar2 + iVar3 * 0x38 != 0) {
      iVar8 = 0x18;
      do {
        iVar2 = iVar2 + iVar3 * 0x38;
        if (*(int *)(iVar2 + 0x30) == 0) {
          if (*(int *)(iVar11 + 0x20) == 0) {
            return -0x13;
          }
          uVar6 = 0x324;
          iVar11 = DAT_000c1f74 + 0xc1c38;
          iVar3 = DAT_000c1f78 + 0xc1c40;
          goto LAB_000c1bac;
        }
        iVar3 = QCamera2HardwareInterface::pre_start_recording(*(camera_device **)(iVar2 + 0x34));
        if (iVar3 != 0) {
          if (*(int *)(iVar11 + 0x20) == 0) {
            return iVar3;
          }
          uVar6 = 1;
          uVar7 = 0x328;
          iVar11 = DAT_000c1f7c + 0xc1c56;
          puVar5 = (undefined *)(DAT_000c1f80 + 0xc1c5e);
          goto LAB_000c1e8c;
        }
        uVar1 = *(uint *)(unaff_r7 + 0x54);
        if (uVar1 <= iVar8 - 0x17U) {
          if (uVar1 == 0) goto LAB_000c1e6e;
          iVar2 = unaff_r7 + 0x5c;
          uVar4 = 0;
          iVar3 = *(int *)(*piVar10 + 0x2c);
          goto LAB_000c1c72;
        }
        iVar3 = *(int *)(unaff_r7 + iVar8 * 4);
        iVar8 = iVar8 + 1;
        iVar2 = *(int *)(*piVar10 + 0x2c);
      } while (iVar2 + iVar3 * 0x38 != 0);
    }
    if (*(int *)(iVar11 + 0x20) == 0) {
      return -0x13;
    }
    uVar6 = 0x321;
    iVar11 = DAT_000c1f6c + 0xc1c1c;
    iVar3 = DAT_000c1f70 + 0xc1c24;
    goto LAB_000c1bac;
  }
  goto LAB_000c1e6e;
  while( true ) {
    if (*(char *)(iVar8 + 0x1be8) != '\0') {
      iVar8 = *(int *)(unaff_r7 + 0x5c);
      if (iVar3 + iVar8 * 0x38 == 0) goto LAB_000c1d3c;
      iVar9 = 0x18;
      goto LAB_000c1d04;
    }
    uVar4 = uVar4 + 1;
    if (uVar1 <= uVar4) break;
LAB_000c1c72:
    iVar8 = iVar3 + *(int *)(iVar2 + uVar4 * 4) * 0x38;
    if (iVar8 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x330;
      iVar11 = DAT_000c1f84 + 0xc1cd0;
      iVar3 = DAT_000c1f88 + 0xc1cd8;
      goto LAB_000c1bac;
    }
    iVar8 = *(int *)(iVar8 + 0x30);
    if (iVar8 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x333;
      iVar11 = DAT_000c1f8c + 0xc1cee;
      iVar3 = DAT_000c1f90 + 0xc1cf6;
      goto LAB_000c1bac;
    }
  }
LAB_000c1c8e:
  uVar4 = 0;
  iVar3 = 0;
  do {
    iVar8 = *(int *)(*piVar10 + 0x2c) + *(int *)(iVar2 + uVar4 * 4) * 0x38;
    if (iVar8 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x36d;
      iVar11 = DAT_000c1fdc + 0xc1d70;
      iVar3 = DAT_000c1fe0 + 0xc1d78;
      goto LAB_000c1bac;
    }
    if (*(int *)(iVar8 + 0x30) == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x370;
      iVar11 = DAT_000c1fe4 + 0xc1d8e;
      iVar3 = DAT_000c1fe8 + 0xc1d96;
      goto LAB_000c1bac;
    }
    if (*(int *)(iVar8 + 0x10) == 0) {
      iVar3 = QCamera2HardwareInterface::start_recording(*(camera_device **)(iVar8 + 0x34));
      if ((iVar3 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000c1ff0 + 0xc1dbe,0x375,DAT_000c1fec + 0xc1db6);
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < uVar1);
  goto LAB_000c1e70;
  while( true ) {
    if (*(uint *)(unaff_r7 + 0x54) <= iVar9 - 0x17U) {
      if (*(uint *)(unaff_r7 + 0x54) == 0) goto LAB_000c1e6e;
      iVar3 = *piVar10;
      uVar1 = 0;
      goto LAB_000c1e0a;
    }
    iVar8 = *(int *)(unaff_r7 + iVar9 * 4);
    iVar9 = iVar9 + 1;
    iVar3 = *(int *)(*piVar10 + 0x2c);
    if (iVar3 + iVar8 * 0x38 == 0) break;
LAB_000c1d04:
    iVar3 = iVar3 + iVar8 * 0x38;
    if (*(int *)(iVar3 + 0x30) == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x342;
      iVar11 = DAT_000c1f9c + 0xc1dd8;
      iVar3 = DAT_000c1fa0 + 0xc1de0;
      goto LAB_000c1bac;
    }
    iVar3 = QCamera2HardwareInterface::restart_stop_preview(*(camera_device **)(iVar3 + 0x34));
    if (iVar3 != 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return iVar3;
      }
      uVar6 = 1;
      uVar7 = 0x346;
      iVar11 = DAT_000c1fa4 + 0xc1df8;
      puVar5 = (undefined *)(DAT_000c1fa8 + 0xc1e00);
      goto LAB_000c1e8c;
    }
  }
LAB_000c1d3c:
  if (*(int *)(iVar11 + 0x20) == 0) {
    return -0x13;
  }
  uVar6 = 0x33f;
  iVar11 = DAT_000c1f94 + 0xc1d52;
  iVar3 = DAT_000c1f98 + 0xc1d5a;
LAB_000c1bac:
  mm_camera_debug_log(1,1,iVar3,uVar6,iVar11);
  return -0x13;
  while( true ) {
    iVar3 = QCamera2HardwareInterface::setRecordingHintValue(iVar3);
    if (iVar3 != 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return iVar3;
      }
      uVar6 = 1;
      uVar7 = 0x355;
      iVar11 = DAT_000c1fbc + 0xc1f06;
      puVar5 = (undefined *)(DAT_000c1fc0 + 0xc1f0e);
      goto LAB_000c1e8c;
    }
    iVar3 = *piVar10;
    uVar1 = uVar1 + 1;
    *(undefined *)(iVar3 + 0xd7) = 1;
    if (*(uint *)(unaff_r7 + 0x54) <= uVar1) break;
LAB_000c1e0a:
    iVar3 = *(int *)(iVar3 + 0x2c) + *(int *)(iVar2 + uVar1 * 4) * 0x38;
    if (iVar3 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x34e;
      iVar11 = DAT_000c1fac + 0xc1ea8;
      iVar3 = (int)&DAT_000c1eb0 + DAT_000c1fb0;
      goto LAB_000c1bac;
    }
    iVar3 = *(int *)(iVar3 + 0x30);
    if (iVar3 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) {
        return -0x13;
      }
      uVar6 = 0x351;
      iVar11 = DAT_000c1fb4 + 0xc1ee6;
      iVar3 = DAT_000c1fb8 + 0xc1eee;
      goto LAB_000c1bac;
    }
  }
  if (*(uint *)(unaff_r7 + 0x54) != 0) {
    uVar4 = 0;
    do {
      iVar3 = *(int *)(*piVar10 + 0x2c) + *(int *)(iVar2 + uVar4 * 4) * 0x38;
      if (iVar3 == 0) {
        if (*(int *)(iVar11 + 0x20) == 0) {
          return -0x13;
        }
        uVar6 = 0x35e;
        iVar11 = DAT_000c1fc4 + 0xc1f24;
        iVar3 = DAT_000c1fc8 + 0xc1f2c;
        goto LAB_000c1bac;
      }
      if (*(int *)(iVar3 + 0x30) == 0) {
        if (*(int *)(iVar11 + 0x20) == 0) {
          return -0x13;
        }
        uVar6 = 0x361;
        iVar11 = DAT_000c1fcc + 0xc1f42;
        iVar3 = DAT_000c1fd0 + 0xc1f4a;
        goto LAB_000c1bac;
      }
      iVar3 = QCamera2HardwareInterface::restart_start_preview(*(camera_device **)(iVar3 + 0x34));
      if (iVar3 != 0) {
        if (*(int *)(iVar11 + 0x20) == 0) {
          return iVar3;
        }
        uVar6 = 1;
        uVar7 = 0x365;
        iVar11 = DAT_000c1fd4 + 0xc1f62;
        puVar5 = &UNK_000c1f6a + DAT_000c1fd8;
        goto LAB_000c1e8c;
      }
      uVar1 = *(uint *)(unaff_r7 + 0x54);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    if (uVar1 != 0) goto LAB_000c1c8e;
  }
LAB_000c1e6e:
  iVar3 = 0;
LAB_000c1e70:
  if (*(int *)(iVar11 + 0x28) == 0) {
    return iVar3;
  }
  uVar6 = 3;
  uVar7 = 0x37a;
  iVar11 = DAT_000c1ff4 + 0xc1e86;
  puVar5 = (undefined *)(DAT_000c1ff8 + 0xc1e8e);
LAB_000c1e8c:
  mm_camera_debug_log(1,uVar6,puVar5,uVar7,iVar11);
  return iVar3;
}

