
/* qcamera::QCamera2HardwareInterface::zsl_channel_cb(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera2HardwareInterface::zsl_channel_cb
               (mm_camera_super_buf_t *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *__ptr;
  undefined8 *puVar4;
  QCameraStream *pQVar5;
  undefined4 uVar6;
  QCamera2HardwareInterface *this;
  uint uVar7;
  int iVar8;
  int *this_00;
  code *pcVar9;
  mm_camera_buf_def *pmVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  metadata_buffer_t *pmVar16;
  int *piVar17;
  int iVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_1198;
  undefined8 uStack4496;
  undefined8 local_1188;
  undefined8 uStack4480;
  undefined4 local_1178;
  undefined8 local_1174;
  undefined8 uStack4460;
  undefined8 local_1164;
  undefined8 uStack4444;
  undefined4 local_1154;
  undefined8 local_1150;
  undefined8 uStack4424;
  undefined8 local_1140;
  undefined8 uStack4408;
  undefined4 local_1130;
  undefined8 local_112c;
  undefined8 uStack4388;
  undefined8 local_111c;
  undefined8 uStack4372;
  undefined4 local_110c;
  undefined4 local_1108;
  undefined4 local_1104;
  undefined8 local_1100;
  undefined4 local_10f8;
  undefined4 local_10b0;
  undefined4 local_10a0;
  char acStack136 [100];
  
  piVar17 = *(int **)(DAT_000d7ee8 + 0xd7bb2);
  iVar1 = *piVar17;
  puVar12 = *(uint **)(DAT_000d7eec + 0xd7bc0);
  if (1 < *puVar12) {
    if ((**(byte **)(DAT_000d7ef0 + 0xd7bcc) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d7ef4 + 0xd7bdc) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000d847c + 0xd8440);
    }
  }
  iVar18 = *(int *)(DAT_000d7ef8 + 0xd7bea);
  if (*(int *)(iVar18 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d7f00 + 0xd7c04,0x53,DAT_000d7efc + 0xd7bfc);
  }
  if (((param_2 == (void *)0x0) || (*(int **)((int)param_2 + 0x60) == (int *)0x0)) ||
     (**(int **)((int)param_2 + 0x60) != *(int *)param_1)) {
    if (*(int *)(iVar18 + 0x20) == 0) goto LAB_000d7cde;
    uVar6 = 1;
    uVar11 = 0x5b;
    iVar18 = DAT_000d7f14 + 0xd7cd4;
    iVar2 = DAT_000d7f18 + 0xd7cdc;
  }
  else {
    this_00 = *(int **)((int)param_2 + 0x9b4);
    if ((this_00 != (int *)0x0) && (this_00[4] == *(int *)(param_1 + 4))) {
      iVar2 = QCameraParametersIntf::isSceneSelectionEnabled
                        ((QCameraParametersIntf *)((int)param_2 + 0x4ac));
      if ((iVar2 == 0) ||
         (iVar2 = QCameraStateMachine::isCaptureRunning
                            ((QCameraStateMachine *)((int)param_2 + 0x4dc)), iVar2 != 0)) {
        if (*(int *)(iVar18 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000d7f08 + 0xd7c68,0x6e,DAT_000d7f04 + 0xd7c5a,param_1[0xc],
                              *(undefined *)((int)param_2 + 0x9db));
        }
        if ((param_1[0xc] != (mm_camera_super_buf_t)0x0) &&
           (*(char *)((int)param_2 + 0x9db) != '\0')) {
          puVar3 = (undefined4 *)malloc(0x1118);
          if (puVar3 == (undefined4 *)0x0) {
            if (*(int *)(iVar18 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d7f30 + 0xd7d5e,0x7d,DAT_000d7f2c + 0xd7d56);
            }
          }
          else {
            __aeabi_memclr8(puVar3 + 1,0x1114);
            *puVar3 = 0xc;
            iVar2 = processEvt((qcamera_sm_evt_enum_t)param_2,(void *)0x21);
            if (iVar2 != 0) {
              if (*(int *)(iVar18 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000d7f10 + 0xd7cba,0x78,DAT_000d7f0c + 0xd7cb2);
              }
              free(puVar3);
            }
          }
        }
        if (param_1[0xd] != (mm_camera_super_buf_t)0x0) {
          if (*(int *)(iVar18 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000d7f38 + 0xd7d7c,0x85,DAT_000d7f34 + 0xd7d74);
          }
          puVar3 = (undefined4 *)malloc(0x1118);
          if (puVar3 == (undefined4 *)0x0) {
            if (*(int *)(iVar18 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d7f48 + 0xd7dde,0x94,DAT_000d7f44 + 0xd7dd6);
            }
          }
          else {
            __aeabi_memclr8(puVar3 + 1,0x1114);
            *puVar3 = 6;
            iVar2 = processEvt((qcamera_sm_evt_enum_t)param_2,(void *)0x21);
            if (iVar2 != 0) {
              if (*(int *)(iVar18 + 0x24) != 0) {
                mm_camera_debug_log(1,2,DAT_000d7f40 + 0xd7dbc,0x8e,DAT_000d7f3c + 0xd7db4);
              }
              free(puVar3);
            }
          }
        }
        captureDone((QCamera2HardwareInterface *)param_2);
        __ptr = (undefined8 *)malloc(0x30);
        if (__ptr != (undefined8 *)0x0) {
          puVar19 = (undefined8 *)(param_1 + 0x10);
          uVar21 = *(undefined8 *)(param_1 + 8);
          uVar24 = *puVar19;
          uVar25 = *(undefined8 *)(param_1 + 0x18);
          uVar22 = *(undefined8 *)(param_1 + 0x20);
          uVar23 = *(undefined8 *)(param_1 + 0x28);
          puVar4 = __ptr + 2;
          *__ptr = *(undefined8 *)param_1;
          __ptr[1] = uVar21;
          *puVar4 = uVar24;
          __ptr[3] = uVar25;
          __ptr[4] = uVar22;
          __ptr[5] = uVar23;
          if ((*(int *)(param_1 + 8) != 0) && (*(int *)(iVar18 + 0x34) != 0)) {
            mm_camera_debug_log(1,6,DAT_000d7f50 + 0xd7e48,0xaf,DAT_000d7f4c + 0xd7e3c,
                                *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
          }
          property_get(DAT_000d7f54 + 0xd7e5c,acStack136,DAT_000d7f58 + 0xd7e5e);
          iVar2 = atoi(acStack136);
          if (iVar2 < 1) {
LAB_000d7eca:
            if (*(uint *)(param_1 + 8) != 0) {
              uVar7 = 0;
              do {
                puVar14 = *(uint **)((int)puVar19 + uVar7 * 4);
                if (puVar14[1] == 3) {
                  pQVar5 = (QCameraStream *)
                           QCameraChannel::getStreamByHandle((QCameraChannel *)this_00,*puVar14);
                  if (pQVar5 != (QCameraStream *)0x0) {
                    dumpFrameToFile((QCamera2HardwareInterface *)param_2,pQVar5,
                                    (mm_camera_buf_def *)puVar14,0x40,(char *)0x0);
                  }
                  break;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(param_1 + 8));
            }
          }
          else if (*(uint *)(param_1 + 8) != 0) {
            uVar7 = 0;
            do {
              puVar14 = *(uint **)((int)puVar19 + uVar7 * 4);
              if (puVar14[1] == 8) {
                pQVar5 = (QCameraStream *)
                         QCameraChannel::getStreamByHandle((QCameraChannel *)this_00,*puVar14);
                if (pQVar5 != (QCameraStream *)0x0) {
                  dumpFrameToFile((QCamera2HardwareInterface *)param_2,pQVar5,
                                  (mm_camera_buf_def *)puVar14,0x10,(char *)0x0);
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 8));
            goto LAB_000d7eca;
          }
          iVar2 = needFDMetadata((QCamera2HardwareInterface *)param_2,0);
          if ((iVar2 != 0) && (*(int *)(__ptr + 1) != 0)) {
            uVar7 = 0;
            do {
              pQVar5 = (QCameraStream *)
                       QCameraChannel::getStreamByHandle
                                 ((QCameraChannel *)this_00,**(uint **)((int)puVar4 + uVar7 * 4));
              if ((pQVar5 != (QCameraStream *)0x0) &&
                 (iVar2 = QCameraStream::isTypeOf(pQVar5,7), iVar2 != 0)) {
                iVar2 = *(int *)((int)puVar4 + uVar7 * 4);
                if (iVar2 != 0) {
                  pmVar16 = *(metadata_buffer_t **)(iVar2 + 0x208);
                  this = (QCamera2HardwareInterface *)
                         needFDMetadata((QCamera2HardwareInterface *)param_2,0);
                  if (this != (QCamera2HardwareInterface *)0x0) {
                    fillFacesData(this,(cam_faces_data_t *)&local_1198,pmVar16);
                    local_10a0 = 1;
                    puVar3 = (undefined4 *)malloc(0x1118);
                    if (puVar3 == (undefined4 *)0x0) {
                      if (*(int *)(iVar18 + 0x20) != 0) {
                        mm_camera_debug_log(1,1,DAT_000d848c + 0xd842e,0x11f,DAT_000d8488 + 0xd8426)
                        ;
                      }
                    }
                    else {
                      *puVar3 = 2;
                      puVar3[1] = 0;
                      __aeabi_memcpy8(puVar3 + 2,&local_1198,0x1110);
                      iVar2 = processEvt((qcamera_sm_evt_enum_t)param_2,(void *)0x21);
                      if (iVar2 != 0) {
                        if (*(int *)(iVar18 + 0x24) != 0) {
                          mm_camera_debug_log(1,2,DAT_000d8484 + 0xd8208,0x11a,
                                              DAT_000d8480 + 0xd8200);
                        }
                        free(puVar3);
                      }
                    }
                  }
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(__ptr + 1));
          }
          property_get(DAT_000d8238 + 0xd7fcc,acStack136,DAT_000d823c + 0xd7fce);
          iVar2 = atoi(acStack136);
          if ((iVar2 != 0) && (*(int *)(__ptr + 1) != 0)) {
            uVar7 = 0;
            do {
              pQVar5 = (QCameraStream *)
                       QCameraChannel::getStreamByHandle
                                 ((QCameraChannel *)this_00,**(uint **)((int)puVar4 + uVar7 * 4));
              if ((pQVar5 != (QCameraStream *)0x0) &&
                 (iVar2 = QCameraStream::isTypeOf(pQVar5,7), iVar2 != 0)) {
                pmVar10 = *(mm_camera_buf_def **)((int)puVar4 + uVar7 * 4);
                if ((pmVar10 != (mm_camera_buf_def *)0x0) &&
                   ((QCamera2HardwareInterface *)
                    (uint)(byte)"Failed to Q new buffer to stream"[*(int *)(pmVar10 + 0x208) + 8] !=
                    (QCamera2HardwareInterface *)0x0)) {
                  dumpMetadataToFile((QCamera2HardwareInterface *)
                                     (uint)(byte)"Failed to Q new buffer to stream"
                                                 [*(int *)(pmVar10 + 0x208) + 8],pQVar5,pmVar10,
                                     (char *)(DAT_000d8490 + 0xd816a));
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(__ptr + 1));
          }
          property_get(DAT_000d8240 + 0xd801a,acStack136,DAT_000d8244 + 0xd801c);
          iVar2 = atoi(acStack136);
          if (0 < iVar2) {
            if (*(int *)(iVar18 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000d824c + 0xd8044,0x13c,DAT_000d8248 + 0xd803c);
            }
            if (*(int *)(__ptr + 1) != 0) {
              uVar7 = 0;
              iVar2 = DAT_000d8250 + 0xd8058;
              iVar13 = DAT_000d8254 + 0xd805a;
              do {
                pQVar5 = (QCameraStream *)
                         QCameraChannel::getStreamByHandle
                                   ((QCameraChannel *)this_00,**(uint **)((int)puVar4 + uVar7 * 4));
                if ((pQVar5 != (QCameraStream *)0x0) && (*(int *)(iVar18 + 0x28) != 0)) {
                  iVar8 = *(int *)((int)puVar4 + uVar7 * 4);
                  uVar11 = *(undefined4 *)(iVar8 + 0xc);
                  uVar15 = *(undefined4 *)(iVar8 + 0x1c);
                  uVar6 = QCameraStream::getMyType(pQVar5);
                  iVar8 = *(int *)((int)puVar4 + uVar7 * 4);
                  mm_camera_debug_log(1,3,iVar13,0x146,iVar2,uVar11,uVar15,uVar6,
                                      *(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18));
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(uint *)(__ptr + 1));
            }
          }
          iVar2 = waitDeferredWork((QCamera2HardwareInterface *)param_2,
                                   (uint *)((int)param_2 + 0x1da4));
          if (iVar2 != 0) {
            if (*(int *)(iVar18 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d825c + 0xd80d8,0x14e,DAT_000d8258 + 0xd80d0);
            }
            (**(code **)(*this_00 + 0x1c))(this_00,param_1);
            free(__ptr);
            goto LAB_000d7cde;
          }
          iVar2 = QCameraParametersIntf::getDualCameraMode
                            ((QCameraParametersIntf *)((int)param_2 + 0x4ac));
          bVar20 = iVar2 != 0;
          if (bVar20) {
            iVar2 = *(int *)(__ptr + 1);
          }
          if (bVar20 && iVar2 != 0) {
            uVar7 = 0;
            do {
              pQVar5 = (QCameraStream *)
                       QCameraChannel::getStreamByHandle
                                 ((QCameraChannel *)this_00,**(uint **)((int)puVar4 + uVar7 * 4));
              if ((pQVar5 != (QCameraStream *)0x0) &&
                 (iVar2 = QCameraStream::isTypeOf(pQVar5,7), iVar2 != 0)) {
                iVar2 = *(int *)((int)puVar4 + uVar7 * 4);
                if (iVar2 != 0) {
                  iVar2 = *(int *)(iVar2 + 0x208);
                  __aeabi_memclr8(&local_1198,0xf0);
                  if (iVar2 != 0) {
                    if (*(char *)(iVar2 + 0xe1) != '\0') {
                      local_1188 = *(undefined8 *)("Invalid Denoise value: %s" + iVar2 + 0x17);
                      uStack4480 = *(undefined8 *)("isYUVFrameInfoNeeded" + iVar2 + 5);
                      local_1198 = *(undefined8 *)("Invalid Denoise value: %s" + iVar2 + 7);
                      uStack4496 = *(undefined8 *)("Invalid Denoise value: %s" + iVar2 + 0xf);
                      local_1178 = *(undefined4 *)("isYUVFrameInfoNeeded" + iVar2 + 0xd);
                    }
                    if (*(char *)(iVar2 + 0xe2) != '\0') {
                      local_1164 = *(undefined8 *)("setSmallJpegSize" + iVar2 + 0xc);
                      uStack4444 = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 3);
                      local_1174 = *(undefined8 *)("isYUVFrameInfoNeeded" + iVar2 + 0x11);
                      uStack4460 = *(undefined8 *)("setSmallJpegSize" + iVar2 + 4);
                      local_1154 = *(undefined4 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0xb);
                    }
                    if (*(char *)(iVar2 + 0xe3) != '\0') {
                      local_1140 = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0x1f);
                      uStack4408 = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0x27);
                      local_1150 = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0xf);
                      uStack4424 = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0x17);
                      local_1130 = *(undefined4 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0x2f);
                    }
                    if (*(char *)(iVar2 + 0xe4) != '\0') {
                      local_111c = *(undefined8 *)("isNV21PictureFormat: %d\n" + iVar2 + 0xd);
                      uStack4372 = *(undefined8 *)("isNV21PictureFormat: %d\n" + iVar2 + 0x15);
                      local_112c = *(undefined8 *)
                                    ("buf_alignment=%d stride X scan=%dx%d batch size = %d\n" +
                                    iVar2 + 0x33);
                      uStack4388 = *(undefined8 *)("isNV21PictureFormat: %d\n" + iVar2 + 5);
                      local_110c = *(undefined4 *)("Failed to update tone map mode" + iVar2 + 4);
                    }
                    if (*(char *)(iVar2 + 0xe0) != '\0') {
                      local_1108 = *(undefined4 *)("Invalid Denoise value: %s" + iVar2 + 3);
                    }
                    if (*(char *)(iVar2 + 0xe7) != '\0') {
                      local_1104 = *(undefined4 *)
                                    ("cache buffer %p at result frame_number %u" + iVar2 + 3);
                    }
                    if (*(char *)(iVar2 + 0x38) != '\0') {
                      local_1100 = *(undefined8 *)("Memeory Obj of main frame is NULL" + iVar2 + 2);
                      local_10f8 = *(undefined4 *)("Memeory Obj of main frame is NULL" + iVar2 + 10)
                      ;
                    }
                  }
                  local_10b0 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
                  puVar3 = (undefined4 *)malloc(0x1118);
                  if (puVar3 == (undefined4 *)0x0) {
                    if (*(int *)(iVar18 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_000d84a0 + 0xd8470,0x193,DAT_000d849c + 0xd8468);
                    }
                  }
                  else {
                    __aeabi_memclr8(puVar3 + 1,0x1114);
                    *puVar3 = 0xe;
                    __aeabi_memcpy8(puVar3 + 2,&local_1198,0xf0);
                    iVar2 = processEvt((qcamera_sm_evt_enum_t)param_2,(void *)0x21);
                    if (iVar2 != 0) {
                      if (*(int *)(iVar18 + 0x20) != 0) {
                        mm_camera_debug_log(1,1,DAT_000d8498 + 0xd8406,0x18e,DAT_000d8494 + 0xd83fe)
                        ;
                      }
                      free(puVar3);
                    }
                  }
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(__ptr + 1));
          }
          iVar2 = QCameraPostProcessor::processData
                            ((QCameraPostProcessor *)((int)param_2 + 0x550),
                             (mm_camera_super_buf_t *)__ptr);
          if (iVar2 != 0) {
            if (*(int *)(iVar18 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d84a8 + 0xd812e,0x198,DAT_000d84a4 + 0xd8126);
            }
            (**(code **)(*this_00 + 0x1c))(this_00,param_1);
            free(__ptr);
            goto LAB_000d7cde;
          }
          if (*(int *)(iVar18 + 0x28) == 0) goto LAB_000d7cde;
          uVar6 = 3;
          uVar11 = 0x19f;
          iVar18 = DAT_000d84ac + 0xd8186;
          iVar2 = DAT_000d84b0 + 0xd818e;
          goto LAB_000d7cda;
        }
        if (*(int *)(iVar18 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d7f60 + 0xd7ea2,0xa7,DAT_000d7f5c + 0xd7e9a);
        }
        pcVar9 = *(code **)(*this_00 + 0x1c);
      }
      else {
        selectScene((QCamera2HardwareInterface *)param_2,(QCameraChannel *)this_00,param_1);
        pcVar9 = *(code **)(*this_00 + 0x1c);
      }
      (*pcVar9)(this_00,param_1);
      goto LAB_000d7cde;
    }
    if (*(int *)(iVar18 + 0x20) == 0) goto LAB_000d7cde;
    uVar6 = 1;
    uVar11 = 0x62;
    iVar18 = DAT_000d7f24 + 0xd7d2a;
    iVar2 = DAT_000d7f28 + 0xd7d32;
  }
LAB_000d7cda:
  mm_camera_debug_log(1,uVar6,iVar2,uVar11,iVar18);
LAB_000d7cde:
  if (1 < *puVar12) {
    if ((**(byte **)(DAT_000d7f1c + 0xd7cea) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000d7f20 + 0xd7cfa) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar17 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

