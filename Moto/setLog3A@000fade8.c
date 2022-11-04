
/* qcamera::QCameraParameters::setLog3A(char const*, char const*) */

void __thiscall
qcamera::QCameraParameters::setLog3A(QCameraParameters *this,char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined auStack120 [92];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000faeec + 0xfadfa);
  local_1c = *piVar5;
  if (param_2 == (char *)0x0) {
    iVar1 = DAT_000faf18 + 0xfae3a;
    iVar4 = DAT_000faf1c + 0xfae3c;
LAB_000fae6e:
    __android_log_print(6,iVar1,iVar4,DAT_000faf20 + 0xfae76,param_1);
    uVar3 = 0xffffffea;
  }
  else {
    iVar1 = strcmp(param_1,(char *)(DAT_000faef0 + 0xfae0a));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,(char *)(DAT_000faef4 + 0xfae16));
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,(char *)(DAT_000faef8 + 0xfae22));
        uVar2 = count_leading_zeroes(iVar1);
        uVar2 = (uVar2 >> 5) << 2;
      }
    }
    iVar1 = strcmp(param_2,*(char **)(DAT_000faefc + 0xfae4c));
    if (iVar1 == 0) {
      uVar2 = *(uint *)(this + 0xd20) | uVar2;
    }
    else {
      iVar1 = strcmp(param_2,*(char **)(DAT_000faf00 + 0xfae5a));
      if (iVar1 != 0) {
        iVar1 = DAT_000faf24 + 0xfae6e;
        iVar4 = DAT_000faf28 + 0xfae70;
        goto LAB_000fae6e;
      }
      uVar2 = *(uint *)(this + 0xd20) & ~uVar2;
    }
    *(uint *)(this + 0xd20) = uVar2;
    android::CameraParameters::set((CameraParameters *)this,param_1,param_2);
    __android_log_print(3,DAT_000faf04 + 0xfaeb2,DAT_000faf08 + 0xfaeb4,DAT_000faf0c + 0xfaeb6,
                        param_1,*(undefined4 *)(this + 0xd20));
    FUN_000d6e38(auStack120,0x5c,0x5c,DAT_000faf10 + 0xfaecc);
    property_set(DAT_000faf14 + 0xfaed6,auStack120);
    uVar3 = 0;
  }
  if (*piVar5 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

