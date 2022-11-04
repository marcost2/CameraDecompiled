
/* qcamera::QCamera2HardwareInterface::preTakePicture() */

int __thiscall qcamera::QCamera2HardwareInterface::preTakePicture(QCamera2HardwareInterface *this)

{
  int iVar1;
  int *piVar2;
  QCameraParametersIntf *this_00;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b6d64 + 0xb6c54);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6d6c + 0xb6c6c,0x1627,DAT_000b6d68 + 0xb6c64);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00);
  if (iVar1 != 0) {
    piVar2 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
    if (*piVar2 == 1) {
      this[0x1be8] = (QCamera2HardwareInterface)0x1;
    }
    else {
      if (*(int *)(iVar3 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000b6d74 + 0xb6cca,0x162d,DAT_000b6d70 + 0xb6cc2);
      }
      stopPreview(SUB41(this,0));
      QCameraParametersIntf::updateRecordingHintValue(this_00,0);
      iVar1 = preparePreview(this);
      if (iVar1 != 0) goto LAB_000b6c90;
      iVar1 = startPreview(this);
      if (iVar1 != 0) {
        if (*(int **)(this + 0x9b4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9b4) + 4))();
          *(undefined4 *)(this + 0x9b4) = 0;
        }
        if (*(int **)(this + 0x9bc) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9bc) + 4))();
          *(undefined4 *)(this + 0x9bc) = 0;
        }
        if (*(int **)(this + 0x9c0) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c0) + 4))();
          *(undefined4 *)(this + 0x9c0) = 0;
        }
        if (*(int **)(this + 0x9c4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c4) + 4))();
          *(undefined4 *)(this + 0x9c4) = 0;
        }
        if (*(int **)(this + 0x9d4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9d4) + 4))();
          *(undefined4 *)(this + 0x9d4) = 0;
        }
        if (*(int **)(this + 0x9c8) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c8) + 4))();
          *(undefined4 *)(this + 0x9c8) = 0;
        }
        goto LAB_000b6c90;
      }
    }
  }
  iVar1 = 0;
LAB_000b6c90:
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6d7c + 0xb6caa,0x1649,DAT_000b6d78 + 0xb6ca0,iVar1);
  }
  return iVar1;
}

