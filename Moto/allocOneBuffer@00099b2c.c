
/* qcamera::QCamera3HeapMemory::allocOneBuffer(qcamera::QCamera3Memory::QCamera3MemInfo&, unsigned
   int, unsigned int) */

void __thiscall
qcamera::QCamera3HeapMemory::allocOneBuffer
          (QCamera3HeapMemory *this,QCamera3MemInfo *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int __fd;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint uStack48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  piVar6 = *(int **)(DAT_00099c80 + 0x99b44);
  local_20 = *piVar6;
  __fd = __open_2(DAT_00099c84 + 0x99b52,0);
  if (__fd < 0) {
    if (*(int *)(*(int *)(DAT_00099c88 + 0x99bc4) + 0x20) != 0) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      mm_camera_debug_log(1,1,DAT_00099c90 + 0x99bea,0x139,DAT_00099c8c + 0x99bde,pcVar5);
    }
  }
  else {
    local_2c = 1;
    local_28 = 0;
    local_34 = 0x1000;
    local_38 = param_3 + 0xfff & 0xfffff000;
    uStack48 = param_2;
    iVar2 = ioctl(__fd,0xc0144900,&local_38);
    uVar1 = local_38;
    if (iVar2 < 0) {
      if (*(int *)(*(int *)(DAT_00099c94 + 0x99bf4) + 0x20) != 0) {
        piVar4 = (int *)__errno();
        pcVar5 = strerror(*piVar4);
        mm_camera_debug_log(1,1,DAT_00099c9c + 0x99c1c,0x147,DAT_00099c98 + 0x99c0e,uVar1,pcVar5);
      }
    }
    else {
      local_3c = 0;
      local_40 = local_28;
      iVar2 = ioctl(__fd,0xc0084904,&local_40);
      if (-1 < iVar2) {
        *(undefined4 *)param_1 = local_3c;
        *(int *)(param_1 + 4) = __fd;
        *(undefined4 *)(param_1 + 8) = local_40;
        *(uint *)(param_1 + 0xc) = local_38;
        uVar3 = 0;
        goto LAB_00099c6a;
      }
      if (*(int *)(*(int *)(DAT_00099ca0 + 0x99c26) + 0x20) != 0) {
        piVar4 = (int *)__errno();
        pcVar5 = strerror(*piVar4);
        mm_camera_debug_log(1,1,DAT_00099ca8 + 0x99c4a,0x14f,DAT_00099ca4 + 0x99c3e,pcVar5);
      }
      local_24 = local_40;
      ioctl(__fd,0xc0044901,&local_24);
    }
    close(__fd);
  }
  uVar3 = 0xfffffff4;
LAB_00099c6a:
  if (*piVar6 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

