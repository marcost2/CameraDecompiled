
/* qcamera::MotCameraFactory::__handleGetModuleVendorName() */

void __thiscall qcamera::MotCameraFactory::__handleGetModuleVendorName(MotCameraFactory *this)

{
  MotCameraFactory MVar1;
  int iVar2;
  int *piVar3;
  uint local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_001084a8 + 0x108414);
  local_14 = *piVar3;
  __android_log_print(4,DAT_001084ac + 0x108424,DAT_001084b0 + 0x108426,DAT_001084b4 + 0x108428);
  *(undefined8 *)(this + 0x21) = 0;
  *(undefined8 *)(this + 0x29) = 0;
  local_18 = 0x10;
  iVar2 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x12,(void *)0x0,0,this + 0x21,&local_18);
  if ((iVar2 < 0) || (local_18 != 0x10)) {
    __android_log_print(6,DAT_001084b8 + 0x10848a,DAT_001084bc + 0x10848c,DAT_001084c0 + 0x10848e,
                        iVar2);
    MVar1 = (MotCameraFactory)0x0;
  }
  else {
    __android_log_print(4,DAT_001084c4 + 0x10846c,DAT_001084c8 + 0x10846e,DAT_001084cc + 0x108470);
    this[0x30] = (MotCameraFactory)0x0;
    MVar1 = (MotCameraFactory)0x1;
  }
  this[0x20] = MVar1;
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

