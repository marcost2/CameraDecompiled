
/* qcamera::QCamera3HardwareInterface::handleCameraDeviceError() */

int __thiscall
qcamera::QCamera3HardwareInterface::handleCameraDeviceError(QCamera3HardwareInterface *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  int *piVar4;
  int iVar5;
  uint local_16c;
  undefined8 local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 uStack336;
  undefined4 local_148;
  undefined4 local_144;
  int *local_140 [68];
  undefined4 local_30;
  undefined local_2c;
  int local_28;
  
  iVar5 = 0;
  piVar4 = *(int **)(DAT_0008e840 + 0x8e706);
  local_28 = *piVar4;
  local_2c = 0;
  local_30 = 0;
  local_140[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_140,(char *)(DAT_0008e844 + 0x8e724));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_140);
  __mutex = (pthread_mutex_t *)(this + 0x3f0);
  pthread_mutex_lock(__mutex);
  iVar3 = *(int *)(this + 0x117fd8);
  pthread_mutex_unlock(__mutex);
  if (iVar3 != 5) goto LAB_0008e7f6;
  iVar5 = flush(this,false);
  iVar3 = *(int *)(DAT_0008e848 + 0x8e764);
  if ((iVar5 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0008e850 + 0x8e782,0x184c,DAT_0008e84c + 0x8e77a);
  }
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(this + 0x117fd8) = 6;
  pthread_mutex_unlock(__mutex);
  local_148 = 0;
  uStack336 = 0;
  local_144 = 0;
  local_158 = 1;
  local_168 = 1;
  local_160 = 0;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),0,&local_16c);
  if (iVar1 == 0) {
    if (local_16c != 0xffffffff) {
      local_160 = local_160 & 0xffffffff00000000 | (ulonglong)local_16c;
      (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_168);
      goto LAB_0008e7f6;
    }
    if (*(int *)(iVar3 + 0x20) == 0) goto LAB_0008e7f6;
    uVar2 = 0x110d;
    iVar3 = DAT_0008e85c + 0x8e834;
    iVar1 = DAT_0008e860 + 0x8e83c;
  }
  else {
    if (*(int *)(iVar3 + 0x20) == 0) goto LAB_0008e7f6;
    uVar2 = 0x1109;
    iVar3 = DAT_0008e854 + 0x8e7d8;
    iVar1 = DAT_0008e858 + 0x8e7e0;
  }
  mm_camera_debug_log(1,1,iVar1,uVar2,iVar3);
LAB_0008e7f6:
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_140);
  if (local_140[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_140[0] + *(int *)(*local_140[0] + -0xc)));
  }
  if (*piVar4 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

