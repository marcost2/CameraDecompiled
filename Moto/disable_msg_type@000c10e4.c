
/* qcamera::QCameraMuxer::disable_msg_type(camera_device*, int) */

void qcamera::QCameraMuxer::disable_msg_type(camera_device *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar6 = *(int *)(DAT_000c11f8 + 0xc10f4);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1200 + 0xc110c,0x207,DAT_000c11fc + 0xc1104);
  }
  piVar7 = *(int **)(DAT_000c1204 + 0xc1114);
  iVar1 = *piVar7;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x208;
    iVar6 = DAT_000c1208 + 0xc1150;
    iVar1 = DAT_000c120c + 0xc1158;
  }
  else {
    bVar8 = param_1 != (camera_device *)0x0;
    if (bVar8) {
      param_1 = *(camera_device **)(param_1 + 0x44);
    }
    if (bVar8 && param_1 != (camera_device *)0x0) {
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_000c11c0:
        if (*(int *)(iVar6 + 0x28) == 0) {
          return;
        }
        uVar2 = 3;
        uVar4 = 0x214;
        iVar6 = DAT_000c1228 + 0xc11d0;
        iVar1 = DAT_000c122c + 0xc11d8;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x2c);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar3 + iVar1 * 0x38 != 0) {
          iVar5 = 0x18;
          do {
            iVar3 = iVar3 + iVar1 * 0x38;
            if (*(int *)(iVar3 + 0x30) == 0) {
              if (*(int *)(iVar6 + 0x20) == 0) {
                return;
              }
              uVar2 = 1;
              uVar4 = 0x211;
              iVar6 = DAT_000c1210 + 0xc11e8;
              iVar1 = DAT_000c1214 + 0xc11f0;
              goto LAB_000c1156;
            }
            QCamera2HardwareInterface::disable_msg_type(*(camera_device **)(iVar3 + 0x34),param_2);
            if (*(uint *)(param_1 + 0x54) <= iVar5 - 0x17U) goto LAB_000c11c0;
            iVar1 = *(int *)(param_1 + iVar5 * 4);
            iVar5 = iVar5 + 1;
            iVar3 = *(int *)(*piVar7 + 0x2c);
          } while (iVar3 + iVar1 * 0x38 != 0);
        }
        if (*(int *)(iVar6 + 0x20) == 0) {
          return;
        }
        uVar2 = 1;
        uVar4 = 0x20f;
        iVar6 = DAT_000c1220 + 0xc11b8;
        iVar1 = DAT_000c1224 + 0xc11c0;
      }
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar4 = 0x20b;
      iVar6 = DAT_000c1218 + 0xc1136;
      iVar1 = DAT_000c121c + 0xc113e;
    }
  }
LAB_000c1156:
  mm_camera_debug_log(1,uVar2,iVar1,uVar4,iVar6);
  return;
}

