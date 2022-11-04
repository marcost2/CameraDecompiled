
/* qcamera::QCameraPostProcessor::checkThumbStreamAspect(qcamera::QCameraStream*,
   qcamera::QCameraStream*, unsigned int) */

void __thiscall
qcamera::QCameraPostProcessor::checkThumbStreamAspect
          (QCameraPostProcessor *this,QCameraStream *param_1,QCameraStream *param_2,uint param_3)

{
  QCameraStream *pQVar1;
  bool bVar2;
  int iVar3;
  QCameraStream *pQVar4;
  int *piVar5;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  QCameraStream *local_24;
  QCameraStream *pQStack32;
  int local_1c;
  
  piVar5 = *(int **)(DAT_000d6e34 + 0xd6d88);
  local_1c = *piVar5;
  if (param_1 != (QCameraStream *)0x0) {
    pQVar4 = param_2;
    QCamera2HardwareInterface::getThumbnailSize
              (*(QCamera2HardwareInterface **)(this + 8),(cam_dimension_t *)&local_34);
    QCameraStream::getFrameDimension(param_2,(cam_dimension_t *)&local_24);
    iVar3 = QCamera2HardwareInterface::needRotationReprocess
                      (*(QCamera2HardwareInterface **)(this + 8));
    pQVar1 = local_24;
    if ((iVar3 != 0) && (param_3 == 0x10e || param_3 == 0x5a)) {
      local_24 = pQStack32;
      pQStack32 = pQVar1;
    }
    QCameraStream::getFrameDimension(param_1,(cam_dimension_t *)&local_2c);
    if (local_34 <= local_2c) {
      bVar2 = false;
      if (((int)local_30 <= (int)local_28) && (local_30 != 0)) {
        if (local_28 != 0) {
          pQVar4 = pQStack32;
        }
        if (local_28 != 0 && pQVar4 != (QCameraStream *)0x0) {
          local_28 = (uint)(local_2c << 10) / local_28;
          iVar3 = (uint)(local_34 << 10) / local_30 - local_28;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if (iVar3 < 0xb) {
            bVar2 = true;
          }
          else {
            iVar3 = (uint)((int)local_24 << 10) / (uint)pQVar4 - local_28;
            if (iVar3 < 0) {
              iVar3 = -iVar3;
            }
            bVar2 = iVar3 < 0xb;
          }
        }
      }
      goto LAB_000d6dd4;
    }
  }
  bVar2 = false;
LAB_000d6dd4:
  if (*piVar5 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

