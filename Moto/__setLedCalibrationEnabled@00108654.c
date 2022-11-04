
/* qcamera::MotCameraFactory::__setLedCalibrationEnabled(unsigned char) */

void __thiscall
qcamera::MotCameraFactory::__setLedCalibrationEnabled(MotCameraFactory *this,uchar param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uchar local_24 [4];
  undefined4 local_20;
  undefined4 uStack28;
  undefined4 uStack24;
  int local_14;
  
  piVar4 = *(int **)(DAT_001086e4 + 0x108662);
  local_14 = *piVar4;
  __android_log_print(4,DAT_001086e8 + 0x108672,DAT_001086ec + 0x108674,DAT_001086f0 + 0x108676);
  uStack28 = *(undefined4 *)(this + 4);
  uStack24 = *(undefined4 *)(this + 8);
  local_20 = *(undefined4 *)
              (*(int *)(*(int *)(DAT_001086f4 + 0x108686) + *(int *)(*(int *)this + 0x60) * 4) + 4);
  local_24[0] = param_1;
  iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x1b,local_24,0x10,(void *)0x0,(uint *)0x0);
  if (iVar1 < 0) {
    uVar2 = 6;
    iVar1 = DAT_001086fc + 0x1086d0;
    iVar3 = DAT_00108700 + 0x1086d2;
  }
  else {
    uVar2 = 4;
    iVar1 = DAT_00108704 + 0x1086c4;
    iVar3 = DAT_00108708 + 0x1086c6;
  }
  __android_log_print(uVar2,DAT_001086f8 + 0x1086ba,iVar1,iVar3);
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

