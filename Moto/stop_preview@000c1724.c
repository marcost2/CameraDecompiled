
/* qcamera::QCameraMuxer::stop_preview(camera_device*) */

void qcamera::QCameraMuxer::stop_preview(camera_device *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(DAT_000c183c + 0xc1732);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1844 + 0xc174e,0x2a7,DAT_000c1840 + 0xc1746);
  }
  piVar5 = *(int **)(DAT_000c1848 + 0xc1756);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar3 = 0x2a8;
    iVar6 = DAT_000c184c + 0xc1796;
    iVar1 = DAT_000c1850 + 0xc179e;
  }
  else {
    bVar7 = param_1 != (camera_device *)0x0;
    if (bVar7) {
      param_1 = *(camera_device **)(param_1 + 0x44);
    }
    if (bVar7 && param_1 != (camera_device *)0x0) {
      if (*(int *)(param_1 + 0x54) != 0) {
        uVar4 = 0;
        do {
          iVar1 = *(int *)(iVar1 + 0x2c) + *(int *)(param_1 + uVar4 * 4 + 0x5c) * 0x38;
          if (iVar1 == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar3 = 0x2af;
            iVar6 = DAT_000c1854 + 0xc180a;
            iVar1 = DAT_000c1858 + 0xc1812;
            goto LAB_000c182a;
          }
          if (*(int *)(iVar1 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return;
            }
            uVar2 = 1;
            uVar3 = 0x2b2;
            iVar6 = DAT_000c1864 + 0xc1824;
            iVar1 = DAT_000c1868 + 0xc182c;
            goto LAB_000c182a;
          }
          QCamera2HardwareInterface::stop_preview(*(camera_device **)(iVar1 + 0x34));
          iVar1 = *piVar5;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x54));
      }
      QCameraQueue::flush((QCameraQueue *)(iVar1 + 0x3c),true);
      QCameraQueue::flush((QCameraQueue *)(*piVar5 + 0x60),true);
      if (*(int *)(iVar6 + 0x28) == 0) {
        return;
      }
      uVar2 = 3;
      uVar3 = 0x2ba;
      iVar6 = DAT_000c186c + 0xc17f0;
      iVar1 = DAT_000c1870 + 0xc17f8;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return;
      }
      uVar2 = 1;
      uVar3 = 0x2ab;
      iVar6 = DAT_000c185c + 0xc177a;
      iVar1 = DAT_000c1860 + 0xc1782;
    }
  }
LAB_000c182a:
  mm_camera_debug_log(1,uVar2,iVar1,uVar3,iVar6);
  return;
}

