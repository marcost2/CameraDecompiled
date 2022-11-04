
/* qcamera::QCamera3HardwareInterface::openCamera() */

int __thiscall qcamera::QCamera3HardwareInterface::openCamera(QCamera3HardwareInterface *this)

{
  int *piVar1;
  char cVar2;
  QCameraFlash *this_00;
  void *pvVar3;
  QCamera3HeapMemory *this_01;
  int *this_02;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  pthread_mutex_t *ppVar8;
  int **ppiVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  undefined8 uVar15;
  Parcel aPStack256 [60];
  Parcel aPStack196 [60];
  int *local_88;
  char acStack132 [92];
  int local_28;
  
  piVar12 = *(int **)(DAT_00080ab0 + 0x8075e);
  local_28 = *piVar12;
  piVar10 = *(int **)(DAT_00080ab4 + 0x8076c);
  if (*piVar10 != 0) {
    if ((**(byte **)(DAT_00080ab8 + 0x80778) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00080abc + 0x80788) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00080b88 + 0x80b72);
    }
  }
  piVar1 = (int *)(this + 100);
  if (*piVar1 != 0) {
    if (*(int *)(*(int *)(DAT_00080ac0 + 0x8079e) + 0x20) == 0) {
      iVar7 = -0x11;
    }
    else {
      mm_camera_debug_log(1,1,DAT_00080ac8 + 0x807b6,0x3a2,DAT_00080ac4 + 0x807ae);
      iVar7 = -0x11;
    }
    goto LAB_00080834;
  }
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  iVar7 = QCameraFlash::reserveFlashForCamera(this_00,*(int *)(this + 0x60));
  if (iVar7 < 0) {
    if (*(int *)(*(int *)(DAT_00080b8c + 0x80812) + 0x20) != 0) {
      uVar6 = 0x3ad;
      iVar7 = DAT_00080b90 + 0x80822;
      iVar13 = DAT_00080b94 + 0x8082e;
LAB_0008082c:
      mm_camera_debug_log(1,1,iVar13,uVar6,iVar7);
    }
LAB_00080830:
    iVar7 = -0x80000000;
    goto LAB_00080834;
  }
  iVar7 = camera_open(this[0x60],piVar1);
  if (iVar7 != 0) {
    if (*(int *)(*(int *)(DAT_00080acc + 0x807e4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00080b9c + 0x80802,0x3b3,DAT_00080b98 + 0x807f4,iVar7,*piVar1);
    }
    goto LAB_00080834;
  }
  puVar5 = (undefined4 *)*piVar1;
  if (puVar5 == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_00080ba0 + 0x80978) + 0x20) == 0) {
      iVar7 = -0x13;
    }
    else {
      mm_camera_debug_log(1,1,DAT_00080ba8 + 0x80994,0x3b8,DAT_00080ba4 + 0x80988,0);
      iVar7 = -0x13;
    }
    goto LAB_00080834;
  }
  iVar7 = (**(code **)(puVar5[1] + 4))(*puVar5,*(undefined4 *)(DAT_00080bac + 0x80880),this);
  if (iVar7 < 0) {
    iVar7 = -0x7ffffffe;
    if (*(int *)(*(int *)(DAT_00080bb0 + 0x809a8) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00080bb8 + 0x809c4,0x3c0,DAT_00080bb4 + 0x809bc);
    }
    goto LAB_00080834;
  }
  pvVar3 = malloc((size_t)"sion");
  *(void **)(this + 0x174) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_00080bd4 + 0x809ce) + 0x20) == 0) goto LAB_00080b60;
    uVar6 = 0x3ca;
    iVar7 = DAT_00080bd8 + 0x809e2;
    iVar13 = DAT_00080bdc + 0x809ea;
  }
  else {
    __aeabi_memclr8(pvVar3,(size_t)"sion");
    this[0x1a8] = (QCamera3HardwareInterface)0x1;
    property_get(DAT_00080bbc + 0x808c6,acStack132,DAT_00080bc0 + 0x808c8);
    iVar7 = atoi(acStack132);
    if (iVar7 == 1) {
      ppVar8 = *(pthread_mutex_t **)(DAT_00080bc4 + 0x808da);
      pthread_mutex_lock(ppVar8);
      cVar2 = **(char **)(DAT_00080bc8 + 0x808e6);
      **(char **)(DAT_00080bc8 + 0x808e6) = cVar2 + '\x01';
      if (cVar2 == '\0') {
        FUN_00098cfc((sp *)&local_88);
        android::Parcel::Parcel(aPStack196);
        android::Parcel::Parcel(aPStack256);
        android::Parcel::writeInt32((int)aPStack196);
        if (local_88 != (int *)0x0) {
          (**(code **)(*local_88 + 0x18))(local_88,0x1e,aPStack196,aPStack256);
        }
        android::Parcel::_Parcel(aPStack256);
        android::Parcel::_Parcel(aPStack196);
        if (local_88 != (int *)0x0) {
          android::RefBase::decStrong((void *)((int)local_88 + *(int *)(*local_88 + -0xc)));
        }
      }
      pthread_mutex_unlock(ppVar8);
    }
    property_get(DAT_00080bcc + 0x80952,acStack132,DAT_00080bd0 + 0x80954);
    *(undefined4 *)(this + 0x118008) = 0;
    *(undefined4 *)(this + 0x11800c) = 0;
    iVar7 = atoi(acStack132);
    if (iVar7 == 1) {
      uVar15 = QCameraCommon::getBootToMonoTimeOffset();
      *(int *)(this + 0x118008) = (int)uVar15;
      *(int *)(this + 0x11800c) = (int)((ulonglong)uVar15 >> 0x20);
    }
    iVar13 = *(int *)(DAT_00080be0 + 0x809f8);
    if (*(int *)(iVar13 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_00080be8 + 0x80a18,0x3f2,DAT_00080be4 + 0x80a10);
    }
    ppVar8 = *(pthread_mutex_t **)(DAT_00080bec + 0x80a20);
    pthread_mutex_lock(ppVar8);
    iVar7 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x8c))
                      (**(undefined4 **)(this + 100),
                       *(int *)(DAT_00080bf0 + 0x80a30) + *(int *)(this + 0x60) * 4);
    pthread_mutex_unlock(ppVar8);
    if (iVar7 < 0) {
      if (*(int *)(iVar13 + 0x20) != 0) {
        uVar6 = 0x3fb;
        iVar7 = DAT_00080bf4 + 0x80aa8;
        iVar13 = (int)&DAT_00080ab0 + DAT_00080bf8;
        goto LAB_0008082c;
      }
      goto LAB_00080830;
    }
    ppiVar9 = (int **)(this + 0x117fe4);
    this_01 = (QCamera3HeapMemory *)operator_new(0x610);
    this_02 = (int *)QCamera3HeapMemory::QCamera3HeapMemory(this_01,1);
    *ppiVar9 = this_02;
    iVar7 = QCamera3HeapMemory::allocate((QCamera3HeapMemory *)this_02,0x18);
    if (iVar7 == 0) {
      uVar11 = *(undefined4 *)*piVar1;
      pcVar14 = *(code **)(((undefined4 *)*piVar1)[1] + 0xc);
      uVar6 = QCamera3Memory::getFd((QCamera3Memory *)*ppiVar9,0);
      uVar4 = (**(code **)(**ppiVar9 + 8))(*ppiVar9,0);
      iVar7 = (*pcVar14)(uVar11,2,uVar6,0x18,uVar4);
      if (-1 < iVar7) {
        iVar7 = 0;
        uVar6 = (**(code **)(**ppiVar9 + 8))(*ppiVar9,0);
        *(undefined4 *)(this + 0x117fe8) = uVar6;
        if (*(int *)(iVar13 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_00080c10 + 0x80b40,0x418,DAT_00080c0c + 0x80b34,
                              *(undefined4 *)(this + 0x60));
          iVar7 = 0;
        }
        goto LAB_00080834;
      }
      if (*(int *)(iVar13 + 0x20) == 0) goto LAB_00080b60;
      uVar6 = 0x410;
      iVar7 = DAT_00080c04 + 0x80b58;
      iVar13 = DAT_00080c08 + 0x80b60;
    }
    else {
      if (*(int *)(iVar13 + 0x20) == 0) {
LAB_00080b60:
        iVar7 = -0xc;
        goto LAB_00080834;
      }
      uVar6 = 0x405;
      iVar7 = DAT_00080bfc + 0x80a82;
      iVar13 = DAT_00080c00 + 0x80a8a;
    }
  }
  mm_camera_debug_log(1,1,iVar13,uVar6,iVar7);
  iVar7 = -0xc;
LAB_00080834:
  if (*piVar10 != 0) {
    if ((**(byte **)(DAT_00080ad0 + 0x8083e) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00080ad4 + 0x8084e) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar12 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

