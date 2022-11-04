
/* qcamera::QCamera2Factory::get_number_of_cameras() */

undefined4 qcamera::QCamera2Factory::get_number_of_cameras(void)

{
  QCamera2Factory *pQVar1;
  undefined4 uVar2;
  QCamera2Factory **ppQVar3;
  
  ppQVar3 = *(QCamera2Factory ***)(DAT_00039ed8 + 0x39e9a);
  if (*ppQVar3 == (QCamera2Factory *)0x0) {
    pQVar1 = (QCamera2Factory *)operator_new(0x10);
    pQVar1 = (QCamera2Factory *)QCamera2Factory(pQVar1);
    *ppQVar3 = pQVar1;
  }
  uVar2 = getNumberOfCameras(*ppQVar3);
  if (*(int *)(*(int *)(DAT_00039edc + 0x39eb8) + 0x44) != 0) {
    mm_camera_debug_log();
  }
  return uVar2;
}

