
/* qcamera::QCamera3HardwareInterface::setBundleInfo() */

int __thiscall qcamera::QCamera3HardwareInterface::setBundleInfo(QCamera3HardwareInterface *this)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  iVar1 = 0;
  piVar2 = *(int **)(DAT_0008e118 + 0x8e04a);
  local_18 = *piVar2;
  if (*(int *)(this + 0xf4) != 0) {
    local_20 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_1c = 0;
    local_30 = 0;
    uStack40 = 0;
    iVar1 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x3c))(**(undefined4 **)(this + 100));
    if (iVar1 == 0) {
      if (*(QCamera3Channel **)(this + 0x9c) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo
                  (*(QCamera3Channel **)(this + 0x9c),(cam_bundle_config_t *)&local_40);
      }
      if (*(QCamera3Channel **)(this + 0x98) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo
                  (*(QCamera3Channel **)(this + 0x98),(cam_bundle_config_t *)&local_40);
      }
      ppiVar3 = (int **)(*(int ***)(this + 0x3fc))[2];
      if (ppiVar3 != *(int ***)(this + 0x3fc)) {
        do {
          QCamera3Channel::setBundleInfo
                    (*(QCamera3Channel **)(**ppiVar3 + 0x18),(cam_bundle_config_t *)&local_40);
          ppiVar3 = (int **)ppiVar3[2];
        } while (ppiVar3 != *(int ***)(this + 0x3fc));
      }
      if (*(QCamera3Channel **)(this + 0xa0) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo
                  (*(QCamera3Channel **)(this + 0xa0),(cam_bundle_config_t *)&local_40);
      }
      if ((*(QCamera3Channel **)(this + 0x117f30) != (QCamera3Channel *)0x0) &&
         (iVar1 = QCamera3Channel::getStreamByIndex(*(QCamera3Channel **)(this + 0x117f30),0),
         iVar1 != 0)) {
        QCamera3Channel::setBundleInfo
                  (*(QCamera3Channel **)(this + 0x117f30),(cam_bundle_config_t *)&local_40);
      }
      iVar1 = 0;
    }
    else if (*(int *)(*(int *)(DAT_0008e11c + 0x8e084) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008e124 + 0x8e09c,0x353f,DAT_0008e120 + 0x8e094);
    }
  }
  if (*piVar2 == local_18) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

