
/* qcamera::QCamera2Factory::setTorchMode(char const*, bool) */

int __thiscall
qcamera::QCamera2Factory::setTorchMode(QCamera2Factory *this,char *param_1,bool param_2)

{
  int *piVar1;
  QCameraFlash *this_00;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  char *local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_0003a230 + 0x3a176);
  local_24 = *piVar6;
  local_28 = (char *)0x0;
  piVar1 = (int *)__errno();
  *piVar1 = 0;
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  lVar2 = strtol(param_1,&local_28,10);
  iVar3 = -0x16;
  if ((lVar2 < 0) || (*piVar1 == 0x22)) goto LAB_0003a1bc;
  iVar3 = get_number_of_cameras();
  if ((iVar3 <= lVar2) || ((local_28 == param_1 || (*local_28 != '\0')))) {
    iVar3 = -0x16;
    goto LAB_0003a1bc;
  }
  if (param_2 == false) {
    iVar3 = QCameraFlash::setFlashMode(this_00,lVar2,false);
    if (iVar3 != -0x72) {
      if ((iVar3 != 0) || (iVar3 = QCameraFlash::deinitFlash(this_00,lVar2), iVar3 != 0))
      goto LAB_0003a1bc;
      iVar3 = *(int *)(this + 0xc);
      if (iVar3 != 0) {
        pcVar5 = *(code **)(iVar3 + 4);
        uVar4 = 1;
LAB_0003a226:
        (*pcVar5)(iVar3,param_1,uVar4);
      }
    }
  }
  else {
    iVar3 = QCameraFlash::initFlash(this_00,lVar2);
    if (iVar3 != 0) goto LAB_0003a1bc;
    iVar3 = QCameraFlash::setFlashMode(this_00,lVar2,param_2);
    if (iVar3 != -0x72) {
      if (iVar3 != 0) goto LAB_0003a1bc;
      iVar3 = *(int *)(this + 0xc);
      if (iVar3 != 0) {
        pcVar5 = *(code **)(iVar3 + 4);
        uVar4 = 2;
        goto LAB_0003a226;
      }
    }
  }
  iVar3 = 0;
LAB_0003a1bc:
  if (*piVar6 == local_24) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

