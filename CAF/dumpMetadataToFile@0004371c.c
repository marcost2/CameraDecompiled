
/* qcamera::QCamera3HardwareInterface::dumpMetadataToFile(tuning_params_t&, unsigned int&, bool,
   char const*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::dumpMetadataToFile
          (QCamera3HardwareInterface *this,tuning_params_t *param_1,uint *param_2,bool param_3,
          char *param_4,uint param_5)

{
  tm *__tp;
  char *pcVar1;
  int iVar2;
  uint extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  int iVar3;
  int *piVar4;
  String8 aSStack8240 [4];
  time_t tStack8236;
  CameraMetadata aCStack8232 [4096];
  char acStack4136 [4096];
  int local_28;
  
  piVar4 = *(int **)(DAT_00043a18 + 0x4372c);
  local_28 = *piVar4;
  if (*(uint *)(param_1 + 4) < 0x10001) {
    if (*(uint *)(param_1 + 8) < 0x10001) {
      if (*(uint *)(param_1 + 0xc) < 0x10001) {
        if (*(uint *)(param_1 + 0x10) < 0x10001) {
          if (param_3 != false) {
            __aeabi_memclr4(aCStack8232,0x1000);
            __aeabi_memclr4(acStack4136,0x1000);
            time(&tStack8236);
            __tp = localtime(&tStack8236);
            if (__tp != (tm *)0x0) {
              param_2 = (uint *)(DAT_00043a4c + 0x43868);
              strftime(acStack4136,0x1000,(char *)param_2,__tp);
            }
            android::String8::String8(aSStack8240,acStack4136);
            snprintf((char *)aCStack8232,extraout_r1,(char *)param_2);
            android::String8::append(aSStack8240,aCStack8232);
            pcVar1 = (char *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::getNode((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                        *)aSStack8240);
            iVar2 = open(pcVar1,0x42,0x1ff);
            if (iVar2 < 0) {
              pcVar1 = extraout_r1_00;
              if (*(int *)(*(int *)(DAT_00043a7c + 0x439f0) + 0x20) != 0) {
                mm_camera_debug_log();
                pcVar1 = extraout_r1_02;
              }
            }
            else {
              *(undefined4 *)param_1 = 6;
              write(iVar2,param_1,4);
              iVar3 = *(int *)(DAT_00043a50 + 0x438d4);
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              write(iVar2,param_1 + 4,4);
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              write(iVar2,param_1 + 8,4);
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              write(iVar2,param_1 + 0xc,4);
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              write(iVar2,param_1 + 0x10,4);
              *(undefined4 *)(param_1 + 0x18) = 0;
              if (*(int *)(iVar3 + 0x2c) != 0) {
                mm_camera_debug_log();
              }
              write(iVar2,param_1 + 0x18,4);
              write(iVar2,param_1 + 0x1c,*(size_t *)(param_1 + 4));
              write(iVar2,param_1 + 0x1001c,*(size_t *)(param_1 + 8));
              write(iVar2,param_1 + 0x2001c,*(size_t *)(param_1 + 0xc));
              write(iVar2,param_1 + 0x3001c,*(size_t *)(param_1 + 0x10));
              close(iVar2);
              pcVar1 = extraout_r1_01;
            }
            android::String8::_String8(aSStack8240,pcVar1);
          }
          goto LAB_0004380a;
        }
        iVar2 = *(int *)(*(int *)(DAT_00043a40 + 0x437e8) + 0x20);
      }
      else {
        iVar2 = *(int *)(*(int *)(DAT_00043a34 + 0x437b6) + 0x20);
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_00043a28 + 0x43782) + 0x20);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_00043a1c + 0x4374c) + 0x20);
  }
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
LAB_0004380a:
  if (*piVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

