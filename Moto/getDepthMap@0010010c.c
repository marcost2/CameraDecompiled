
/* BokehImpl::getDepthMap(unsigned char*, unsigned int*) */

void __thiscall BokehImpl::getDepthMap(BokehImpl *this,uchar *param_1,uint *param_2)

{
  int iVar1;
  void *__src;
  size_t __n;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uchar *__dest;
  BSTRefocusParam *this_00;
  int *piVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int iStack88;
  int local_24;
  
  piVar5 = *(int **)(DAT_001002a8 + 0x100120);
  local_24 = *piVar5;
  iVar1 = dbe2GetDisparityData(*(undefined4 *)(this + 8),&local_68,0);
  if (iVar1 == 0) {
    this_00 = (BSTRefocusParam *)(this + 0x41c);
    BSTRefocusParam::flatten(this_00);
    __src = (void *)BSTRefocusParam::getPtr(this_00);
    __n = BSTRefocusParam::length(this_00);
    __aeabi_memcpy8(param_1,__src,__n);
    iVar1 = BSTRefocusParam::length(this_00);
    __dest = param_1 + iVar1;
    __aeabi_memcpy8(__dest,&local_68,0x44);
    iVar1 = dbe2GetDisparityData(*(undefined4 *)(this + 8),&local_68,__dest + 0x44);
    if (iVar1 == 0) {
      *param_2 = (uint)(__dest + 0x44 + (local_5c * iStack88 * 2 - (int)param_1));
      iVar1 = *(int *)(DAT_001002cc + 0x1001fc);
      if (*(int *)(iVar1 + 0x2c) != 0) {
        iVar3 = DAT_001002d0 + 0x100210;
        iVar2 = DAT_001002d4 + 0x100214;
        mm_camera_debug_log(1,4,iVar3,0x176,DAT_001002d8 + 0x100212,iVar2,iVar3,local_5c,iStack88);
        if (*(int *)(iVar1 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,iVar3,0x177,DAT_001002dc + 0x100236,iVar2,iVar3,local_68,iStack88)
          ;
          if (*(int *)(iVar1 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,iVar3,0x178,DAT_001002e0 + 0x100254,iVar2,iVar3,local_64,
                                iStack88);
            if (*(int *)(iVar1 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,iVar3,0x179,DAT_001002e4 + 0x100272,iVar2,iVar3,local_60,
                                  iStack88);
              if (*(int *)(iVar1 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,iVar3,0x17a,DAT_001002e8 + 0x100292,iVar2,iVar3,*param_2,
                                    iStack88);
              }
            }
          }
        }
      }
      uVar4 = 0;
      goto LAB_001001d4;
    }
    if (*(int *)(*(int *)(DAT_001002bc + 0x1001a8) + 0x20) != 0) {
      uVar4 = 0x171;
      iVar3 = DAT_001002c0 + 0x1001ba;
      iVar1 = DAT_001002c4 + 0x1001bc;
      iVar2 = DAT_001002c8 + 0x1001be;
      goto LAB_001001c6;
    }
  }
  else if (*(int *)(*(int *)(DAT_001002ac + 0x100138) + 0x20) != 0) {
    uVar4 = 0x165;
    iVar1 = DAT_001002b4 + 0x10014c;
    iVar2 = DAT_001002b8 + 0x10014e;
    iVar3 = DAT_001002b0 + 0x100150;
LAB_001001c6:
    mm_camera_debug_log(1,1,iVar3,uVar4,iVar2,iVar1,iVar3);
  }
  *param_2 = 0;
  uVar4 = 0xffffffff;
LAB_001001d4:
  if (*piVar5 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

