
/* qcamera::QCameraParameters::setBufBatchCount(signed char) */

void __thiscall qcamera::QCameraParameters::setBufBatchCount(QCameraParameters *this,signed param_1)

{
  QCameraParameters QVar1;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char acStack116 [92];
  int local_18;
  int iVar2;
  
  piVar8 = *(int **)(DAT_000e0ff4 + 0xe0efe);
  local_18 = *piVar8;
  this[0x798] = (QCameraParameters)0x0;
  property_get(DAT_000e0ffc + 0xe0f18,acStack116,*(undefined4 *)(DAT_000e0ff8 + 0xe0f0e));
  iVar2 = atoi(acStack116);
  QVar1 = SUB41(iVar2,0);
  if (((int)param_1 < 5) && (iVar2 * 0x1000000 == 0)) {
    if (*(int *)(*(int *)(DAT_000e1010 + 0xe0f2e) + 0x28) != 0) {
      iVar2 = (int)(char)this[0x798];
      uVar7 = 0x3c0d;
      iVar3 = DAT_000e1014 + 0xe0f40;
      iVar5 = DAT_000e1018 + 0xe0f4c;
LAB_000e0f4a:
      mm_camera_debug_log(1,3,iVar5,uVar7,iVar3,iVar2);
    }
    iVar2 = (int)(char)this[0x798];
LAB_000e0f52:
    pcVar4 = *(char **)(DAT_000e1028 + 0xe0f58);
  }
  else {
    uVar6 = (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3fa0);
    if ((uVar6 != 0) && ((int)uVar6 < (int)param_1)) {
      do {
        param_1 = (int)param_1 / 2;
      } while ((int)uVar6 < (int)param_1);
    }
    if (iVar2 * 0x1000000 < 1) {
      iVar2 = (int)(char)SUB41(param_1,0);
      if (iVar2 < 5) goto LAB_000e0fb6;
      this[0x798] = SUB41(param_1,0);
      if (*(int *)(*(int *)(DAT_000e101c + 0xe0fd2) + 0x28) != 0) {
        uVar7 = 0x3c20;
        iVar3 = DAT_000e1020 + 0xe0fe4;
        iVar5 = DAT_000e1024 + 0xe0fee;
        goto LAB_000e0f4a;
      }
      goto LAB_000e0f52;
    }
    this[0x798] = QVar1;
    if (*(int *)(*(int *)(DAT_000e1000 + 0xe0f86) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e1008 + 0xe0fa2,0x3c19,DAT_000e1004 + 0xe0f96,(int)(char)QVar1)
      ;
      QVar1 = this[0x798];
    }
    iVar2 = (int)(char)QVar1;
    pcVar4 = *(char **)(DAT_000e100c + 0xe0fb0);
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar4,iVar2);
LAB_000e0fb6:
  if (*piVar8 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

