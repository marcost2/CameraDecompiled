
/* qcamera::QCameraPostProcessor::getOfflinePPInputBuffer(mm_camera_super_buf_t*) */

mm_camera_buf_def * __thiscall
qcamera::QCameraPostProcessor::getOfflinePPInputBuffer
          (QCameraPostProcessor *this,mm_camera_super_buf_t *param_1)

{
  uint uVar1;
  mm_camera_buf_def *__ptr;
  QCameraChannel *this_00;
  QCameraStream *this_01;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  mm_camera_buf_def *__dest;
  void *__src;
  cam_frame_len_offset_t acStack432 [392];
  int local_28;
  
  piVar6 = *(int **)(DAT_000d440c + 0xd4236);
  local_28 = *piVar6;
  if (*(QCameraMemory **)(this + 4) == (QCameraMemory *)0x0) {
    if (*(int *)(*(int *)(DAT_000d4410 + 0xd438e) + 0x20) != 0) {
      uVar3 = 0x39f;
      iVar2 = DAT_000d4414 + 0xd439e;
      iVar5 = DAT_000d4418 + 0xd43a6;
LAB_000d43f0:
      mm_camera_debug_log(1,1,iVar5,uVar3,iVar2);
    }
  }
  else {
    uVar1 = QCameraMemory::getCnt(*(QCameraMemory **)(this + 4));
    __ptr = (mm_camera_buf_def *)malloc(uVar1 * 0x218);
    if (__ptr != (mm_camera_buf_def *)0x0) {
      __aeabi_memclr8(__ptr,uVar1 * 0x218);
      this_00 = (QCameraChannel *)
                QCamera2HardwareInterface::getChannelByHandle
                          (*(QCamera2HardwareInterface **)(this + 8),*(uint *)(param_1 + 4));
      if (*(int *)(param_1 + 8) == 0) {
LAB_000d43a6:
        free(__ptr);
        __ptr = (mm_camera_buf_def *)0x0;
      }
      else {
        uVar4 = 0;
        __src = (void *)0x0;
        do {
          this_01 = (QCameraStream *)
                    QCameraChannel::getStreamByHandle
                              (this_00,**(uint **)(param_1 + uVar4 * 4 + 0x10));
          if (this_01 != (QCameraStream *)0x0) {
            iVar2 = QCameraStream::getMyType(this_01);
            if (iVar2 == 8) {
              if (*(int *)(*(int *)(DAT_000d4428 + 0xd42a6) + 0x28) != 0) {
                mm_camera_debug_log(1,3,DAT_000d4430 + 0xd42be,0x3b2,DAT_000d442c + 0xd42b6);
              }
              __src = *(void **)(param_1 + uVar4 * 4 + 0x10);
            }
            else {
              iVar2 = QCameraStream::getMyType(this_01);
              if ((iVar2 == 7) && (*(int *)(*(int *)(DAT_000d4440 + 0xd42d6) + 0x28) != 0)) {
                mm_camera_debug_log(1,3,DAT_000d4448 + 0xd42ee,0x3b5,DAT_000d4444 + 0xd42e6);
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 8));
        if ((this_01 == (QCameraStream *)0x0) || (__src == (void *)0x0)) goto LAB_000d43a6;
        __aeabi_memclr8(acStack432,0x188);
        QCameraStream::getFrameOffset(this_01,acStack432);
        if (uVar1 != 0) {
          uVar4 = 0;
          iVar5 = *(int *)(DAT_000d4434 + 0xd4322);
          iVar2 = DAT_000d4438 + 0xd432e;
          iVar7 = DAT_000d443c + 0xd4330;
          __dest = __ptr;
          do {
            __aeabi_memcpy8(__dest,__src,0x218);
            QCameraMemory::getBufDef(*(QCameraMemory **)(this + 4),acStack432,__dest,uVar4);
            if (*(int *)(iVar5 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,iVar7,0x3c3,iVar2);
            }
            __aeabi_memcpy8(*(void **)(__dest + 0x208),*(void **)((int)__src + 0x208),
                            *(size_t *)(__dest + 0x20c));
            uVar4 = uVar4 + 1;
            __dest = __dest + 0x218;
          } while (uVar1 != uVar4);
        }
        releaseSuperBuf(this,param_1,8);
      }
      if (*(int *)(*(int *)(DAT_000d444c + 0xd43b6) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d4454 + 0xd43d0,0x3ce,DAT_000d4450 + 0xd43c6,__ptr);
      }
      goto LAB_000d43f6;
    }
    if (*(int *)(*(int *)(DAT_000d441c + 0xd43da) + 0x20) != 0) {
      uVar3 = 0x3a7;
      iVar2 = DAT_000d4420 + 0xd43ea;
      iVar5 = DAT_000d4424 + 0xd43f2;
      goto LAB_000d43f0;
    }
  }
  __ptr = (mm_camera_buf_def *)0x0;
LAB_000d43f6:
  if (*piVar6 == local_28) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

