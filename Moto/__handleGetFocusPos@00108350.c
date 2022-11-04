
/* qcamera::MotCameraFactory::__handleGetFocusPos() */

void __thiscall qcamera::MotCameraFactory::__handleGetFocusPos(MotCameraFactory *this)

{
  MotCameraFactory MVar1;
  int iVar2;
  int *piVar3;
  uint local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_001083e0 + 0x10835c);
  local_14 = *piVar3;
  __android_log_print(4,DAT_001083e4 + 0x10836c,DAT_001083e8 + 0x10836e,DAT_001083ec + 0x108370);
  local_18 = 0x10;
  iVar2 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x1d,(void *)0x0,0,this + 0x10,&local_18);
  if ((iVar2 < 0) || (local_18 != 0x10)) {
    __android_log_print(6,DAT_001083f0 + 0x1083c4,DAT_001083f4 + 0x1083c6,DAT_001083f8 + 0x1083c8,
                        iVar2);
    MVar1 = (MotCameraFactory)0x0;
  }
  else {
    __android_log_print(4,DAT_001083fc + 0x1083ac,DAT_00108400 + 0x1083ae,DAT_00108404 + 0x1083b0);
    MVar1 = (MotCameraFactory)0x1;
  }
  this[0xc] = MVar1;
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

