
/* qcamera::QCameraMuxer::take_picture(camera_device*) */

int qcamera::QCameraMuxer::take_picture(camera_device *param_1)

{
  uint uVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *pEVar3;
  int iVar4;
  undefined4 uVar5;
  QCamera2HardwareInterface *pQVar6;
  int iVar7;
  EVP_PKEY_CTX **ppEVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char acStack132 [92];
  int local_28;
  
  piVar9 = *(int **)(DAT_000c2c04 + 0xc287a);
  local_28 = *piVar9;
  iVar11 = *(int *)(DAT_000c2c08 + 0xc2884);
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c2c10 + 0xc28a0,0x479,DAT_000c2c0c + 0xc2898);
  }
  ppEVar8 = *(EVP_PKEY_CTX ***)(DAT_000c2c14 + 0xc28a8);
  if (*ppEVar8 == (EVP_PKEY_CTX *)0x0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar5 = 0x47a;
      iVar11 = DAT_000c2c30 + 0xc2aaa;
      iVar13 = DAT_000c2c34 + 0xc2ab2;
      goto LAB_000c2ab0;
    }
  }
  else if ((param_1 == (camera_device *)0x0) || (iVar13 = *(int *)(param_1 + 0x44), iVar13 == 0)) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar5 = 0x47f;
      iVar11 = DAT_000c2c28 + 0xc2a90;
      iVar13 = DAT_000c2c2c + 0xc2a98;
      goto LAB_000c2ab0;
    }
  }
  else {
    property_get(DAT_000c2c18 + 0xc28ce,acStack132,DAT_000c2c1c + 0xc28d0);
    uVar1 = atoi(acStack132);
    pEVar3 = *ppEVar8;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    pEVar3[0xd5] = SUB41(uVar1,0);
    uVar1 = uVar1 & 1 < *(int *)(iVar13 + 0x54);
    pEVar3[0xd5] = SUB41(uVar1,0);
    if (*(int *)(iVar11 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c2c24 + 0xc2912,0x48a,DAT_000c2c20 + 0xc2906,uVar1);
      pEVar3 = *ppEVar8;
    }
    if (*(uint *)(pEVar3 + 0x20) != 0) {
      uVar1 = *(uint *)(iVar13 + 0x54);
LAB_000c2926:
      pEVar3 = *ppEVar8;
      if (uVar1 != 0) {
        uVar1 = 0;
        do {
          iVar2 = *(int *)(pEVar3 + 0x2c) + *(int *)(iVar13 + 0x5c + uVar1 * 4) * 0x38;
          if (iVar2 == 0) {
            if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
            uVar5 = 0x4ae;
            iVar11 = DAT_000c2c48 + 0xc2b3e;
            iVar13 = DAT_000c2c4c + 0xc2b46;
            goto LAB_000c2bae;
          }
          pQVar6 = *(QCamera2HardwareInterface **)(iVar2 + 0x30);
          if (pQVar6 == (QCamera2HardwareInterface *)0x0) {
            if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
            uVar5 = 0x4b1;
            iVar11 = DAT_000c2c50 + 0xc2b58;
            iVar13 = DAT_000c2c54 + 0xc2b60;
            goto LAB_000c2bae;
          }
          if (*(int *)(iVar2 + 0x10) == 0) {
            iVar2 = QCamera2HardwareInterface::prepare_snapshot(*(camera_device **)(iVar2 + 0x34));
            if (iVar2 != 0) {
              if (*(int *)(iVar11 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c2fcc + 0xc2cb4,0x4b6,DAT_000c2fc8 + 0xc2cac);
              }
              goto LAB_000c2ab8;
            }
            pEVar3 = *ppEVar8;
          }
          iVar2 = QCamera2HardwareInterface::setMpoComposition(pQVar6,(bool)pEVar3[0xd5]);
          pEVar3 = *ppEVar8;
          if (iVar2 != 0) {
            pEVar3[0xd5] = (EVP_PKEY_CTX)0x0;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(iVar13 + 0x54));
      }
      QCameraQueue::init((QCameraQueue *)(pEVar3 + 0x3c),pEVar3);
      QCameraQueue::init((QCameraQueue *)(*ppEVar8 + 0x60),ctx);
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(*ppEVar8 + 0x84),1,'\0','\0');
      uVar1 = *(uint *)(iVar13 + 0x54);
      if (uVar1 != 0) {
        iVar12 = iVar13 + 0x5c;
        uVar10 = 0;
        do {
          iVar2 = *(int *)(*ppEVar8 + 0x2c) + *(int *)(iVar12 + uVar10 * 4) * 0x38;
          if (iVar2 == 0) {
            if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
            uVar5 = 0x4cf;
            iVar11 = DAT_000c2c60 + 0xc2b8e;
            iVar13 = DAT_000c2c64 + 0xc2b96;
            goto LAB_000c2bae;
          }
          if (*(int *)(iVar2 + 0x30) == 0) {
            if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
            uVar5 = 0x4d2;
            iVar11 = DAT_000c2c68 + 0xc2ba8;
            iVar13 = DAT_000c2c6c + 0xc2bb0;
            goto LAB_000c2bae;
          }
          if (((*ppEVar8)[0xd5] != (EVP_PKEY_CTX)0x0) || (*(int *)(iVar2 + 0x10) == 0)) {
            iVar2 = QCamera2HardwareInterface::pre_take_picture(*(camera_device **)(iVar2 + 0x34));
            if (iVar2 != 0) {
              if (*(int *)(iVar11 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c2fd4 + 0xc2c90,0x4d8,DAT_000c2fd0 + 0xc2c88);
              }
              goto LAB_000c2ab8;
            }
            uVar1 = *(uint *)(iVar13 + 0x54);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar1);
        if (uVar1 != 0) {
          uVar10 = 0;
          iVar2 = *(int *)(*ppEVar8 + 0x2c);
          do {
            iVar4 = iVar2 + *(int *)(iVar12 + uVar10 * 4) * 0x38;
            if (iVar4 == 0) {
              if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2ab4;
              uVar5 = 0x4e1;
              iVar11 = DAT_000c2fd8 + 0xc2cce;
              iVar13 = DAT_000c2fdc + 0xc2cd6;
              goto LAB_000c2ab0;
            }
            iVar4 = *(int *)(iVar4 + 0x30);
            if (iVar4 == 0) {
              if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2ab4;
              uVar5 = 0x4e4;
              iVar11 = DAT_000c2fe0 + 0xc2cec;
              iVar13 = DAT_000c2fe4 + 0xc2cf4;
              goto LAB_000c2ab0;
            }
            if (*(char *)(iVar4 + 0x1be8) != '\0') {
              iVar4 = *(int *)(iVar13 + 0x5c);
              if (iVar2 + iVar4 * 0x38 == 0) goto LAB_000c2d42;
              iVar7 = 0x18;
              goto LAB_000c2d04;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar1);
          goto LAB_000c2a30;
        }
      }
      goto LAB_000c2eaa;
    }
    iVar2 = *(int *)(pEVar3 + 0x2c) + *(int *)(iVar13 + 0x5c) * 0x38;
    if (iVar2 == 0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        uVar5 = 0x48f;
        iVar11 = DAT_000c2c40 + 0xc2b22;
        iVar13 = DAT_000c2c44 + 0xc2b2a;
        goto LAB_000c2ab0;
      }
    }
    else {
      pQVar6 = *(QCamera2HardwareInterface **)(iVar2 + 0x30);
      if (pQVar6 != (QCamera2HardwareInterface *)0x0) {
        iVar2 = QCamera2HardwareInterface::getJpegHandleInfo
                          (pQVar6,(mm_jpeg_ops_t *)(pEVar3 + 4),(mm_jpeg_mpo_ops_t *)(pEVar3 + 0x18)
                           ,(uint *)(pEVar3 + 0x20));
        if (iVar2 != 0) {
          if (*(int *)(iVar11 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000c2c3c + 0xc2b0a,0x497,DAT_000c2c38 + 0xc2b02);
          }
          goto LAB_000c2ab8;
        }
        uVar1 = *(uint *)(iVar13 + 0x54);
        if (1 < uVar1) {
          iVar12 = 0x18;
          do {
            pEVar3 = *ppEVar8;
            iVar2 = *(int *)(pEVar3 + 0x2c) + *(int *)(iVar13 + iVar12 * 4) * 0x38;
            if (iVar2 == 0) {
              if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2ab4;
              uVar5 = 0x49d;
              iVar11 = DAT_000c2fb0 + 0xc2d76;
              iVar13 = DAT_000c2fb4 + 0xc2d7e;
              goto LAB_000c2ab0;
            }
            pQVar6 = *(QCamera2HardwareInterface **)(iVar2 + 0x30);
            if (pQVar6 == (QCamera2HardwareInterface *)0x0) {
              if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2ab4;
              uVar5 = 0x4a0;
              iVar11 = DAT_000c2fb8 + 0xc2d94;
              iVar13 = DAT_000c2fbc + 0xc2d9c;
              goto LAB_000c2ab0;
            }
            iVar2 = QCamera2HardwareInterface::setJpegHandleInfo
                              (pQVar6,(mm_jpeg_ops_t *)(pEVar3 + 4),
                               (mm_jpeg_mpo_ops_t *)(pEVar3 + 0x18),*(uint *)(pEVar3 + 0x20));
            if (iVar2 != 0) {
              if (*(int *)(iVar11 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000c2fc4 + 0xc2dc2,0x4a5,DAT_000c2fc0 + 0xc2db6,
                                    iVar12 + -0x17);
              }
              goto LAB_000c2ab8;
            }
            uVar1 = *(uint *)(iVar13 + 0x54);
            uVar10 = iVar12 - 0x16;
            iVar12 = iVar12 + 1;
          } while (uVar10 < uVar1);
        }
        goto LAB_000c2926;
      }
      if (*(int *)(iVar11 + 0x20) != 0) {
        uVar5 = 0x492;
        iVar11 = DAT_000c2c58 + 0xc2b74;
        iVar13 = DAT_000c2c5c + 0xc2b7c;
        goto LAB_000c2ab0;
      }
    }
  }
  goto LAB_000c2ab4;
  while( true ) {
    iVar2 = QCamera2HardwareInterface::setRecordingHintValue(iVar2);
    if (iVar2 != 0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c3014 + 0xc2f48,0x506,DAT_000c3010 + 0xc2f40);
      }
      goto LAB_000c2ab8;
    }
    uVar1 = uVar1 + 1;
    if (*(uint *)(iVar13 + 0x54) <= uVar1) break;
LAB_000c2e48:
    iVar2 = *(int *)(*ppEVar8 + 0x2c) + *(int *)(iVar12 + uVar1 * 4) * 0x38;
    if (iVar2 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
      uVar5 = 0x4ff;
      iVar11 = DAT_000c2fe8 + 0xc2f04;
      iVar13 = DAT_000c2fec + 0xc2f0c;
      goto LAB_000c2bae;
    }
    iVar2 = *(int *)(iVar2 + 0x30);
    if (iVar2 == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
      uVar5 = 0x502;
      iVar11 = DAT_000c3008 + 0xc2f22;
      iVar13 = DAT_000c300c + 0xc2f2a;
      goto LAB_000c2bae;
    }
  }
  if (*(uint *)(iVar13 + 0x54) != 0) {
    uVar10 = 0;
    do {
      iVar2 = *(int *)(*ppEVar8 + 0x2c) + *(int *)(iVar12 + uVar10 * 4) * 0x38;
      if (iVar2 == 0) {
        if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
        uVar5 = 0x50e;
        iVar11 = DAT_000c3018 + 0xc2f62;
        iVar13 = DAT_000c301c + 0xc2f6a;
        goto LAB_000c2bae;
      }
      if (*(int *)(iVar2 + 0x30) == 0) {
        if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
        uVar5 = 0x511;
        iVar11 = DAT_000c3020 + 0xc2f80;
        iVar13 = DAT_000c3024 + 0xc2f88;
        goto LAB_000c2bae;
      }
      iVar2 = QCamera2HardwareInterface::restart_start_preview(*(camera_device **)(iVar2 + 0x34));
      if (iVar2 != 0) {
        if (*(int *)(iVar11 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c302c + 0xc2fa6,0x515,DAT_000c3028 + 0xc2f9e);
        }
        goto LAB_000c2ab8;
      }
      uVar1 = *(uint *)(iVar13 + 0x54);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
LAB_000c2a30:
    if (-1 < (int)(uVar1 - 1)) {
      while( true ) {
        iVar2 = *(int *)(*ppEVar8 + 0x2c) + *(int *)(iVar13 + 0x58 + uVar1 * 4) * 0x38;
        if (iVar2 == 0) {
          if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
          uVar5 = 0x523;
          iVar11 = DAT_000c3030 + 0xc2ddc;
          iVar13 = DAT_000c3034 + 0xc2de4;
          goto LAB_000c2bae;
        }
        if (*(int *)(iVar2 + 0x30) == 0) break;
        if ((((*ppEVar8)[0xd5] != (EVP_PKEY_CTX)0x0) || (*(int *)(iVar2 + 0x10) == 0)) &&
           (iVar2 = QCamera2HardwareInterface::take_picture(*(camera_device **)(iVar2 + 0x34)),
           iVar2 != 0)) {
          if (*(int *)(iVar11 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000c3044 + 0xc2eea,0x52c,DAT_000c3040 + 0xc2ee2);
          }
          goto LAB_000c2ab8;
        }
        uVar10 = uVar1 - 2;
        uVar1 = uVar1 - 1;
        if (0x7fffffff < uVar10) goto LAB_000c2eaa;
      }
      if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2bb2;
      uVar5 = 0x526;
      iVar11 = DAT_000c3038 + 0xc2e18;
      iVar13 = DAT_000c303c + 0xc2e20;
LAB_000c2bae:
      mm_camera_debug_log(1,1,iVar13,uVar5,iVar11);
LAB_000c2bb2:
      iVar2 = -0x13;
      goto LAB_000c2ab8;
    }
  }
LAB_000c2eaa:
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c304c + 0xc2ec4,0x531,DAT_000c3048 + 0xc2ebc);
  }
  iVar2 = 0;
  goto LAB_000c2ab8;
  while( true ) {
    iVar4 = *(int *)(iVar13 + iVar7 * 4);
    iVar7 = iVar7 + 1;
    iVar2 = *(int *)(*ppEVar8 + 0x2c);
    if (iVar2 + iVar4 * 0x38 == 0) break;
LAB_000c2d04:
    iVar2 = iVar2 + iVar4 * 0x38;
    if (*(int *)(iVar2 + 0x30) == 0) {
      if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000c2ab4;
      uVar5 = 0x4f3;
      iVar11 = DAT_000c2ff8 + 0xc2dfa;
      iVar13 = DAT_000c2ffc + 0xc2e02;
      goto LAB_000c2ab0;
    }
    iVar2 = QCamera2HardwareInterface::restart_stop_preview(*(camera_device **)(iVar2 + 0x34));
    if (iVar2 != 0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c3004 + 0xc2e40,0x4f7,DAT_000c3000 + 0xc2e38);
      }
      goto LAB_000c2ab8;
    }
    if (*(uint *)(iVar13 + 0x54) <= iVar7 - 0x17U) {
      if (*(uint *)(iVar13 + 0x54) == 0) goto LAB_000c2eaa;
      uVar1 = 0;
      goto LAB_000c2e48;
    }
  }
LAB_000c2d42:
  if (*(int *)(iVar11 + 0x20) != 0) {
    uVar5 = 0x4f0;
    iVar11 = DAT_000c2ff0 + 0xc2d58;
    iVar13 = DAT_000c2ff4 + 0xc2d60;
LAB_000c2ab0:
    mm_camera_debug_log(1,1,iVar13,uVar5,iVar11);
  }
LAB_000c2ab4:
  iVar2 = -0x13;
LAB_000c2ab8:
  if (*piVar9 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

