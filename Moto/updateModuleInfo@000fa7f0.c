
/* qcamera::QCameraParameters::updateModuleInfo() */

void __thiscall qcamera::QCameraParameters::updateModuleInfo(QCameraParameters *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint local_18;
  int local_14;
  
  piVar3 = *(int **)(DAT_000fa858 + 0xfa7fc);
  local_14 = *piVar3;
  if (this[0xd18] == (QCameraParameters)0x0) {
    local_18 = 0x4c;
    iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),0x10,(void *)0x0,0,this + 0x80c,&local_18);
    if (iVar1 < 0) {
      __android_log_print(6,DAT_000fa85c + 0xfa848,DAT_000fa860 + 0xfa84a,DAT_000fa864 + 0xfa84c);
      uVar2 = 0x80000000;
      goto LAB_000fa830;
    }
    this[0xd18] = (QCameraParameters)0x1;
  }
  uVar2 = 0;
LAB_000fa830:
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

