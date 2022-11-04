
/* qcamera::QCamera2Factory::get_number_of_cameras() */

undefined4 qcamera::QCamera2Factory::get_number_of_cameras(void)

{
  int iVar1;
  QCamera2Factory *this;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_0007e45c + 0x7e412);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    this = (QCamera2Factory *)operator_new(0x10);
    iVar1 = QCamera2Factory(this);
    *piVar3 = iVar1;
  }
  if (**(int **)(DAT_0007e460 + 0x7e428) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  else {
    uVar2 = QCameraMuxer::get_number_of_cameras();
  }
  if (*(int *)(*(int *)(DAT_0007e464 + 0x7e43c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_0007e46c + 0x7e454,0xd9,DAT_0007e468 + 0x7e44a,uVar2);
  }
  return uVar2;
}

