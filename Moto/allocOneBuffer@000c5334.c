
/* qcamera::QCameraMemory::allocOneBuffer(qcamera::QCameraMemory::QCameraMemInfo&, unsigned int,
   unsigned int, bool, unsigned int) */

void qcamera::QCameraMemory::allocOneBuffer
               (QCameraMemInfo *param_1,uint param_2,uint param_3,bool param_4,uint param_5)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_000c5504 + 0xc534c);
  local_24 = *piVar6;
  __fd = __open_2(DAT_000c5508 + 0xc535a,0);
  if (__fd < 0) {
    if (*(int *)(*(int *)(DAT_000c550c + 0xc544c) + 0x20) != 0) {
      piVar3 = (int *)__errno();
      pcVar4 = strerror(*piVar3);
      mm_camera_debug_log(1,1,DAT_000c5514 + 0xc5472,0x1f9,DAT_000c5510 + 0xc5466,pcVar4);
    }
  }
  else {
    local_30 = 0;
    local_3c = 0x1000;
    uVar5 = param_3 + 0xfff & 0xfffff000;
    local_34 = (uint)(param_4 != false);
    local_40 = uVar5;
    local_38 = param_2;
    if (param_5 == 1) {
      if (*(int *)(*(int *)(DAT_000c5518 + 0xc5398) + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000c5520 + 0xc53b0,0x207,DAT_000c551c + 0xc53a8);
      }
      local_38 = 0x100;
      local_34 = 0x80000000;
      local_3c = 0x100000;
      local_40 = uVar5 + 0xfffff & 0xfff00000;
    }
    iVar1 = ioctl(__fd,0xc0144900,&local_40);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_000c5524 + 0xc547c) + 0x20) != 0) {
        piVar3 = (int *)__errno();
        pcVar4 = strerror(*piVar3);
        mm_camera_debug_log(1,1,DAT_000c552c + 0xc54a0,0x210,DAT_000c5528 + 0xc5494,pcVar4);
      }
    }
    else {
      local_44 = 0;
      local_48 = local_30;
      iVar1 = ioctl(__fd,0xc0084904,&local_48);
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0x14) = param_2;
        param_1[0x10] = (QCameraMemInfo)param_4;
        *(undefined4 *)param_1 = local_44;
        *(int *)(param_1 + 4) = __fd;
        *(undefined4 *)(param_1 + 8) = local_48;
        *(uint *)(param_1 + 0xc) = local_40;
        if (*(int *)(*(int *)(DAT_000c553c + 0xc5424) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000c5544 + 0xc5440,0x224,DAT_000c5540 + 0xc5432,local_48,
                              local_40);
        }
        uVar2 = 0;
        goto LAB_000c54ee;
      }
      if (*(int *)(*(int *)(DAT_000c5530 + 0xc54aa) + 0x20) != 0) {
        piVar3 = (int *)__errno();
        pcVar4 = strerror(*piVar3);
        mm_camera_debug_log(1,1,DAT_000c5538 + 0xc54ce,0x218,DAT_000c5534 + 0xc54c2,pcVar4);
      }
      local_28 = local_48;
      ioctl(__fd,0xc0044901,&local_28);
    }
    close(__fd);
  }
  uVar2 = 0xfffffff4;
LAB_000c54ee:
  if (*piVar6 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

