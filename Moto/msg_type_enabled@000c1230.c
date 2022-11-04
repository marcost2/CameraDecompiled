
/* qcamera::QCameraMuxer::msg_type_enabled(camera_device*, int) */

undefined4 qcamera::QCameraMuxer::msg_type_enabled(camera_device *param_1,int param_2)

{
  int extraout_r1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000c1330 + 0xc123e);
  iVar1 = param_2;
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1338 + 0xc1256,0x224,DAT_000c1334 + 0xc124e);
    iVar1 = extraout_r1;
  }
  if (**(int **)(DAT_000c133c + 0xc125e) == 0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x225;
    iVar1 = DAT_000c1340 + 0xc1296;
    iVar5 = DAT_000c1344 + 0xc129e;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x54) != 0) {
        uVar3 = 0;
        do {
          iVar4 = *(int *)(**(int **)(DAT_000c133c + 0xc125e) + 0x2c) +
                  *(int *)(iVar1 + 0x5c + uVar3 * 4) * 0x38;
          if (iVar4 == 0) {
            if (*(int *)(iVar5 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x22c;
            iVar1 = DAT_000c1350 + 0xc1300;
            iVar5 = DAT_000c1354 + 0xc1308;
            goto LAB_000c129c;
          }
          if (*(int *)(iVar4 + 0x30) == 0) {
            if (*(int *)(iVar5 + 0x20) == 0) {
              return 0xffffffed;
            }
            uVar2 = 0x22f;
            iVar1 = DAT_000c1358 + 0xc131a;
            iVar5 = DAT_000c135c + 0xc1322;
            goto LAB_000c129c;
          }
          if (*(int *)(iVar4 + 0x10) == 0) {
            uVar2 = (*(code *)PTR_msg_type_enabled_00119f48)(*(undefined4 *)(iVar4 + 0x34),param_2);
            return uVar2;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar1 + 0x54));
      }
      if (*(int *)(iVar5 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c1364 + 0xc12e6,0x235,DAT_000c1360 + 0xc12de);
      }
      return 0;
    }
    if (*(int *)(iVar5 + 0x20) == 0) {
      return 0xffffffed;
    }
    uVar2 = 0x228;
    iVar1 = DAT_000c1348 + 0xc127e;
    iVar5 = DAT_000c134c + 0xc1286;
  }
LAB_000c129c:
  mm_camera_debug_log(1,1,iVar5,uVar2,iVar1);
  return 0xffffffed;
}

