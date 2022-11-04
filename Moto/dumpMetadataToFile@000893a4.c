
/* qcamera::QCamera3HardwareInterface::dumpMetadataToFile(tuning_params_t&, unsigned int&, bool,
   char const*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::dumpMetadataToFile
          (QCamera3HardwareInterface *this,tuning_params_t *param_1,uint *param_2,bool param_3,
          char *param_4,uint param_5)

{
  uint *__buf;
  uint *__buf_00;
  uint *__buf_01;
  uint *__buf_02;
  int iVar1;
  uint uVar2;
  tm *__tp;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *local_2038;
  time_t tStack8244;
  undefined auStack8240 [4096];
  char acStack4144 [4108];
  
  piVar6 = *(int **)(DAT_00089688 + 0x893ba);
  iVar1 = *piVar6;
  __buf = (uint *)(param_1 + 4);
  uVar2 = *__buf;
  if (uVar2 < 0x10001) {
    __buf_00 = (uint *)(param_1 + 8);
    uVar2 = *__buf_00;
    if (uVar2 < 0x10001) {
      __buf_01 = (uint *)(param_1 + 0xc);
      uVar2 = *__buf_01;
      if (uVar2 < 0x10001) {
        __buf_02 = (uint *)(param_1 + 0x10);
        uVar2 = *__buf_02;
        if (uVar2 < 0x10001) {
          if (param_3 != false) {
            __aeabi_memclr8(auStack8240,0x1000);
            __aeabi_memclr8(acStack4144,0x1000);
            time(&tStack8244);
            __tp = localtime(&tStack8244);
            if (__tp != (tm *)0x0) {
              strftime(acStack4144,0x1000,(char *)(DAT_000896bc + 0x894e4),__tp);
            }
            android::String8::String8((String8 *)&local_2038,acStack4144);
            FUN_00090d8c(auStack8240);
            android::String8::append((char *)&local_2038);
            iVar3 = open(local_2038,0x42,0x1ff);
            if (iVar3 < 0) {
              if (*(int *)(*(int *)(DAT_000896ec + 0x89662) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000896f4 + 0x8967a,0x1eeb,DAT_000896f0 + 0x89672,param_4
                                    ,param_5);
              }
            }
            else {
              *(undefined4 *)param_1 = 6;
              write(iVar3,param_1,4);
              iVar4 = *(int *)(DAT_000896c0 + 0x89540);
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000896c8 + 0x8955e,0x1ece,DAT_000896c4 + 0x89552,*__buf,
                                    param_5);
              }
              write(iVar3,__buf,4);
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000896d0 + 0x89588,0x1ed1,DAT_000896cc + 0x8957c,
                                    *__buf_00);
              }
              write(iVar3,__buf_00,4);
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000896d8 + 0x895b2,0x1ed4,DAT_000896d4 + 0x895a6,
                                    *__buf_01);
              }
              write(iVar3,__buf_01,4);
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000896e0 + 0x895dc,0x1ed7,DAT_000896dc + 0x895d0,
                                    *__buf_02);
              }
              write(iVar3,__buf_02,4);
              *(undefined4 *)(param_1 + 0x18) = 0;
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000896e8 + 0x8960c,0x1edb,DAT_000896e4 + 0x89600,0);
              }
              write(iVar3,param_1 + 0x18,4);
              write(iVar3,param_1 + 0x1c,*(size_t *)(param_1 + 4));
              write(iVar3,param_1 + 0x1001c,*(size_t *)(param_1 + 8));
              write(iVar3,param_1 + 0x2001c,*(size_t *)(param_1 + 0xc));
              write(iVar3,param_1 + 0x3001c,*(size_t *)(param_1 + 0x10));
              close(iVar3);
            }
            android::String8::_String8((String8 *)&local_2038);
          }
          goto LAB_00089492;
        }
        if (*(int *)(*(int *)(DAT_000896b0 + 0x89470) + 0x20) == 0) goto LAB_00089492;
        uVar5 = 0x1ead;
        iVar3 = DAT_000896b4 + 0x89482;
        iVar4 = DAT_000896b8 + 0x89490;
      }
      else {
        if (*(int *)(*(int *)(DAT_000896a4 + 0x8943e) + 0x20) == 0) goto LAB_00089492;
        uVar5 = 0x1ea6;
        iVar3 = DAT_000896a8 + 0x89450;
        iVar4 = DAT_000896ac + 0x8945e;
      }
    }
    else {
      if (*(int *)(*(int *)(DAT_00089698 + 0x8940a) + 0x20) == 0) goto LAB_00089492;
      uVar5 = 0x1e9f;
      iVar3 = DAT_0008969c + 0x8941e;
      iVar4 = DAT_000896a0 + 0x8942c;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0008968c + 0x893d4) + 0x20) == 0) goto LAB_00089492;
    uVar5 = 0x1e98;
    iVar3 = DAT_00089690 + 0x893e8;
    iVar4 = DAT_00089694 + 0x893f6;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar3,uVar2,0x10000);
LAB_00089492:
  if (*piVar6 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

