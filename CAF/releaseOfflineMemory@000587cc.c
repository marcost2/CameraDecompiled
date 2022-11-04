
/* qcamera::QCamera3ProcessingChannel::releaseOfflineMemory(unsigned int) */

int __thiscall
qcamera::QCamera3ProcessingChannel::releaseOfflineMemory
          (QCamera3ProcessingChannel *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Mutex *extraout_r1;
  int *piVar4;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000588b8 + 0x587dc);
  local_1c = *piVar4;
  uVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x1254),param_1);
  if ((int)uVar1 < 0) {
    if (*(int *)(*(int *)(DAT_000588bc + 0x5882a) + 0x24) != 0) {
      mm_camera_debug_log();
    }
    iVar2 = 0;
  }
  else {
    iVar2 = QCamera3StreamMem::unregisterBuffer((QCamera3StreamMem *)(this + 0x1254),uVar1);
    if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_000588c8 + 0x58808) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
  }
  iVar3 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x2084),param_1);
  if (iVar3 < 0) {
    if (*(int *)(*(int *)(DAT_000588d4 + 0x58884) + 0x24) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x2ebc));
    android::List<unsigned_int>::push_back((uint *)(this + 0x2eb4));
    android::Mutex::Autolock::_Autolock(aAStack32,extraout_r1);
  }
  if (*piVar4 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

