
/* qcamera::MotExifHal1::motGetParameter(unsigned int, int*, void*) */

void __thiscall
qcamera::MotExifHal1::motGetParameter(MotExifHal1 *this,uint param_1,int *param_2,void *param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_3 == (void *)0x0) {
    iVar2 = DAT_00106bf8 + 0x106b8e;
    goto LAB_00106be6;
  }
  if ((int)param_1 < 0xbfa408) {
    if (param_1 != 0xbaa403) {
      if (param_1 == 0xbba404) {
        QCameraParametersIntf::getExifDigitalZoom
                  (*(QCameraParametersIntf **)(this + 8),(rat_t *)param_3);
        goto LAB_00106bdc;
      }
      if (param_1 == 0xbda406) {
        uVar1 = QCameraParametersIntf::getExifSceneTypeCapture
                          (*(QCameraParametersIntf **)(this + 8),param_2);
        *(undefined2 *)param_3 = uVar1;
        return;
      }
LAB_00106be2:
      iVar2 = DAT_00106c00 + 0x106be8;
LAB_00106be6:
      __android_log_print(6,0,iVar2,DAT_00106bfc + 0x106bf0);
      return;
    }
    uVar1 = QCameraParametersIntf::getExifWhiteBalance(*(QCameraParametersIntf **)(this + 8));
  }
  else if (param_1 == 0xbfa408) {
    uVar1 = QCameraParametersIntf::getExifContrast(*(QCameraParametersIntf **)(this + 8));
  }
  else if (param_1 == 0xc0a409) {
    uVar1 = QCameraParametersIntf::getExifSaturation(*(QCameraParametersIntf **)(this + 8));
  }
  else {
    if (param_1 != 0xc1a40a) goto LAB_00106be2;
    uVar1 = QCameraParametersIntf::getExifSharpness(*(QCameraParametersIntf **)(this + 8));
  }
  *(undefined2 *)param_3 = uVar1;
LAB_00106bdc:
  *param_2 = 1;
  return;
}

