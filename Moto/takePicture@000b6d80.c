
/* qcamera::QCamera2HardwareInterface::takePicture() */

int __thiscall qcamera::QCamera2HardwareInterface::takePicture(QCamera2HardwareInterface *this)

{
  QCameraChannel QVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  QCameraStream *this_00;
  int *piVar6;
  int **ppiVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int **ppiVar12;
  QCameraParametersIntf *this_01;
  byte bVar13;
  int *piVar14;
  QCameraChannel *this_02;
  QCamera2HardwareInterface *pQVar15;
  int iVar16;
  QCameraChannel *this_03;
  bool bVar17;
  longlong local_38;
  ulonglong uStack48;
  int local_28;
  
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar14 = *(int **)(DAT_000b70cc + 0xb6d92);
  local_28 = *piVar14;
  uVar2 = QCameraParametersIntf::getNumOfSnapshots(this_01);
  uVar3 = QCameraParametersIntf::getNumOfRetroSnapshots(this_01);
  iVar16 = *(int *)(DAT_000b70d0 + 0xb6db0);
  if (*(int *)(iVar16 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b70d8 + 0xb6dcc,0x169f,DAT_000b70d4 + 0xb6dc4);
  }
  iVar4 = QCameraParametersIntf::getRotation(this_01);
  QCameraParametersIntf::setJpegRotation(this_01,iVar4);
  if ((this[0x9da] == (QCamera2HardwareInterface)0x0) ||
     (iVar4 = QCameraParametersIntf::isZSLMode(this_01), iVar4 == 0)) {
    if (*(int *)(iVar16 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b70e0 + 0xb6e04,0x16ae,DAT_000b70dc + 0xb6dfc);
    }
    uVar3 = 0;
  }
  iVar4 = configureAdvancedCapture(this);
  if (iVar4 != 0) {
    if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
    uVar8 = 1;
    uVar11 = 0x16b4;
    iVar16 = DAT_000b70e4 + 0xb6e24;
    iVar10 = DAT_000b70e8 + 0xb6e2c;
    goto LAB_000b6e2a;
  }
  pQVar15 = this + 0x1dc4;
  if (*pQVar15 != (QCamera2HardwareInterface)0x0) {
    uVar2 = QCameraParametersIntf::getBurstCountForAdvancedCapture(this_01);
  }
  if (*(int *)(iVar16 + 0x34) != 0) {
    uVar8 = QCameraParametersIntf::isZSLMode(this_01);
    mm_camera_debug_log(1,6,DAT_000b70f0 + 0xb6e86,0x16bc,DAT_000b70ec + 0xb6e76,uVar2,uVar8,
                        *pQVar15);
  }
  gettimeofday((timeval *)(this + 0x1f00),(__timezone_ptr_t)0x0);
  iVar4 = QCameraParametersIntf::isZSLMode(this_01);
  if (iVar4 == 0) {
    iVar4 = QCameraParametersIntf::isJpegPictureFormat(this_01);
    if (((iVar4 != 0) || (iVar4 = QCameraParametersIntf::isNV16PictureFormat(this_01), iVar4 != 0))
       || (iVar4 = QCameraParametersIntf::isNV21PictureFormat(this_01), iVar4 != 0)) {
      stopPreview(SUB41(this,0));
      iVar4 = QCameraParametersIntf::setStreamConfigure
                        (SUB41(this_01,0),true,(bool)this[0xa9e],(uint *)0x0);
      if (*(int *)(iVar16 + 0x20) != 0 && iVar4 != 0) {
        mm_camera_debug_log(1,1,DAT_000b710c + 0xb6f8a,0x185e,DAT_000b7108 + 0xb6f80,iVar4);
        if (iVar4 == 0) goto LAB_000b6f92;
LAB_000b6f8e:
        iVar4 = 1;
        goto LAB_000b6e2e;
      }
      if (iVar4 != 0) goto LAB_000b6f8e;
LAB_000b6f92:
      iVar4 = addCaptureChannel(this);
      if ((iVar4 != 0) || (*(int *)(this + 0x9b8) == 0)) {
        if (*(int *)(iVar16 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b7114 + 0xb6fb8,0x17dd,DAT_000b7110 + 0xb6fb0);
        }
        if (*(int **)(this + 0x9b8) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9b8) + 4))();
          *(undefined4 *)(this + 0x9b8) = 0;
        }
        goto LAB_000b6e2e;
      }
      ppiVar12 = (int **)(this + 0x9b8);
      iVar4 = QCameraParametersIntf::getofflineRAW(this_01);
      if ((iVar4 == 0) &&
         (iVar4 = configureOnlineRotation(this,*(QCameraChannel **)(this + 0x9b8)), iVar4 != 0)) {
        if (*(int *)(iVar16 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b7124 + 0xb70b0,0x178f,DAT_000b7120 + 0xb70a8);
        }
LAB_000b70b2:
        if (*ppiVar12 != (int *)0x0) {
          (**(code **)(**ppiVar12 + 4))();
          *ppiVar12 = (int *)0x0;
        }
        goto LAB_000b6e2e;
      }
      iVar4 = queueDeferredWork((DeferredWorkCmd)this,1);
      *(int *)(this + 0x1da4) = iVar4;
      if (iVar4 != 0) {
        puVar5 = (uint *)(this + 0x1da4);
        iVar4 = queueDeferredWork((DeferredWorkCmd)this,4);
        *(int *)(this + 0x1da8) = iVar4;
        if (iVar4 != 0) {
          iVar4 = (**(code **)(**ppiVar12 + 0x14))();
          if (iVar4 != 0) {
            if (*(int *)(iVar16 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b74b8 + 0xb7238,0x17b3,DAT_000b74b4 + 0xb7230);
            }
            iVar10 = waitDeferredWork(this,puVar5);
            if (iVar10 == 0) {
              iVar10 = waitDeferredWork(this,(uint *)(this + 0x1da8));
              if (iVar10 == 0) goto LAB_000b70b2;
              if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
              uVar8 = 0x17b9;
              iVar16 = DAT_000b78cc + 0xb7672;
              iVar4 = DAT_000b78d0 + 0xb767a;
            }
            else {
              if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
              uVar8 = 0x17b5;
              iVar16 = DAT_000b74bc + 0xb725e;
              iVar4 = DAT_000b74c0 + 0xb7266;
            }
            goto LAB_000b6f6a;
          }
          piVar6 = *ppiVar12;
          if ((piVar6 != (int *)0x0) &&
             ((((iVar4 = QCameraParametersIntf::isUbiFocusEnabled(this_01), iVar4 != 0 ||
                (iVar4 = QCameraParametersIntf::isUbiRefocus(this_01), iVar4 != 0)) ||
               (iVar4 = QCameraParametersIntf::isChromaFlashEnabled(this_01), iVar4 != 0)) &&
              (iVar4 = startAdvancedCapture(this,(QCameraPicChannel *)piVar6), iVar4 != 0)))) {
            if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
            uVar8 = 1;
            uVar11 = 0x17c8;
            iVar16 = DAT_000b78d4 + 0xb75d2;
            iVar10 = DAT_000b78d8 + 0xb75da;
            goto LAB_000b6e2a;
          }
          if (this[0xa9e] != (QCamera2HardwareInterface)0x0) {
            uVar2 = QCameraParametersIntf::getNumOfSnapshots(this_01);
            iVar4 = QCameraParametersIntf::isZSLMode(this_01);
            ppiVar7 = ppiVar12;
            if (iVar4 != 0) {
              ppiVar7 = (int **)(this + 0x9b4);
            }
            if (*ppiVar7 == (int *)0x0) {
              if (*(int *)(iVar16 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000b78e0 + 0xb76d4,0x1897,DAT_000b78dc + 0xb76cc);
              }
              iVar4 = -0x13;
            }
            else {
              uStack48 = 0;
              local_38 = (ulonglong)uVar2 << 0x20;
              iVar4 = QCameraPicChannel::takePicture
                                ((QCameraPicChannel *)*ppiVar7,(mm_camera_req_buf_t *)&local_38);
              if (iVar4 == 0) goto LAB_000b7718;
            }
            iVar10 = waitDeferredWork(this,puVar5);
            if (iVar10 != 0) {
              if (*(int *)(iVar16 + 0x20) != 0) {
                uVar8 = 0x17d1;
                iVar16 = DAT_000b78e4 + 0xb76fa;
                iVar4 = DAT_000b78e8 + 0xb7702;
                goto LAB_000b6f6a;
              }
              goto LAB_000b77dc;
            }
            iVar10 = waitDeferredWork(this,(uint *)(this + 0x1da8));
            if (iVar10 == 0) goto LAB_000b70b2;
            if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
            uVar8 = 0x17d5;
            iVar16 = DAT_000b78ec + 0xb77d2;
            iVar4 = DAT_000b78f0 + 0xb77da;
            goto LAB_000b6f6a;
          }
          goto LAB_000b7718;
        }
        if (*(int *)(iVar16 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b78c0 + 0xb7532,0x17a8,DAT_000b78bc + 0xb752a);
        }
        iVar4 = waitDeferredWork(this,puVar5);
        if ((iVar4 != 0) && (*(int *)(iVar16 + 0x20) != 0)) {
          uVar8 = 0x17aa;
          iVar16 = DAT_000b78c4 + 0xb7550;
          iVar4 = DAT_000b78c8 + 0xb7558;
          goto LAB_000b7556;
        }
        goto LAB_000b755a;
      }
      if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b7466;
      uVar8 = 0x17a0;
      iVar16 = DAT_000b7508 + 0xb7456;
      iVar4 = DAT_000b750c + 0xb745e;
LAB_000b745c:
      mm_camera_debug_log(1,1,iVar4,uVar8,iVar16);
      iVar4 = -0xc;
      goto LAB_000b6e2e;
    }
    stopPreview(SUB41(this,0));
    iVar4 = QCameraParametersIntf::updateRAW
                      (this_01,SUB41(*(undefined4 *)
                                      (*(int *)(*(int *)(DAT_000b7498 + 0xb713c) +
                                               *(int *)(this + 0x5c) * 4) + 0x2aec),0));
    if (iVar4 == 0) {
      iVar4 = QCameraParametersIntf::setStreamConfigure
                        (SUB41(this_01,0),true,(bool)this[0xa9e],(uint *)0x0);
      if (*(int *)(iVar16 + 0x20) != 0 && iVar4 != 0) {
        mm_camera_debug_log(1,1,DAT_000b74cc + 0xb72a0,0x185e,DAT_000b74c8 + 0xb7296,iVar4);
      }
      if (iVar4 == 0) {
        iVar4 = addRawChannel(this);
        if (iVar4 == 0) {
          iVar4 = waitDeferredWork(this,(uint *)(this + 0x1db0));
          if (iVar4 != 0) {
            if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
            uVar8 = 0x17f9;
            iVar16 = DAT_000b78f4 + 0xb7602;
            iVar4 = DAT_000b78f8 + 0xb760a;
            goto LAB_000b6f6a;
          }
          iVar4 = QCameraPostProcessor::start
                            ((QCameraPostProcessor *)(this + 0x550),
                             *(QCameraChannel **)(this + 0x9c8));
          if (iVar4 == 0) {
            if (*(int **)(this + 0x9c8) == (int *)0x0) {
              iVar4 = -0x80000000;
            }
            else {
              iVar4 = (**(code **)(**(int **)(this + 0x9c8) + 0x14))();
              if (iVar4 == 0) goto LAB_000b7718;
            }
            if (*(int *)(iVar16 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b7908 + 0xb7802,0x1806,DAT_000b7904 + 0xb77fa);
            }
            QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
          }
          else if (*(int *)(iVar16 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000b7900 + 0xb76b6,0x17ff,DAT_000b78fc + 0xb76ae);
          }
          if (*(int **)(this + 0x9c8) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x9c8) + 4))();
            *(undefined4 *)(this + 0x9c8) = 0;
          }
          goto LAB_000b6e2e;
        }
        if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
        uVar8 = 1;
        uVar11 = 0x180c;
        iVar16 = DAT_000b7510 + 0xb7490;
        iVar10 = (int)&DAT_000b7498 + DAT_000b7514;
      }
      else {
        if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6f8e;
        uVar8 = 1;
        uVar11 = 0x17f1;
        iVar16 = DAT_000b74d0 + 0xb72be;
        iVar4 = 1;
        iVar10 = DAT_000b74d4 + 0xb72ca;
      }
    }
    else {
      if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
      uVar8 = 1;
      uVar11 = 0x17eb;
      iVar16 = DAT_000b749c + 0xb716c;
      iVar10 = DAT_000b74a0 + 0xb7176;
    }
LAB_000b6e2a:
    mm_camera_debug_log(1,uVar8,iVar10,uVar11,iVar16);
  }
  else {
    this_03 = *(QCameraChannel **)(this + 0x9b4);
    if (this_03 == (QCameraChannel *)0x0) {
      if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
      uVar8 = 6000;
      iVar16 = DAT_000b7100 + 0xb6f64;
      iVar4 = DAT_000b7104 + 0xb6f6c;
      goto LAB_000b6f6a;
    }
    iVar4 = QCameraParametersIntf::getofflineRAW(this_01);
    this_02 = this_03;
    if (iVar4 != 0) {
      startRAWChannel(this,this_03);
      this_02 = *(QCameraChannel **)(this + 0x9c8);
      if (this_02 != (QCameraChannel *)0x0) goto LAB_000b6eca;
      if (*(int *)(iVar16 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000b74a8 + 0xb7194,0x16db,DAT_000b74a4 + 0xb718c);
        if (*(int **)(this + 0x9c8) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c8) + 0x18))();
          iVar4 = -0x80000000;
          goto LAB_000b6e2e;
        }
        goto LAB_000b77dc;
      }
      goto LAB_000b7874;
    }
LAB_000b6eca:
    iVar4 = configureOnlineRotation(this,this_02);
    if (iVar4 == 0) {
      iVar4 = queueDeferredWork((DeferredWorkCmd)this,1);
      *(int *)(this + 0x1da4) = iVar4;
      if (iVar4 == 0) {
        if (*(int *)(iVar16 + 0x20) == 0) {
LAB_000b7466:
          iVar4 = -0xc;
          goto LAB_000b6e2e;
        }
        uVar8 = 0x16fd;
        iVar16 = DAT_000b74ac + 0xb71ca;
        iVar4 = DAT_000b74b0 + 0xb71d2;
        goto LAB_000b745c;
      }
      QVar1 = this_03[0x1c];
      puVar5 = (uint *)(this + 0x1da4);
      if ((byte)QVar1 != 0) {
        uVar9 = 0;
        bVar13 = 0;
        do {
          this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(this_03,uVar9);
          if ((this_00 != (QCameraStream *)0x0) &&
             (iVar4 = QCameraStream::getMyType(this_00), iVar4 == 1)) break;
          bVar13 = bVar13 + 1;
          uVar9 = (uint)bVar13;
        } while (uVar9 < (byte)QVar1);
      }
      iVar4 = queueDeferredWork((DeferredWorkCmd)this,4);
      *(int *)(this + 0x1da8) = iVar4;
      if (iVar4 == 0) {
        if (*(int *)(iVar16 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b74ec + 0xb73b4,0x172a,DAT_000b74e8 + 0xb73ac);
        }
        iVar4 = waitDeferredWork(this,puVar5);
        bVar17 = iVar4 != 0;
        if (bVar17) {
          iVar4 = *(int *)(iVar16 + 0x20);
        }
        if (bVar17 && iVar4 != 0) {
          uVar8 = 0x172c;
          iVar16 = DAT_000b74f0 + 0xb73d8;
          iVar4 = DAT_000b74f4 + 0xb73e0;
LAB_000b7556:
          mm_camera_debug_log(1,1,iVar4,uVar8,iVar16);
        }
LAB_000b755a:
        QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
        iVar4 = -0xc;
        goto LAB_000b6e2e;
      }
      if ((*pQVar15 == (QCamera2HardwareInterface)0x0) ||
         (iVar4 = startAdvancedCapture(this,(QCameraPicChannel *)this_02), iVar4 == 0)) {
        if ((this[0xa9e] != (QCamera2HardwareInterface)0x0) &&
           (this[0x1bd8] != (QCamera2HardwareInterface)0x0)) {
          (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x2c))
                    (**(undefined4 **)(this + 0x60),*(undefined4 *)(this_02 + 0x10));
        }
        local_38 = 0;
        uStack48 = 0;
        iVar4 = QCameraParametersIntf::isAdvCamFeaturesEnabled(this_01);
        if ((((iVar4 == 0) && (this[0xaa8] == (QCamera2HardwareInterface)0x0)) &&
            (this[0xa9e] == (QCamera2HardwareInterface)0x0)) &&
           ((iVar4 = QCameraParametersIntf::isFrameSyncEnabled(this_01), iVar4 != 0 &&
            (piVar6 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_01), *piVar6 == 1))))
        {
          iVar4 = QCameraParametersIntf::getRelatedCamSyncInfo(this_01);
          if (*(int *)(iVar4 + 8) == 0) {
            local_38 = CONCAT44(uVar2,1);
            iVar4 = QCameraPicChannel::takePicture
                              ((QCameraPicChannel *)this_02,(mm_camera_req_buf_t *)&local_38);
            if (iVar4 != 0) {
              if (*(int *)(iVar16 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000b74dc + 0xb7368,0x174e,DAT_000b74d8 + 0xb7360);
              }
              iVar10 = waitDeferredWork(this,puVar5);
              if (iVar10 == 0) {
                iVar10 = waitDeferredWork(this,(uint *)(this + 0x1da8));
                if (iVar10 == 0) {
                  QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
                  goto LAB_000b6e2e;
                }
                if (*(int *)(iVar16 + 0x20) != 0) {
                  uVar8 = 0x1754;
                  iVar16 = DAT_000b7894 + 0xb786a;
                  iVar4 = DAT_000b7898 + 0xb7872;
                  goto LAB_000b7870;
                }
              }
              else if (*(int *)(iVar16 + 0x20) != 0) {
                uVar8 = 0x1750;
                iVar16 = DAT_000b74e0 + 0xb738e;
                iVar4 = DAT_000b74e4 + 0xb7396;
LAB_000b7870:
                mm_camera_debug_log(1,1,iVar4,uVar8,iVar16);
              }
LAB_000b7874:
              iVar4 = -0x80000000;
              goto LAB_000b6e2e;
            }
            if (*(int *)(iVar16 + 0x34) != 0) {
              mm_camera_debug_log(1,6,DAT_000b78a0 + 0xb784a,0x175a,DAT_000b789c + 0xb7842);
            }
          }
        }
        else {
          uStack48 = uStack48 & 0xffffffff00000000 | (ulonglong)uVar3;
          local_38 = (ulonglong)uVar2 << 0x20;
          iVar4 = QCameraPicChannel::takePicture
                            ((QCameraPicChannel *)this_02,(mm_camera_req_buf_t *)&local_38);
          if (iVar4 != 0) {
            if (*(int *)(iVar16 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b74fc + 0xb7416,0x1762,DAT_000b74f8 + 0xb740e);
            }
            iVar10 = waitDeferredWork(this,puVar5);
            if (iVar10 == 0) {
              iVar10 = waitDeferredWork(this,(uint *)(this + 0x1da8));
              if (iVar10 == 0) {
                QCameraPostProcessor::stop((QCameraPostProcessor *)(this + 0x550));
                goto LAB_000b6e2e;
              }
              if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b77dc;
              uVar8 = 0x1768;
              iVar16 = DAT_000b78b4 + 0xb758c;
              iVar4 = DAT_000b78b8 + 0xb7594;
            }
            else {
              if (*(int *)(iVar16 + 0x20) == 0) {
LAB_000b77dc:
                iVar4 = -0x80000000;
                goto LAB_000b6e2e;
              }
              uVar8 = 0x1764;
              iVar16 = DAT_000b7500 + 0xb743c;
              iVar4 = DAT_000b7504 + 0xb7444;
            }
LAB_000b6f6a:
            mm_camera_debug_log(1,1,iVar4,uVar8,iVar16);
            iVar4 = -0x80000000;
            goto LAB_000b6e2e;
          }
        }
LAB_000b7718:
        *(undefined2 *)(this + 0x1ece) = *(undefined2 *)(this + 0x1ecc);
        this[0x549] = (QCamera2HardwareInterface)0x0;
        gettimeofday((timeval *)(this + 0x1f08),(__timezone_ptr_t)0x0);
        iVar4 = ((*(int *)(this + 0x1f0c) +
                 (*(int *)(this + 0x1f08) - ((timeval *)(this + 0x1f00))->tv_sec) * 1000000) -
                *(int *)(this + 0x1f04)) / 1000;
        *(int *)(this + 0x1f34) = iVar4;
        if (*(int *)(iVar16 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000b78a4 + 0xb7780,0x1819,DAT_000b78a8 + 0xb7782,
                              DAT_000b78a4 + 0xb7780,iVar4);
        }
        iVar4 = 0;
        if (*(int *)(iVar16 + 0x34) == 0) goto LAB_000b6e2e;
        uVar8 = 6;
        uVar11 = 0x181b;
        iVar16 = DAT_000b78ac + 0xb77a6;
        iVar10 = DAT_000b78b0 + 0xb77b0;
        goto LAB_000b6e2a;
      }
      if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
      uVar8 = 0x1735;
      iVar16 = DAT_000b7118 + 0xb7064;
      iVar10 = DAT_000b711c + 0xb706c;
    }
    else {
      if (*(int *)(iVar16 + 0x20) == 0) goto LAB_000b6e2e;
      uVar8 = 0x16e3;
      iVar16 = DAT_000b70f4 + 0xb6ef0;
      iVar10 = DAT_000b70f8 + 0xb6ef8;
    }
    mm_camera_debug_log(1,1,iVar10,uVar8,iVar16);
  }
LAB_000b6e2e:
  if (*piVar14 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

