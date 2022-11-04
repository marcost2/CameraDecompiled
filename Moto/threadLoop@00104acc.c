
/* qcamera::MotSmoothZoom::threadLoop() */

undefined4 __thiscall qcamera::MotSmoothZoom::threadLoop(MotSmoothZoom *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  pthread_mutex_t *__mutex;
  int iVar8;
  int iVar9;
  
  __mutex = (pthread_mutex_t *)(this + 0x28);
  pthread_mutex_lock(__mutex);
  if (-1 < *(int *)(this + 0x30)) {
    iVar7 = 0;
    do {
      iVar1 = QCameraParametersIntf::getZoom
                        ((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac));
      if (*(int *)(this + 0x30) == iVar1) {
        pthread_cond_wait((pthread_cond_t *)(this + 0x2c),__mutex);
        iVar8 = 0;
      }
      else if (*(int *)(this + 0x3c) == iVar7) {
        pthread_cond_wait((pthread_cond_t *)(this + 0x2c),__mutex);
        iVar8 = iVar7;
      }
      else {
        uVar2 = QCameraParametersIntf::getRecordingHintValue
                          ((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac));
        iVar8 = *(int *)(this + 0x3c);
        uVar2 = (uVar2 ^ 1) + *(int *)(this + 0x34);
        if ((iVar7 != 0) && ((uint)((-0x28 - iVar7) + iVar8) < 0x3c)) {
          uVar2 = uVar2 + 1;
        }
        uVar3 = *(uint *)(this + 0x30);
        if (iVar1 < (int)uVar3) {
          uVar5 = 0xffffffff;
          if ((int)uVar2 < 0) {
            uVar5 = ~uVar2;
          }
          uVar5 = (-2 - uVar2) - uVar5;
          uVar6 = iVar1 + uVar2;
          if ((int)uVar3 < (int)(iVar1 + uVar2)) {
            uVar6 = uVar3;
          }
          uVar3 = ((-2 - iVar1) - uVar2) - ~uVar6;
          if (uVar5 < uVar3) {
            uVar5 = uVar3;
          }
          iVar7 = iVar1 + 1;
          iVar4 = iVar7 + uVar2;
          iVar9 = uVar2 + uVar5 + 1;
          for (; iVar7 < (int)(iVar4 + uVar5); iVar7 = iVar7 + 1) {
            QCameraParametersIntf::updateZoomValue
                      ((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac),iVar7,false);
            if ((int)((uint)(byte)(*(QCamera2HardwareInterface **)(this + 0x24))[0x4b4] << 0x1c) < 0
               ) {
              QCamera2HardwareInterface::sendEvtNotify
                        (*(QCamera2HardwareInterface **)(this + 0x24),8,iVar7,0);
            }
          }
        }
        else {
          uVar5 = iVar1 - uVar2;
          if ((int)(iVar1 - uVar2) < (int)uVar3) {
            uVar5 = uVar3;
          }
          iVar7 = iVar1 + -1;
          iVar4 = iVar7 - uVar2;
          uVar5 = iVar4 - uVar5;
          uVar3 = ~uVar2;
          if ((int)uVar2 < 0) {
            uVar3 = 0xffffffff;
          }
          if (uVar3 < uVar5) {
            uVar3 = uVar5;
          }
          iVar9 = ~uVar2 - uVar3;
          for (; (int)(iVar4 - uVar3) < iVar7; iVar7 = iVar7 + -1) {
            QCameraParametersIntf::updateZoomValue
                      ((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac),iVar7,false);
            if ((int)((uint)(byte)(*(QCamera2HardwareInterface **)(this + 0x24))[0x4b4] << 0x1c) < 0
               ) {
              QCamera2HardwareInterface::sendEvtNotify
                        (*(QCamera2HardwareInterface **)(this + 0x24),8,iVar7,0);
            }
          }
        }
        iVar9 = iVar9 + iVar1;
        this[0x39] = (MotSmoothZoom)0x1;
        if (this[0x38] == (MotSmoothZoom)0x0) {
          iVar7 = *(int *)(this + 0x30);
        }
        else {
          this[0x38] = (MotSmoothZoom)0x0;
          *(int *)(this + 0x30) = iVar9;
          iVar7 = iVar9;
        }
        iVar1 = QCameraParametersIntf::updateZoomValue
                          ((QCameraParametersIntf *)(*(int *)(this + 0x24) + 0x4ac),iVar9,true);
        if (iVar1 == 0) {
          if (iVar9 == iVar7) {
            this[0x39] = (MotSmoothZoom)0x0;
          }
          if ((int)((uint)(byte)(*(QCamera2HardwareInterface **)(this + 0x24))[0x4b4] << 0x1c) < 0)
          {
            uVar2 = count_leading_zeroes(iVar9 - iVar7);
            QCamera2HardwareInterface::sendEvtNotify
                      (*(QCamera2HardwareInterface **)(this + 0x24),8,iVar9,uVar2 >> 5);
          }
        }
        else {
          __android_log_print(6,DAT_00104c88 + 0x104c42,DAT_00104c8c + 0x104c44);
        }
      }
      iVar7 = iVar8;
    } while (*(uint *)(this + 0x30) < 0x80000000);
  }
  pthread_mutex_unlock(__mutex);
  return 0;
}

