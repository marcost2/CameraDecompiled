
/* qcamera::QCamera2HardwareInterface::construct_makernotes(qcamera::QCameraExif*) */

void __thiscall
qcamera::QCamera2HardwareInterface::construct_makernotes
          (QCamera2HardwareInterface *this,QCameraExif *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int *piVar4;
  QCameraParametersIntf *this_00;
  undefined8 uVar5;
  uint local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined local_2b6;
  undefined local_2b5;
  undefined4 local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  int iStack680;
  int local_2a4;
  int iStack672;
  undefined local_29b;
  ushort local_29a;
  void *local_298;
  MotMakernote aMStack660 [20];
  undefined4 uStack640;
  undefined2 uStack636;
  undefined uStack634;
  undefined auStack592 [20];
  undefined auStack572 [20];
  undefined auStack552 [20];
  undefined auStack532 [200];
  undefined auStack332 [200];
  char acStack132 [92];
  int local_28;
  
  piVar4 = *(int **)(DAT_000be0f0 + 0xbde4a);
  local_28 = *piVar4;
  MotMakernote::MotMakernote(aMStack660);
  iVar1 = property_get(DAT_000be0f4 + 0xbde60,acStack132,0);
  if (0 < iVar1) {
    iVar1 = __strlen_chk(acStack132,0x5c);
    iVar1 = MotMakernote::addTag(aMStack660,0x5500,2,iVar1 + 1,acStack132);
    if (iVar1 != 0) goto LAB_000be0a6;
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  QCameraParametersIntf::getCpuInfo();
  iVar1 = __strlen_chk(auStack592,0x1cc);
  iVar1 = MotMakernote::addTag(aMStack660,0x7100,2,iVar1 + 1,auStack592);
  if (iVar1 == 0) {
    iVar1 = __strlen_chk(auStack572,0x1b8);
    iVar1 = MotMakernote::addTag(aMStack660,0x7101,2,iVar1 + 1,auStack572);
    if (iVar1 == 0) {
      iVar1 = __strlen_chk(auStack552,0x1a4);
      iVar1 = MotMakernote::addTag(aMStack660,0x7102,2,iVar1 + 1,auStack552);
      if (iVar1 == 0) {
        iVar1 = __strlen_chk(auStack532,400);
        iVar1 = MotMakernote::addTag(aMStack660,0x7103,2,iVar1 + 1,auStack532);
        if (iVar1 == 0) {
          iVar1 = __strlen_chk(auStack332,200);
          iVar1 = MotMakernote::addTag(aMStack660,0x7104,2,iVar1 + 1,auStack332);
          if (iVar1 == 0) {
            local_29b = QCameraParametersIntf::getBatteryCapacity(this_00);
            iVar1 = MotMakernote::addTag(aMStack660,0x5502,1,1,&local_29b);
            if (iVar1 == 0) {
              local_29b = QCameraParametersIntf::getBatteryTemp(this_00);
              iVar1 = MotMakernote::addTag(aMStack660,0x5503,1,1,&local_29b);
              if (iVar1 == 0) {
                iVar1 = QCameraParametersIntf::getCameraPosition(this_00);
                if (iVar1 == 1) {
                  uStack636 = 0x2c54;
                  uStack634 = 0;
                  uStack640 = 0x4e4f5246;
                }
                else {
                  uStack636 = 0x2c;
                  uStack640 = 0x4b434142;
                }
                __strncat_chk(&uStack640,
                              *(int *)(*(int *)(DAT_000be0f8 + 0xbdfc2) + *(int *)(this + 0x5c) * 4)
                              + 0x3748,0x20,0x2a);
                iVar1 = __strlen_chk(&uStack640,0x2a);
                iVar1 = MotMakernote::addTag(aMStack660,0x665e,2,iVar1 + 1,&uStack640);
                if (iVar1 == 0) {
                  local_29b = QCameraParametersIntf::isZSLMode(this_00);
                  iVar1 = MotMakernote::addTag(aMStack660,0x5510,1,1,&local_29b);
                  if (iVar1 == 0) {
                    local_2a4 = 0;
                    iStack672 = 0;
                    QCameraParametersIntf::getPreviewFpsRange(this_00,&iStack672,&local_2a4);
                    iVar1 = MotMakernote::addTag(aMStack660,0x5580,9,1,&iStack672);
                    if ((iVar1 == 0) &&
                       (iVar1 = MotMakernote::addTag(aMStack660,0x5590,9,1,&local_2a4), iVar1 == 0))
                    {
                      local_2ac = 0;
                      iStack680 = 0;
                      QCameraParametersIntf::getPreviewSize(this_00,&iStack680,&local_2ac);
                      iVar1 = MotMakernote::addTag(aMStack660,0x55a0,9,1,&iStack680);
                      if ((iVar1 == 0) &&
                         (iVar1 = MotMakernote::addTag(aMStack660,0x55b0,9,1,&local_2ac), iVar1 == 0
                         )) {
                        local_2b0 = 0;
                        local_2b0 = QCameraParametersIntf::getPreviewFrameRate(this_00);
                        iVar1 = MotMakernote::addTag(aMStack660,0x55c0,9,1,&local_2b0);
                        if (iVar1 == 0) {
                          pcVar2 = (char *)QCameraParametersIntf::getPreviewFormat(this_00);
                          if (pcVar2 == (char *)0x0) {
                            __android_log_print(6,DAT_000be448 + 0xbe108,DAT_000be44c + 0xbe10a,
                                                DAT_000be450 + 0xbe10c);
                          }
                          else {
                            pcVar2 = strncpy(acStack132,pcVar2,0x5b);
                            iVar1 = __strlen_chk(pcVar2,0x5c);
                            iVar1 = MotMakernote::addTag(aMStack660,0x55d0,2,iVar1 + 1,acStack132);
                            if (iVar1 != 0) goto LAB_000be0a6;
                          }
                          iVar1 = MotMakernote::addTag(aMStack660,0x54f0,0xb,1,this + 0x1e90);
                          if ((((iVar1 == 0) &&
                               (iVar1 = MotMakernote::addTag(aMStack660,0x710e,0xb,1,this + 0x1ebc),
                               iVar1 == 0)) &&
                              (iVar1 = MotMakernote::addTag(aMStack660,0x6530,9,1,this + 0x1f28),
                              iVar1 == 0)) &&
                             (((iVar1 = MotMakernote::addTag(aMStack660,0x6531,9,1,this + 0x1f30),
                               iVar1 == 0 &&
                               (iVar1 = MotMakernote::addTag(aMStack660,0x6532,9,1,this + 0x1f34),
                               iVar1 == 0)) &&
                              ((iVar1 = MotMakernote::addTag(aMStack660,0x6533,9,1,this + 0x1f38),
                               iVar1 == 0 &&
                               (iVar1 = MotMakernote::addTag(aMStack660,0x6534,9,1,this + 0x1f3c),
                               iVar1 == 0)))))) {
                            local_298 = (void *)0x12345678;
                            iVar1 = MotMakernote::addTag(aMStack660,0x6535,9,1,&local_298);
                            if (((iVar1 == 0) &&
                                (iVar1 = getAFROIMakerNotesData(this,aMStack660), iVar1 == 0)) &&
                               (iVar1 = getFDMakerNotesData(this,aMStack660), iVar1 == 0)) {
                              local_2b4 = QCameraParametersIntf::getJpegRotation(this_00);
                              iVar1 = MotMakernote::addTag(aMStack660,0x5512,4,1,&local_2b4);
                              if ((iVar1 == 0) &&
                                 (iVar1 = MotMakernote::addTag(aMStack660,0x5520,8,1,this + 0x1ece),
                                 iVar1 == 0)) {
                                pcVar2 = (char *)QCameraParametersIntf::getFocusModeStr(this_00);
                                if (pcVar2 == (char *)0x0) {
                                  __android_log_print(6,DAT_000be454 + 0xbe274,
                                                      DAT_000be458 + 0xbe276,DAT_000be45c + 0xbe278)
                                  ;
                                }
                                else {
                                  sVar3 = strlen(pcVar2);
                                  iVar1 = MotMakernote::addTag(aMStack660,0x5530,2,sVar3 + 1,pcVar2)
                                  ;
                                  if (iVar1 != 0) goto LAB_000be0a6;
                                }
                                local_2b5 = QCameraParametersIntf::getJpegQuality(this_00);
                                iVar1 = MotMakernote::addTag(aMStack660,0x5540,1,1,&local_2b5);
                                if (iVar1 == 0) {
                                  local_2b6 = QCameraParametersIntf::getJpegThumbnailQuality
                                                        (this_00);
                                  iVar1 = MotMakernote::addTag(aMStack660,0x5550,1,1,&local_2b6);
                                  if (iVar1 == 0) {
                                    pcVar2 = (char *)QCameraParametersIntf::getWhiteBalanceStr
                                                               (this_00);
                                    if (pcVar2 != (char *)0x0) {
                                      sVar3 = strlen(pcVar2);
                                      iVar1 = MotMakernote::addTag
                                                        (aMStack660,0x5560,2,sVar3 + 1,pcVar2);
                                      if (iVar1 != 0) goto LAB_000be0a6;
                                    }
                                    pcVar2 = (char *)QCameraParametersIntf::getSceneModeStr(this_00)
                                    ;
                                    if (pcVar2 != (char *)0x0) {
                                      sVar3 = strlen(pcVar2);
                                      iVar1 = MotMakernote::addTag
                                                        (aMStack660,0x5570,2,sVar3 + 1,pcVar2);
                                      if (iVar1 != 0) goto LAB_000be0a6;
                                    }
                                    pcVar2 = (char *)QCameraParametersIntf::getISOValueStr(this_00);
                                    if (pcVar2 != (char *)0x0) {
                                      sVar3 = strlen(pcVar2);
                                      iVar1 = MotMakernote::addTag
                                                        (aMStack660,0x7105,2,sVar3 + 1,pcVar2);
                                      if (iVar1 != 0) goto LAB_000be0a6;
                                    }
                                    pcVar2 = (char *)QCameraParametersIntf::getFocusPositionStr
                                                               (this_00);
                                    if (pcVar2 != (char *)0x0) {
                                      sVar3 = strlen(pcVar2);
                                      iVar1 = MotMakernote::addTag
                                                        (aMStack660,0x7106,2,sVar3 + 1,pcVar2);
                                      if (iVar1 != 0) goto LAB_000be0a6;
                                    }
                                    local_2bc = QCameraParametersIntf::getExposureCompensation
                                                          (this_00);
                                    iVar1 = MotMakernote::addTag(aMStack660,0x7107,9,1,&local_2bc);
                                    if (iVar1 == 0) {
                                      local_2c0 = QCameraParametersIntf::getExposureCompensationStep
                                                            (this_00);
                                      iVar1 = MotMakernote::addTag
                                                        (aMStack660,0x7108,0xb,1,&local_2c0);
                                      if (iVar1 == 0) {
                                        uVar5 = QCameraParametersIntf::getExposureTime(this_00);
                                        uVar5 = __aeabi_ldivmod((uint)uVar5,
                                                                (uint)((ulonglong)uVar5 >> 0x20),
                                                                (uint)&DAT_000f4240,0);
                                        local_2c4 = __floatdisf((uint)uVar5,
                                                                (uint)((ulonglong)uVar5 >> 0x20));
                                        iVar1 = MotMakernote::addTag
                                                          (aMStack660,0x7109,0xb,1,&local_2c4);
                                        if (iVar1 == 0) {
                                          local_29b = QCameraParametersIntf::isWNREnabled(this_00);
                                          iVar1 = MotMakernote::addTag
                                                            (aMStack660,0x6500,1,1,&local_29b);
                                          if (((iVar1 == 0) &&
                                              (iVar1 = getMotCalibrationMakerNotesData
                                                                 (this,aMStack660), iVar1 == 0)) &&
                                             (iVar1 = getMotOTPMakerNotesData(this,aMStack660),
                                             iVar1 == 0)) {
                                            iVar1 = MotMakernote::finalizeBuffer
                                                              (aMStack660,&local_298,&local_29a);
                                            if (((iVar1 == 0) && (local_298 != (void *)0x0)) &&
                                               (local_29a != 0)) {
                                              QCameraExif::addEntry
                                                        (param_1,0xa2927c,7,(uint)local_29a,
                                                         local_298);
                                              free(local_298);
                                            }
                                            else {
                                              __android_log_print(6,DAT_000be460 + 0xbe440,
                                                                  DAT_000be464 + 0xbe442,
                                                                  DAT_000be468 + 0xbe444,iVar1);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_000be0a6:
  MotMakernote::_MotMakernote(aMStack660);
  if (*piVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

