
/* qcamera::QCamera3YUVChannel::reprocessCbRoutine(native_handle const**, unsigned int) */

void __thiscall
qcamera::QCamera3YUVChannel::reprocessCbRoutine
          (QCamera3YUVChannel *this,native_handle **param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  Autolock aAStack52 [4];
  Vector_mm_camera_super_buf_t__ aVStack48 [20];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0005aef0 + 0x5ae22);
  local_1c = *piVar4;
  iVar3 = *(int *)(DAT_0005aef4 + 0x5ae2c);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  android::Vector<mm_camera_super_buf_t*>::Vector(aVStack48);
  uVar1 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x408),param_2);
  if (0x7fffffff < uVar1) {
    uVar6 = QCamera3ProcessingChannel::releaseOfflineMemory
                      ((QCamera3ProcessingChannel *)this,param_2);
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 != 0;
    if (bVar5) {
      iVar2 = *(int *)(iVar3 + 0x20);
    }
    if (bVar5 && iVar2 != 0) {
      mm_camera_debug_log();
    }
    if (*(code **)(this + 0x60) != (code *)0x0) {
      (**(code **)(this + 0x60))(0,0,param_2,1,*(undefined4 *)(this + 4));
    }
  }
  if ((this[0x2ed5] == (QCamera3YUVChannel)0x0) ||
     (iVar3 = handleOfflinePpCallback(this,param_2,(Vector *)aVStack48), iVar3 == 0)) {
    android::Mutex::Autolock::Autolock(aAStack52,(Mutex *)(this + 0x2f10));
    QCamera3ProcessingChannel::issueChannelCb((QCamera3ProcessingChannel *)this,param_1,param_2);
    do {
      uVar6 = getNextPendingCbBuffer(this);
    } while ((int)uVar6 != 0);
    android::Mutex::Autolock::_Autolock(aAStack52,(Mutex *)((ulonglong)uVar6 >> 0x20));
  }
  android::Vector<mm_camera_super_buf_t*>::_Vector(aVStack48);
  if (*piVar4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

