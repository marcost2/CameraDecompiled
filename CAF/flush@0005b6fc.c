
/* qcamera::QCamera3PicChannel::flush() */

int __thiscall qcamera::QCamera3PicChannel::flush(QCamera3PicChannel *this)

{
  int iVar1;
  int iVar2;
  Mutex *pMVar3;
  uint in_r2;
  int *piVar4;
  undefined8 uVar5;
  Mutex *local_24;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0005b7f8 + 0x5b70a);
  local_1c = *piVar4;
  if (this[0x50] == (QCamera3PicChannel)0x0) {
    if (*(int *)(*(int *)(DAT_0005b7fc + 0x5b79c) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    iVar1 = -0x13;
  }
  else {
    iVar1 = QCamera3PostProcessor::flush((QCamera3PostProcessor *)(this + 0x90));
    if (iVar1 == 0) {
      iVar1 = 0;
      if (*(int *)(*(int *)(DAT_0005b808 + 0x5b7c2) + 0x20) != 0) {
        mm_camera_debug_log();
      }
    }
    else {
      uVar5 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x2084));
      if ((int)uVar5 != 0) {
        QCamera3StreamMem::deallocate
                  ((allocator *)(QCamera3StreamMem *)(this + 0x2084),
                   (__tree_node *)((ulonglong)uVar5 >> 0x20),in_r2);
      }
      iVar2 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x1254));
      if (iVar2 != 0) {
        QCamera3StreamMem::unregisterBuffers((QCamera3StreamMem *)(this + 0x1254));
      }
      android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x2ef8));
      android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x2efc));
      local_24 = (Mutex *)0x0;
      pMVar3 = *(Mutex **)(*(int *)(this + 0x1238) + 0x14);
      if (pMVar3 != (Mutex *)0x0) {
        do {
          android::List<unsigned_int>::push_back((uint *)(this + 0x2efc));
          local_24 = local_24 + 1;
          pMVar3 = *(Mutex **)(*(int *)(this + 0x1238) + 0x14);
        } while (local_24 < pMVar3);
      }
      android::Mutex::Autolock::_Autolock(aAStack32,pMVar3);
    }
  }
  if (*piVar4 == local_1c) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

