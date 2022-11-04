
/* qcamera::QCameraParameters::setVideoBatchSize() */

void __thiscall qcamera::QCameraParameters::setVideoBatchSize(QCameraParameters *this)

{
  QCameraParameters QVar1;
  int iVar2;
  int *piVar3;
  int local_78;
  int local_74;
  char acStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_000ec98c + 0xec8e0);
  local_14 = *piVar3;
  local_78 = 0;
  local_74 = 0;
  this[0x7a4] = (QCameraParameters)0x0;
  if (((this[0x798] != (QCameraParameters)0x0) ||
      (android::CameraParameters::getVideoSize((CameraParameters *)this,&local_74,&local_78),
      0x780 < local_74)) || (0x438 < local_78)) goto LAB_000ec97a;
  property_get(DAT_000ec994 + 0xec920,acStack112,*(undefined4 *)(DAT_000ec990 + 0xec916));
  iVar2 = atoi(acStack112);
  QVar1 = SUB41(iVar2,0);
  this[0x7a4] = QVar1;
  if (iVar2 * 0x1000000 < 0x10000001) {
    if (iVar2 * 0x1000000 < 0x3000000) {
      QVar1 = (QCameraParameters)0x0;
      goto LAB_000ec940;
    }
  }
  else {
    QVar1 = (QCameraParameters)0x10;
LAB_000ec940:
    this[0x7a4] = QVar1;
  }
  if (*(int *)(*(int *)(DAT_000ec998 + 0xec94a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ec9a0 + 0xec966,0x3c4b,DAT_000ec99c + 0xec95a,(int)(char)QVar1);
    QVar1 = this[0x7a4];
  }
  android::CameraParameters::set
            ((CameraParameters *)this,*(char **)(DAT_000ec9a4 + 0xec976),(int)(char)QVar1);
LAB_000ec97a:
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

