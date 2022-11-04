
/* qcamera::QCamera3HeapMemory::allocOneBuffer(qcamera::QCamera3Memory::QCamera3MemInfo&, unsigned
   int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::allocOneBuffer
          (QCamera3HeapMemory *this,QCamera3MemInfo *param_1,uint param_2,uint param_3)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint uStack48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  piVar4 = *(int **)(DAT_00053274 + 0x53132);
  local_20 = *piVar4;
  __fd = __open_2();
  if (__fd < 0) {
    if (*(int *)(*(int *)(DAT_0005327c + 0x531b8) + 0x20) != 0) {
      piVar3 = (int *)__errno();
      strerror(*piVar3);
      mm_camera_debug_log();
    }
  }
  else {
    local_2c = 1;
    local_28 = 0;
    local_34 = 0x1000;
    local_38 = param_3 + 0xfff & 0xfffff000;
    uStack48 = param_2;
    iVar1 = ioctl(__fd,0xc0144900,&local_38);
    if (iVar1 < 0) {
      if (*(int *)(*(int *)(DAT_00053288 + 0x531e8) + 0x20) != 0) {
        piVar3 = (int *)__errno();
        strerror(*piVar3);
        mm_camera_debug_log();
      }
    }
    else {
      local_3c = 0;
      local_40 = local_28;
      iVar1 = ioctl(__fd,0xc0084904,&local_40);
      if (-1 < iVar1) {
        *(undefined4 *)param_1 = local_3c;
        *(int *)(param_1 + 4) = __fd;
        *(undefined4 *)(param_1 + 8) = local_40;
        *(uint *)(param_1 + 0xc) = local_38;
        uVar2 = 0;
        goto LAB_0005325e;
      }
      if (*(int *)(*(int *)(DAT_00053294 + 0x5321a) + 0x20) != 0) {
        piVar3 = (int *)__errno();
        strerror(*piVar3);
        mm_camera_debug_log();
      }
      local_24 = local_40;
      ioctl(__fd,0xc0044901,&local_24);
    }
    close(__fd);
  }
  uVar2 = 0xfffffff4;
LAB_0005325e:
  if (*piVar4 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

