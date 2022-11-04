
/* qcamera::QCameraStream::BufAllocRoutine(void*) */

undefined4 qcamera::QCameraStream::BufAllocRoutine(void *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  undefined4 uVar10;
  pthread_mutex_t *__mutex;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  cam_buf_map_type_list acStack4144 [2052];
  QCameraBufferMaps aQStack2092 [2056];
  
  piVar15 = *(int **)(DAT_000d1d8c + 0xd1b56);
  iVar5 = *piVar15;
  iVar12 = *(int *)(DAT_000d1d90 + 0xd1b66);
  if (*(int *)(iVar12 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d1d98 + 0xd1b82,0x87f,DAT_000d1d94 + 0xd1b7a);
  }
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x10064);
  pthread_mutex_lock(__mutex);
  if (*(char *)((int)param_1 + 0x10061) != '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x10068),__mutex);
    } while (*(char *)((int)param_1 + 0x10061) != '\0');
  }
  pthread_mutex_unlock(__mutex);
  pcVar1 = (char *)((int)param_1 + 0x8e);
  cVar3 = *pcVar1;
  if ((cVar3 != '\0') && (*(int *)((int)param_1 + 0x10c) != 0)) {
    cVar2 = *(char *)((int)param_1 + 0x8c);
    iVar6 = (**(code **)(**(int **)((int)param_1 + 0x114) + 4))
                      (*(int **)((int)param_1 + 0x114),*(int *)((int)param_1 + 0x10c),
                       *(undefined4 *)((int)param_1 + 0x2a4),pcVar1);
    if (iVar6 != 0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d1da0 + 0xd1bf4,0x88b,DAT_000d1d9c + 0xd1bec);
      }
      *pcVar1 = '\0';
      goto LAB_000d1d6e;
    }
    *(undefined *)((int)param_1 + 0x8e) = 0;
    QCameraBufferMaps::QCameraBufferMaps(aQStack2092);
    uVar13 = (uint)(byte)(cVar2 - cVar3);
    uVar11 = uVar13;
    if (uVar13 < *(byte *)((int)param_1 + 0x8c)) {
      do {
        uVar7 = QCameraMemory::getSize(*(QCameraMemory **)((int)param_1 + 0x10c),uVar11);
        if (uVar7 == 0xffffffb5) {
          if (*(int *)(iVar12 + 0x20) == 0) {
LAB_000d1cf8:
            bVar4 = true;
          }
          else {
            uVar10 = 0x895;
            iVar6 = DAT_000d1da4 + 0xd1cd0;
            iVar9 = DAT_000d1da8 + 0xd1cd8;
LAB_000d1cf2:
            bVar4 = true;
            mm_camera_debug_log(1,1,iVar9,uVar10,iVar6);
          }
          goto LAB_000d1d48;
        }
        uVar14 = *(uint *)((int)param_1 + 0x68);
        iVar6 = QCameraMemory::getFd(*(QCameraMemory **)((int)param_1 + 0x10c),uVar11);
        pvVar8 = (void *)(**(code **)(**(int **)((int)param_1 + 0x10c) + 0x24))
                                   (*(int **)((int)param_1 + 0x10c),uVar11);
        iVar6 = QCameraBufferMaps::enqueue(aQStack2092,3,uVar14,uVar11,-1,0,iVar6,uVar7,pvVar8);
        if (iVar6 < 0) {
          if (*(int *)(iVar12 + 0x20) == 0) goto LAB_000d1cf8;
          uVar10 = 0x89f;
          iVar6 = DAT_000d1dac + 0xd1cec;
          iVar9 = DAT_000d1db0 + 0xd1cf4;
          goto LAB_000d1cf2;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)((int)param_1 + 0x8c));
    }
    iVar6 = QCameraBufferMaps::getCamBufMapList(aQStack2092,acStack4144);
    if ((iVar6 == 0) &&
       (iVar6 = (**(code **)((int)param_1 + 0x2ec))
                          (acStack4144,*(undefined4 *)((int)param_1 + 0x2f4)), iVar6 == 0)) {
      if (uVar13 < *(byte *)((int)param_1 + 0x8c)) {
        iVar6 = uVar13 * 0x218;
        do {
          QCameraMemory::getBufDef
                    (*(QCameraMemory **)((int)param_1 + 0x10c),
                     (cam_frame_len_offset_t *)((int)param_1 + 0x120),
                     (mm_camera_buf_def *)(*(int *)((int)param_1 + 0x118) + iVar6),uVar13);
          (**(code **)(*(int *)((int)param_1 + 0x6c) + 0x6c))
                    (*(undefined4 *)((int)param_1 + 0x60),*(undefined4 *)((int)param_1 + 100),
                     *(int *)((int)param_1 + 0x118) + iVar6);
          uVar13 = uVar13 + 1;
          iVar6 = iVar6 + 0x218;
        } while (uVar13 < *(byte *)((int)param_1 + 0x8c));
      }
      bVar4 = false;
    }
    else if (*(int *)(iVar12 + 0x20) == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = true;
      mm_camera_debug_log(1,1,DAT_000d1db8 + 0xd1cb4,0x8aa,DAT_000d1db4 + 0xd1ca8,iVar6);
    }
LAB_000d1d48:
    QCameraBufferMaps::_QCameraBufferMaps(aQStack2092);
    if (bVar4) goto LAB_000d1d6e;
  }
  if (*(int *)(iVar12 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d1dc0 + 0xd1d6c,0x8b4,DAT_000d1dbc + 0xd1d64);
  }
LAB_000d1d6e:
  if (*piVar15 != iVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

