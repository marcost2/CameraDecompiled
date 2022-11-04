
/* qcamera::MotExifHal1::MotExifHal1(qcamera::QCameraExif*, qcamera::QCameraParametersIntf*) */

void __thiscall
qcamera::MotExifHal1::MotExifHal1
          (MotExifHal1 *this,QCameraExif *param_1,QCameraParametersIntf *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)MotExif::MotExif((MotExif *)this);
  piVar1[2] = (int)param_2;
  piVar1[3] = (int)param_1;
  *piVar1 = *(int *)(DAT_00106b28 + 0x106b20) + 8;
  return;
}

