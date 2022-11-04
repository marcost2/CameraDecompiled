
/* qcamera::QCameraParameters::createZoomRatioValuesString(unsigned int*, unsigned int) */

void qcamera::QCameraParameters::createZoomRatioValuesString(uint *param_1,uint param_2)

{
  int in_r3;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined auVar4 [16];
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  int local_34;
  
  piVar3 = *(int **)(DAT_000de49c + 0xde40c);
  local_34 = *piVar3;
  android::String8::String8((String8 *)param_1);
  local_58 = 0;
  uStack80 = 0;
  local_48 = 0;
  uStack64 = 0;
  if (in_r3 != 0) {
    FUN_000d6e38(&local_58,0x20,0x20,DAT_000de4a0 + 0xde43e);
    android::String8::append((char *)param_1);
    if (in_r3 != 1) {
      iVar1 = in_r3 + -1;
      auVar4 = ZEXT816(0);
      iVar2 = DAT_000de4a4 + 0xde45a;
      do {
        local_58 = SUB168(auVar4,0);
        uStack80 = SUB168(auVar4 >> 0x40,0);
        local_48 = local_58;
        uStack64 = uStack80;
        FUN_000d6e38(&local_58,0x20,0x20,iVar2);
        android::String8::append((char *)param_1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if (*piVar3 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

