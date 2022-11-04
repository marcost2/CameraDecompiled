
/* qcamera::QCamera2HardwareInterface::openCamera() */

int __thiscall qcamera::QCamera2HardwareInterface::openCamera(QCamera2HardwareInterface *this)

{
  int *piVar1;
  char cVar2;
  QCameraFlash *this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  pthread_mutex_t *__mutex;
  int *piVar11;
  Parcel aPStack532 [60];
  Parcel aPStack472 [60];
  int *local_19c;
  int *local_198 [68];
  undefined4 local_88;
  undefined local_84;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  piVar11 = *(int **)(DAT_000b2770 + 0xb2430);
  local_20 = *piVar11;
  local_84 = 0;
  local_88 = 0;
  local_198[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_198,(char *)(DAT_000b2774 + 0xb2448));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_198);
  piVar1 = (int *)(this + 0x60);
  if (*piVar1 != 0) {
    if (*(int *)(*(int *)(DAT_000b27fc + 0xb245e) + 0x20) == 0) {
      iVar10 = -0x11;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b2804 + 0xb2478,0x97d,DAT_000b2800 + 0xb2470);
      iVar10 = -0x11;
    }
    goto LAB_000b27ce;
  }
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  iVar10 = QCameraFlash::reserveFlashForCamera(this_00,*(int *)(this + 0x5c));
  if (iVar10 < 0) {
    if (*(int *)(*(int *)(DAT_000b2808 + 0xb2532) + 0x20) == 0) {
      iVar10 = -0x80000000;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b2810 + 0xb2550,0x988,DAT_000b280c + 0xb2544,
                          *(undefined4 *)(this + 0x5c));
      iVar10 = -0x80000000;
    }
    goto LAB_000b27ce;
  }
  iVar10 = queueDeferredWork((DeferredWorkCmd)this,5);
  *(int *)(this + 0x1db4) = iVar10;
  if (iVar10 == 0) {
    if (*(int *)(*(int *)(DAT_000b2814 + 0xb255e) + 0x20) == 0) {
      iVar10 = -0xc;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b281c + 0xb2578,0x991,DAT_000b2818 + 0xb2570);
      iVar10 = -0xc;
    }
    goto LAB_000b27ce;
  }
  uVar3 = *(uint *)(this + 0x5c);
  iVar10 = *(int *)(*(int *)(DAT_000b2820 + 0xb24b0) + uVar3 * 4);
  if (iVar10 == 0) {
    iVar4 = *(int *)(DAT_000b2840 + 0xb2586);
    if (*(int *)(iVar4 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b2848 + 0xb25a2,0x9b6,DAT_000b2844 + 0xb259a);
      uVar3 = *(uint *)(this + 0x5c);
    }
    iVar10 = camera_open(uVar3 & 0xff,piVar1);
    if (iVar10 == 0) {
      iVar10 = initCapabilities(*(uint *)(this + 0x5c),*(mm_camera_vtbl_t **)(this + 0x60));
      if (iVar10 == 0) {
        uVar6 = *(undefined4 *)(DAT_000b285c + 0xb2650);
        uVar8 = **(undefined4 **)(this + 0x60);
        pcVar9 = *(code **)((*(undefined4 **)(this + 0x60))[1] + 4);
        goto LAB_000b2656;
      }
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b2858 + 0xb2640,0x9c0,DAT_000b2854 + 0xb2638);
      }
      iVar10 = -0x80000000;
LAB_000b279c:
      if (*(int *)(this + 0x1de8) != 0) {
        deinitJpegHandle(this);
      }
      (**(code **)(((undefined4 *)*piVar1)[1] + 8))(*(undefined4 *)*piVar1);
      *piVar1 = 0;
    }
    else if (*(int *)(iVar4 + 0x20) != 0) {
      iVar4 = *piVar1;
      uVar8 = 0x9bb;
      iVar5 = DAT_000b284c + 0xb25c8;
      iVar7 = DAT_000b2850 + 0xb25d6;
LAB_000b25d4:
      mm_camera_debug_log(1,1,iVar7,uVar8,iVar5,iVar10,iVar4);
    }
LAB_000b27b8:
    waitDeferredWork(this,(uint *)(this + 0x1dac));
  }
  else {
    iVar10 = *(int *)(iVar10 + 0x3010);
    local_80 = CONCAT44(iVar10 + 0x117af7U & -iVar10,10);
    iVar10 = queueDeferredWork((DeferredWorkCmd)this,3);
    *(int *)(this + 0x1dac) = iVar10;
    if (iVar10 != 0) {
      iVar10 = camera_open(this[0x5c],piVar1);
      if (iVar10 == 0) {
        uVar8 = **(undefined4 **)(this + 0x60);
        pcVar9 = *(code **)((*(undefined4 **)(this + 0x60))[1] + 4);
        uVar6 = *(undefined4 *)(DAT_000b283c + 0xb261a);
LAB_000b2656:
        (*pcVar9)(uVar8,uVar6,this);
        iVar10 = queueDeferredWork((DeferredWorkCmd)this,6);
        *(int *)(this + 0x1db8) = iVar10;
        if (iVar10 != 0) {
          this[100] = (QCamera2HardwareInterface)0x1;
          property_get(DAT_000b286c + 0xb2684,&local_80,DAT_000b2870 + 0xb2686);
          iVar10 = atoi((char *)&local_80);
          if (iVar10 == 1) {
            __mutex = *(pthread_mutex_t **)(DAT_000b2874 + 0xb2698);
            pthread_mutex_lock(__mutex);
            cVar2 = **(char **)(DAT_000b2878 + 0xb26a4);
            **(char **)(DAT_000b2878 + 0xb26a4) = cVar2 + '\x01';
            if (cVar2 == '\0') {
              FUN_00098cfc((sp *)&local_19c);
              android::Parcel::Parcel(aPStack472);
              android::Parcel::Parcel(aPStack532);
              android::Parcel::writeInt32((int)aPStack472);
              if (local_19c != (int *)0x0) {
                (**(code **)(*local_19c + 0x18))(local_19c,0x1e,aPStack472,aPStack532);
              }
              android::Parcel::_Parcel(aPStack532);
              android::Parcel::_Parcel(aPStack472);
              if (local_19c != (int *)0x0) {
                android::RefBase::decStrong((void *)((int)local_19c + *(int *)(*local_19c + -0xc)));
              }
            }
            pthread_mutex_unlock(__mutex);
          }
          local_80 = 0;
          uStack120 = 0;
          uStack48 = 0;
          uStack44 = 0;
          local_40 = 0;
          uStack56 = 0;
          local_34 = 0;
          local_50 = 0;
          uStack72 = 0;
          local_60 = 0;
          uStack88 = 0;
          local_70 = 0;
          uStack104 = 0;
          property_get(DAT_000b287c + 0xb273c,&local_80,DAT_000b2880 + 0xb273e);
          iVar10 = atoi((char *)&local_80);
          if (iVar10 != 0) {
            iVar10 = 1;
          }
          this[0x1e24] = SUB41(iVar10,0);
          (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x8c))
                    (**(undefined4 **)(this + 0x60),
                     *(int *)(DAT_000b2884 + 0xb275c) + *(int *)(this + 0x5c) * 4);
          iVar10 = 0;
          goto LAB_000b27ce;
        }
        if (*(int *)(*(int *)(DAT_000b2860 + 0xb277e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b2868 + 0xb2796,0x9d4,DAT_000b2864 + 0xb278e);
        }
        iVar10 = -0xc;
        goto LAB_000b279c;
      }
      if (*(int *)(*(int *)(DAT_000b2830 + 0xb2504) + 0x20) != 0) {
        iVar4 = *piVar1;
        uVar8 = 0x9ae;
        iVar5 = DAT_000b2834 + 0xb2518;
        iVar7 = DAT_000b2838 + 0xb2526;
        goto LAB_000b25d4;
      }
      goto LAB_000b27b8;
    }
    if (*(int *)(*(int *)(DAT_000b2824 + 0xb25e6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b282c + 0xb25fe,0x9a6,DAT_000b2828 + 0xb25f6);
    }
    iVar10 = -0xc;
  }
  waitDeferredWork(this,(uint *)(this + 0x1db4));
LAB_000b27ce:
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_198);
  if (local_198[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_198[0] + *(int *)(*local_198[0] + -0xc)));
  }
  if (*piVar11 == local_20) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

