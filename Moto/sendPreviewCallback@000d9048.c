
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::sendPreviewCallback(qcamera::QCameraStream*,
   qcamera::QCameraMemory*, unsigned int) */

int __thiscall
qcamera::QCamera2HardwareInterface::sendPreviewCallback
          (QCamera2HardwareInterface *this,QCameraStream *param_1,QCameraMemory *param_2,
          uint param_3)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  void **ppvVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  size_t sVar13;
  int iVar14;
  int *unaff_r7;
  int iVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong lStack80;
  undefined8 local_48;
  undefined8 uStack64;
  uint local_34;
  size_t local_30;
  int local_2c;
  int local_28;
  
  piVar16 = *(int **)(DAT_000d93bc + 0xd9058);
  local_28 = *piVar16;
  if (param_1 != (QCameraStream *)0x0) {
    unaff_r7 = (int *)param_2;
  }
  if (param_1 != (QCameraStream *)0x0 && param_2 != (QCameraMemory *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0x24))(*(int **)(param_1 + 0x104),0);
    if (iVar1 != 0) {
      QCameraStream::getFrameDimension(param_1,(cam_dimension_t *)&local_30);
      QCameraStream::getFormat(param_1,&local_34);
      iVar7 = local_2c;
      if (((local_34 < 8) && ((1 << (local_34 & 0xff) & 0x9eU) != 0)) || (local_34 == 0x67)) {
        iVar2 = *(int *)(iVar1 + 0x28);
        iVar12 = *(int *)(iVar1 + 0x58);
        if (local_34 == 4) {
          iVar1 = *(int *)(iVar1 + 0x90) * *(int *)(iVar1 + 0x88) +
                  *(int *)(iVar1 + 0x60) * iVar12 + *(int *)(iVar1 + 0x30) * iVar2;
        }
        else {
          iVar10 = *(int *)(iVar1 + 0x30) * iVar2;
          iVar5 = *(int *)(iVar1 + 0x60) * iVar12 + iVar10;
          iVar1 = (local_2c / 2 + local_2c) * local_30;
          if (iVar1 - iVar5 != 0) {
            ppvVar4 = (void **)(**(code **)(*unaff_r7 + 0x1c))(unaff_r7,param_3,0);
            ppvVar8 = (void **)(**(code **)(this + 0x4c8))
                                         (0xffffffff,iVar1,1,*(undefined4 *)(this + 0x4d0));
            if ((ppvVar8 == (void **)0x0) || (*ppvVar8 == (void *)0x0)) {
              if (*(int *)(*(int *)(DAT_000d9400 + 0xd9368) + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000d9408 + 0xd9380,0x539,DAT_000d9404 + 0xd9378);
              }
              iVar1 = -0xc;
              goto LAB_000d9116;
            }
            if (0 < local_2c) {
              __aeabi_memcpy8(*ppvVar8,*ppvVar4,local_30);
              if (1 < local_2c) {
                iVar14 = 1;
                sVar13 = local_30;
                iVar15 = iVar2;
                do {
                  __aeabi_memcpy8((void *)((int)*ppvVar8 + sVar13),(void *)((int)*ppvVar4 + iVar15),
                                  local_30);
                  iVar14 = iVar14 + 1;
                  iVar15 = iVar15 + iVar2;
                  sVar13 = sVar13 + local_30;
                } while (iVar14 < local_2c);
              }
              if (1 < local_2c) {
                iVar2 = 0;
                iVar7 = iVar7 * local_30;
                do {
                  __aeabi_memcpy8((void *)((int)*ppvVar8 + iVar7),(void *)((int)*ppvVar4 + iVar10),
                                  local_30);
                  iVar2 = iVar2 + 1;
                  iVar7 = iVar7 + local_30;
                  iVar10 = iVar10 + iVar12;
                } while (iVar2 < local_2c / 2);
                ppvVar3 = (void **)0x0;
                goto LAB_000d9174;
              }
            }
            ppvVar3 = (void **)0x0;
            goto LAB_000d9174;
          }
        }
        iVar5 = iVar1;
        pcVar11 = *(code **)(this + 0x4c8);
        uVar9 = QCameraMemory::getFd((QCameraMemory *)unaff_r7,param_3);
        ppvVar3 = (void **)(*pcVar11)(uVar9,iVar5,1,*(undefined4 *)(this + 0x4d0));
        if ((ppvVar3 == (void **)0x0) || (*ppvVar3 == (void *)0x0)) {
          if (*(int *)(*(int *)(DAT_000d93f4 + 0xd920c) + 0x20) == 0) goto LAB_000d935c;
          uVar9 = 0x530;
          iVar1 = DAT_000d93f8 + 0xd9220;
          iVar7 = DAT_000d93fc + 0xd9228;
          goto LAB_000d9290;
        }
        ppvVar8 = (void **)0x0;
        iVar1 = iVar5;
        ppvVar4 = ppvVar3;
      }
      else {
        iVar1 = (local_2c / 2 + local_2c) * local_30;
        iVar7 = *(int *)(DAT_000d93d8 + 0xd923c);
        if (*(int *)(iVar7 + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000d93e0 + 0xd9256,0x55a,DAT_000d93dc + 0xd924c,iVar1);
        }
        uVar17 = (**(code **)(this + 0x4c8))(0xffffffff,iVar1,1,*(undefined4 *)(this + 0x4d0));
        pvVar6 = (void *)((ulonglong)uVar17 >> 0x20);
        ppvVar8 = (void **)uVar17;
        if (ppvVar8 != (void **)0x0) {
          pvVar6 = *ppvVar8;
        }
        if (ppvVar8 == (void **)0x0 || pvVar6 == (void *)0x0) {
          if (*(int *)(iVar7 + 0x20) == 0) {
LAB_000d935c:
            iVar1 = -0xc;
            goto LAB_000d9116;
          }
          uVar9 = 0x55d;
          iVar1 = DAT_000d940c + 0xd928a;
          iVar7 = DAT_000d9410 + 0xd9292;
LAB_000d9290:
          mm_camera_debug_log(1,1,iVar7,uVar9,iVar1);
          iVar1 = -0xc;
          goto LAB_000d9116;
        }
        ppvVar3 = (void **)0x0;
        ppvVar4 = (void **)0x0;
        iVar5 = 0;
      }
LAB_000d9174:
      local_68 = 0;
      local_58 = 0;
      lStack80 = 0;
      local_48._4_4_ = 0;
      uStack64 = 0;
      local_6c = 0x10;
      local_70 = 1;
      if (iVar5 == 0) {
        ppvVar4 = ppvVar8;
      }
      if (iVar1 == 0) {
        ppvVar4 = ppvVar8;
      }
      if (iVar1 != iVar5) {
        ppvVar4 = ppvVar8;
      }
      local_60 = ZEXT48(ppvVar4);
      ppvVar4 = ppvVar3;
      if ((ppvVar3 != (void **)0x0) || (ppvVar4 = ppvVar8, ppvVar8 != (void **)0x0)) {
        lStack80 = ZEXT48(ppvVar4) << 0x20;
        local_48._4_4_ = *(undefined4 *)(DAT_000d93e4 + 0xd91c0);
      }
      local_48 = CONCAT44(local_48._4_4_,this);
      iVar1 = QCameraCbNotifier::notifyCallback
                        ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_70);
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(DAT_000d93e8 + 0xd91e0) + 0x24) != 0) {
          mm_camera_debug_log(1,2,DAT_000d93f0 + 0xd91f8,0x575,DAT_000d93ec + 0xd91f0);
        }
        if (ppvVar3 == (void **)0x0) {
          if (ppvVar8 == (void **)0x0) goto LAB_000d9116;
          pcVar11 = (code *)ppvVar8[3];
        }
        else {
          pcVar11 = (code *)ppvVar3[3];
          ppvVar8 = ppvVar3;
        }
        (*pcVar11)(ppvVar8);
      }
      goto LAB_000d9116;
    }
    if (*(int *)(*(int *)(DAT_000d93cc + 0xd90f8) + 0x20) != 0) {
      uVar9 = 0x4ff;
      iVar1 = DAT_000d93d0 + 0xd9108;
      iVar7 = DAT_000d93d4 + 0xd9110;
      goto LAB_000d910e;
    }
  }
  else if (*(int *)(*(int *)(DAT_000d93c0 + 0xd9070) + 0x20) != 0) {
    uVar9 = 0x4f8;
    iVar1 = DAT_000d93c4 + 0xd9082;
    iVar7 = DAT_000d93c8 + 0xd908a;
LAB_000d910e:
    mm_camera_debug_log(1,1,iVar7,uVar9,iVar1);
  }
  iVar1 = -0x16;
LAB_000d9116:
  if (*piVar16 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

