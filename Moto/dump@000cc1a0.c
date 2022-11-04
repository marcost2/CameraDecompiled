
/* qcamera::QCameraStateMachine::dump() */

void qcamera::QCameraStateMachine::dump(void)

{
  String8 *in_r0;
  int in_r1;
  int extraout_r1;
  int iVar1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 in_r2;
  int *piVar2;
  undefined auStack152 [128];
  int local_18;
  
  piVar2 = *(int **)(DAT_000cc2b0 + 0xcc1ae);
  local_18 = *piVar2;
  android::String8::String8(in_r0,(char *)(DAT_000cc2b4 + 0xcc1ba));
  iVar1 = extraout_r1;
  if (*(int *)(in_r1 + 8) - 1U < 7) {
    iVar1 = DAT_000cc2b8 + 0xcc1ca;
  }
  FUN_000cc2f0(auStack152,iVar1,in_r2,DAT_000cc2bc + 0xcc1dc);
  android::String8::append((char *)in_r0);
  iVar1 = extraout_r1_00;
  if (*(int *)(in_r1 + 8) - 4U < 4) {
    iVar1 = DAT_000cc2c0 + 0xcc1f4;
  }
  FUN_000cc2f0(auStack152,iVar1,in_r2,DAT_000cc2c4 + 0xcc206);
  android::String8::append((char *)in_r0);
  count_leading_zeroes(*(int *)(in_r1 + 8) + -4);
  FUN_000cc2f0(auStack152,extraout_r1_01,in_r2,DAT_000cc2c8 + 0xcc224);
  android::String8::append((char *)in_r0);
  FUN_000cc2f0(auStack152,extraout_r1_02,in_r2,DAT_000cc2cc + 0xcc23a);
  android::String8::append((char *)in_r0);
  switch(*(undefined4 *)(in_r1 + 8)) {
  case 0:
    iVar1 = DAT_000cc2d0 + 0xcc25e;
    break;
  case 1:
    iVar1 = DAT_000cc2d4 + 0xcc266;
    break;
  case 2:
    iVar1 = DAT_000cc2d8 + 0xcc26e;
    break;
  case 3:
    iVar1 = DAT_000cc2dc + 0xcc276;
    break;
  case 4:
    iVar1 = DAT_000cc2e0 + 0xcc27e;
    break;
  case 5:
    iVar1 = DAT_000cc2e4 + 0xcc286;
    break;
  case 6:
    iVar1 = DAT_000cc2e8 + 0xcc28e;
    break;
  case 7:
    iVar1 = DAT_000cc2ec + 0xcc296;
    break;
  default:
    goto switchD_000cc24a_caseD_8;
  }
  FUN_000cc2f0(auStack152,extraout_r1_03,in_r2,iVar1);
switchD_000cc24a_caseD_8:
  android::String8::append((char *)in_r0);
  if (*piVar2 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

