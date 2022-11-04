
/* qcamera::QCameraMuxer::store_meta_data_in_buffers(camera_device*, int) */

int qcamera::QCameraMuxer::store_meta_data_in_buffers(camera_device *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_000c1af8 + 0xc19bc);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c1b00 + 0xc19d8,0x2ed,DAT_000c1afc + 0xc19d0);
  }
  piVar5 = *(int **)(DAT_000c1b04 + 0xc19e0);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return -0x13;
    }
    uVar3 = 0x2ee;
    iVar6 = DAT_000c1b08 + 0xc1a1c;
    iVar1 = DAT_000c1b0c + 0xc1a24;
  }
  else {
    if (param_1 != (camera_device *)0x0) {
      unaff_r4 = *(int *)(param_1 + 0x44);
    }
    if (param_1 != (camera_device *)0x0 && unaff_r4 != 0) {
      if (*(int *)(unaff_r4 + 0x54) == 0) {
LAB_000c1a98:
        if (*(int *)(iVar6 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c1b34 + 0xc1ab2,0x301,DAT_000c1b30 + 0xc1aaa);
        }
        return 0;
      }
      iVar2 = *(int *)(iVar1 + 0x2c);
      iVar1 = *(int *)(unaff_r4 + 0x5c);
      if (iVar2 + iVar1 * 0x38 != 0) {
        iVar4 = 0x18;
        do {
          iVar2 = iVar2 + iVar1 * 0x38;
          if (*(int *)(iVar2 + 0x30) == 0) {
            if (*(int *)(iVar6 + 0x20) == 0) {
              return -0x13;
            }
            uVar3 = 0x2f9;
            iVar6 = DAT_000c1b20 + 0xc1acc;
            iVar1 = DAT_000c1b24 + 0xc1ad4;
            goto LAB_000c1a22;
          }
          iVar1 = QCamera2HardwareInterface::store_meta_data_in_buffers
                            (*(camera_device **)(iVar2 + 0x34),param_2);
          if (iVar1 != 0) {
            if (*(int *)(iVar6 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000c1b2c + 0xc1af2,0x2fd,DAT_000c1b28 + 0xc1aea);
              return iVar1;
            }
            return iVar1;
          }
          if (*(uint *)(unaff_r4 + 0x54) <= iVar4 - 0x17U) goto LAB_000c1a98;
          iVar1 = *(int *)(unaff_r4 + iVar4 * 4);
          iVar4 = iVar4 + 1;
          iVar2 = *(int *)(*piVar5 + 0x2c);
        } while (iVar2 + iVar1 * 0x38 != 0);
      }
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar3 = 0x2f6;
      iVar6 = DAT_000c1b18 + 0xc1a90;
      iVar1 = DAT_000c1b1c + 0xc1a98;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return -0x13;
      }
      uVar3 = 0x2f2;
      iVar6 = DAT_000c1b10 + 0xc1a02;
      iVar1 = DAT_000c1b14 + 0xc1a0a;
    }
  }
LAB_000c1a22:
  mm_camera_debug_log(1,1,iVar1,uVar3,iVar6);
  return -0x13;
}

