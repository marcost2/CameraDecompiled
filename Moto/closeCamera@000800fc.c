
/* qcamera::QCamera3HardwareInterface::closeCamera() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::closeCamera(QCamera3HardwareInterface *this)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  QCameraFlash *this_00;
  char cVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  Parcel aPStack252 [60];
  Parcel aPStack192 [60];
  int *local_84;
  char acStack128 [92];
  int local_24;
  
  piVar6 = *(int **)(DAT_00080310 + 0x8010a);
  local_24 = *piVar6;
  piVar7 = *(int **)(DAT_00080314 + 0x80118);
  if (*piVar7 != 0) {
    if ((**(byte **)(DAT_00080318 + 0x80128) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008031c + 0x80138) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00080320 + 0x802fc);
    }
  }
  iVar5 = *(int *)(DAT_00080324 + 0x80146);
  if (*(int *)(iVar5 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_0008032c + 0x80162,0x42f,DAT_00080328 + 0x80156,
                        *(undefined4 *)(this + 0x60));
  }
  (**(code **)((*(undefined4 **)(this + 100))[1] + 0x14))(**(undefined4 **)(this + 100),2);
  if (*(QCamera3HeapMemory **)(this + 0x117fe4) != (QCamera3HeapMemory *)0x0) {
    QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x117fe4));
    piVar1 = *(int **)(this + 0x117fe4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))();
    }
    *(int **)(this + 0x117fe4) = (int *)0x0;
    *(undefined4 *)(this + 0x117fe8) = 0;
  }
  uVar2 = (**(code **)((*(undefined4 **)(this + 100))[1] + 8))(**(undefined4 **)(this + 100));
  *(undefined4 *)(this + 100) = 0;
  __mutex = *(pthread_mutex_t **)(DAT_00080330 + 0x801b0);
  pthread_mutex_lock(__mutex);
  *(undefined4 *)(*(int *)(DAT_00080334 + 0x801c6) + *(int *)(this + 0x60) * 4) = 0xdeadbeef;
  pthread_mutex_unlock(__mutex);
  property_get(DAT_00080338 + 0x801dc,acStack128,DAT_0008033c + 0x801de);
  iVar3 = atoi(acStack128);
  if (iVar3 == 1) {
    pthread_mutex_lock(__mutex);
    cVar4 = **(char **)(DAT_00080340 + 0x801f6) + -1;
    **(char **)(DAT_00080340 + 0x801f6) = cVar4;
    if (cVar4 == '\0') {
      FUN_00098cfc((sp *)&local_84);
      android::Parcel::Parcel(aPStack192);
      android::Parcel::Parcel(aPStack252);
      android::Parcel::writeInt32((int)aPStack192);
      if (local_84 != (int *)0x0) {
        (**(code **)(*local_84 + 0x18))(local_84,0x1e,aPStack192,aPStack252);
      }
      android::Parcel::_Parcel(aPStack252);
      android::Parcel::_Parcel(aPStack192);
      if (local_84 != (int *)0x0) {
        android::RefBase::decStrong((void *)((int)local_84 + *(int *)(*local_84 + -0xc)));
      }
    }
    pthread_mutex_unlock(__mutex);
  }
  if (*(void **)(this + 0x174) != (void *)0x0) {
    free(*(void **)(this + 0x174));
    *(undefined4 *)(this + 0x174) = 0;
  }
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  iVar3 = QCameraFlash::releaseFlashFromCamera(this_00,*(int *)(this + 0x60));
  bVar8 = iVar3 != 0;
  if (bVar8) {
    iVar3 = *(int *)(iVar5 + 0x24);
  }
  if (bVar8 && iVar3 != 0) {
    mm_camera_debug_log(1,2,DAT_00080348 + 0x8028e,0x458,DAT_00080344 + 0x80282,
                        *(undefined4 *)(this + 0x60));
  }
  *(undefined4 *)(this + 0x117fd8) = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_00080350 + 0x802bc,0x45d,DAT_0008034c + 0x802ac,
                        *(undefined4 *)(this + 0x60),uVar2);
  }
  if (*piVar7 != 0) {
    if ((**(byte **)(DAT_00080354 + 0x802ca) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00080358 + 0x802d8) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar6 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}

