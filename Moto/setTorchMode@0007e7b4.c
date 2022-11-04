
/* qcamera::QCamera2Factory::setTorchMode(char const*, bool) */

void __thiscall
qcamera::QCamera2Factory::setTorchMode(QCamera2Factory *this,char *param_1,bool param_2)

{
  int *piVar1;
  QCameraFlash *this_00;
  long lVar2;
  int iVar3;
  QCamera2Factory *this_01;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  char *local_28;
  int local_24;
  
  piVar6 = *(int **)(DAT_0007e8c8 + 0x7e7c8);
  local_24 = *piVar6;
  local_28 = (char *)0x0;
  piVar1 = (int *)__errno();
  *piVar1 = 0;
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  lVar2 = strtol(param_1,&local_28,10);
  iVar3 = -0x16;
  if ((lVar2 < 0) || (*piVar1 == 0x22)) goto LAB_0007e852;
  piVar1 = *(int **)(DAT_0007e8cc + 0x7e7fc);
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    this_01 = (QCamera2Factory *)operator_new(0x10);
    iVar3 = QCamera2Factory(this_01);
    *piVar1 = iVar3;
  }
  if (**(int **)(DAT_0007e8d0 + 0x7e812) == 0) {
    iVar3 = *(int *)(iVar3 + 4);
  }
  else {
    iVar3 = QCameraMuxer::get_number_of_cameras();
  }
  if (*(int *)(*(int *)(DAT_0007e8d4 + 0x7e826) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_0007e8dc + 0x7e83e,0xd9,DAT_0007e8d8 + 0x7e834,iVar3);
  }
  if (((iVar3 <= lVar2) || (local_28 == param_1)) || (*local_28 != '\0')) {
    iVar3 = -0x16;
    goto LAB_0007e852;
  }
  if (param_2 == false) {
    iVar3 = QCameraFlash::setFlashMode(this_00,lVar2,false);
    if (iVar3 != -0x72) {
      if ((iVar3 != 0) || (iVar3 = QCameraFlash::deinitFlash(this_00,lVar2), iVar3 != 0))
      goto LAB_0007e852;
      iVar3 = *(int *)(this + 0xc);
      if (iVar3 != 0) {
        pcVar5 = *(code **)(iVar3 + 4);
        uVar4 = 1;
LAB_0007e8bc:
        (*pcVar5)(iVar3,param_1,uVar4);
      }
    }
  }
  else {
    iVar3 = QCameraFlash::initFlash(this_00,lVar2);
    if (iVar3 != 0) goto LAB_0007e852;
    iVar3 = QCameraFlash::setFlashMode(this_00,lVar2,true);
    if (iVar3 != -0x72) {
      if (iVar3 != 0) goto LAB_0007e852;
      iVar3 = *(int *)(this + 0xc);
      if (iVar3 != 0) {
        pcVar5 = *(code **)(iVar3 + 4);
        uVar4 = 2;
        goto LAB_0007e8bc;
      }
    }
  }
  iVar3 = 0;
LAB_0007e852:
  if (*piVar6 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

