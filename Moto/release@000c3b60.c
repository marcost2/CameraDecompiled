
/* qcamera::QCameraMuxer::release(camera_device*) */

void qcamera::QCameraMuxer::release(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = *(int *)(DAT_000c3c68 + 0xc3b6c);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c3c70 + 0xc3b84,0x666,DAT_000c3c6c + 0xc3b7c);
  }
  piVar6 = *(int **)(DAT_000c3c74 + 0xc3b8c);
  iVar1 = *piVar6;
  if (iVar1 == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x667;
    iVar5 = DAT_000c3c78 + 0xc3bc8;
    iVar1 = DAT_000c3c7c + 0xc3bd0;
  }
  else {
    bVar8 = param_1 != (camera_device *)0x0;
    if (bVar8) {
      param_1 = *(camera_device **)(param_1 + 0x44);
    }
    if (bVar8 && param_1 != (camera_device *)0x0) {
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_000c3c34:
        if (*(int *)(iVar5 + 0x28) == 0) {
          return;
        }
        uVar2 = 3;
        uVar4 = 0x675;
        iVar5 = DAT_000c3c98 + 0xc3c44;
        iVar1 = DAT_000c3c9c + 0xc3c4c;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x2c);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar3 + iVar1 * 0x38 != 0) {
          iVar7 = 0x18;
          do {
            iVar3 = iVar3 + iVar1 * 0x38;
            if (*(int *)(iVar3 + 0x30) == 0) {
              if (*(int *)(iVar5 + 0x20) == 0) {
                return;
              }
              uVar2 = 1;
              uVar4 = 0x671;
              iVar5 = DAT_000c3c80 + 0xc3c5c;
              iVar1 = DAT_000c3c84 + 0xc3c64;
              goto LAB_000c3bce;
            }
            QCamera2HardwareInterface::release(*(camera_device **)(iVar3 + 0x34));
            if (*(uint *)(param_1 + 0x54) <= iVar7 - 0x17U) goto LAB_000c3c34;
            iVar1 = *(int *)(param_1 + iVar7 * 4);
            iVar7 = iVar7 + 1;
            iVar3 = *(int *)(*piVar6 + 0x2c);
          } while (iVar3 + iVar1 * 0x38 != 0);
        }
        if (*(int *)(iVar5 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar4 = 0x66e;
        iVar5 = DAT_000c3c90 + 0xc3c2c;
        iVar1 = DAT_000c3c94 + 0xc3c34;
      }
    }
    else {
      if (*(int *)(iVar5 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar4 = 0x66a;
      iVar5 = DAT_000c3c88 + 0xc3bae;
      iVar1 = DAT_000c3c8c + 0xc3bb6;
    }
  }
LAB_000c3bce:
  mm_camera_debug_log(1,uVar2,iVar1,uVar4,iVar5);
  return;
}

