
/* qcamera::MotCameraFactory::__handleGetCalibrationStatus() */

void __thiscall qcamera::MotCameraFactory::__handleGetCalibrationStatus(MotCameraFactory *this)

{
  MotCameraFactory MVar1;
  int iVar2;
  int *piVar3;
  uint local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_00108570 + 0x1084dc);
  local_18 = *piVar3;
  __android_log_print(4,DAT_00108574 + 0x1084ec,DAT_00108578 + 0x1084ee,DAT_0010857c + 0x1084f0);
  __aeabi_memclr8(this + 0x32,200);
  local_1c = 200;
  iVar2 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           0x13,(void *)0x0,0,this + 0x32,&local_1c);
  if ((iVar2 < 0) || (local_1c != 200)) {
    __android_log_print(4,DAT_00108580 + 0x108552,DAT_00108584 + 0x108554,DAT_00108588 + 0x108556,
                        iVar2);
    MVar1 = (MotCameraFactory)0x0;
  }
  else {
    __android_log_print(4,DAT_0010858c + 0x108534,DAT_00108590 + 0x108536,DAT_00108594 + 0x108538);
    this[0xf9] = (MotCameraFactory)0x0;
    MVar1 = (MotCameraFactory)0x1;
  }
  this[0x31] = MVar1;
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

