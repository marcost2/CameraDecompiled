
/* qcamera::MotCameraFactory::__handleGetCalibrationRaw() */

void __thiscall qcamera::MotCameraFactory::__handleGetCalibrationRaw(MotCameraFactory *this)

{
  int *piVar1;
  MotCameraFactory MVar2;
  int iVar3;
  int *piVar4;
  uint local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0010862c + 0x1085a4);
  local_14 = *piVar4;
  __android_log_print(4,DAT_00108630 + 0x1085b4,DAT_00108634 + 0x1085b6,DAT_00108638 + 0x1085b8);
  piVar1 = (int *)(this + 0xfc);
  *piVar1 = 0;
  local_18 = 0xedc;
  iVar3 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x14,(void *)0x0,0,piVar1,&local_18);
  if ((iVar3 < 0) || (*piVar1 == 0)) {
    __android_log_print(6,DAT_0010863c + 0x108610,DAT_00108640 + 0x108612,DAT_00108644 + 0x108614,
                        iVar3);
    MVar2 = (MotCameraFactory)0x0;
  }
  else {
    __android_log_print(4,DAT_00108648 + 0x1085f8,DAT_0010864c + 0x1085fa,DAT_00108650 + 0x1085fc);
    MVar2 = (MotCameraFactory)0x1;
  }
  this[0xfa] = MVar2;
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

