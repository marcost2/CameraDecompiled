
/* qcamera::MotCameraFactory::__handleGetLedCalibrationData() */

void __thiscall qcamera::MotCameraFactory::__handleGetLedCalibrationData(MotCameraFactory *this)

{
  MotCameraFactory MVar1;
  int iVar2;
  int *piVar3;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_001087ac + 0x108718);
  local_14 = *piVar3;
  __android_log_print(4,DAT_001087b0 + 0x108728,DAT_001087b4 + 0x10872a,DAT_001087b8 + 0x10872c);
  local_18 = *(undefined4 *)
              (*(int *)(*(int *)(DAT_001087bc + 0x10873a) + *(int *)(*(int *)this + 0x60) * 4) + 4);
  local_1c = 0x30;
  iVar2 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x1c,&local_18,4,this + 0xfe0,&local_1c);
  if ((iVar2 < 0) || (local_1c != 0x30)) {
    __android_log_print(6,DAT_001087c0 + 0x108790,DAT_001087c4 + 0x108792,DAT_001087c8 + 0x108794,
                        iVar2);
    MVar1 = (MotCameraFactory)0x0;
  }
  else {
    __android_log_print(4,DAT_001087cc + 0x108778,DAT_001087d0 + 0x10877a,DAT_001087d4 + 0x10877c);
    MVar1 = (MotCameraFactory)0x1;
  }
  this[0xfd8] = MVar1;
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

