
/* qcamera::QCamera2HardwareInterface::preparePreview() */

int __thiscall qcamera::QCamera2HardwareInterface::preparePreview(QCamera2HardwareInterface *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  QCameraParametersIntf *this_00;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iStack144;
  int local_8c;
  int iStack136;
  cam_format_t local_84 [23];
  int local_28;
  
  piVar10 = *(int **)(DAT_000b527c + 0xb4f2e);
  local_28 = *piVar10;
  puVar11 = *(uint **)(DAT_000b5280 + 0xb4f3c);
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000b5284 + 0xb4f4c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b5288 + 0xb4f5c) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b534c + 0xb5336);
    }
  }
  iVar9 = *(int *)(DAT_000b528c + 0xb4f6a);
  if (*(int *)(iVar9 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000b5294 + 0xb4f82,0x2741,DAT_000b5290 + 0xb4f7a);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::setStreamConfigure(SUB41(this_00,0),false,false,(uint *)0x0);
  if (iVar1 == 0) {
    iVar1 = QCameraParametersIntf::isZSLMode(this_00);
    if ((iVar1 == 0) || (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 != 0))
    {
      uVar2 = QCameraParametersIntf::getRecordingHintValue(this_00);
      iVar1 = QCameraParametersIntf::isRdiMode(this_00);
      if ((iVar1 == 0) && ((uVar2 ^ 1) == 0)) {
        if (this[0xa9e] != (QCamera2HardwareInterface)0x0) {
          sendCommand(this,0x18,&iStack144,&iStack144);
        }
        iVar1 = QCameraParametersIntf::isFaceDetectionEnabled(this_00);
        if ((iVar1 != 0) && (iVar1 = QCameraParametersIntf::fdModeInVideo(this_00), iVar1 == 0)) {
          QCameraParametersIntf::setFaceDetectionOption(this_00,false);
          QCameraParametersIntf::setFaceDetection(this_00,false,true);
          if (*(int *)(iVar9 + 0x28) != 0) {
            iVar8 = QCameraParametersIntf::isFaceDetectionEnabled(this_00);
            iVar1 = DAT_000b5364 + 0xb503e;
            if (iVar8 != 0) {
              iVar1 = DAT_000b5360 + 0xb5040;
            }
            mm_camera_debug_log(1,3,DAT_000b536c + 0xb5054,0x1c1f,DAT_000b5368 + 0xb504a,iVar1);
          }
        }
        iVar1 = QCameraParametersIntf::isHistogramEnabled(this_00);
        if ((iVar1 != 0) &&
           (QCameraParametersIntf::setHistogram(this_00,false), *(int *)(iVar9 + 0x28) != 0)) {
          iVar8 = QCameraParametersIntf::isHistogramEnabled(this_00);
          iVar1 = DAT_000b5374 + 0xb507e;
          if (iVar8 != 0) {
            iVar1 = DAT_000b5370 + 0xb5080;
          }
          mm_camera_debug_log(1,3,DAT_000b537c + 0xb5094,0x1c17,DAT_000b5378 + 0xb508a,iVar1);
        }
        QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_8c);
        property_get(DAT_000b5380 + 0xb50ac,local_84,DAT_000b5384 + 0xb50ae);
        iVar1 = atoi((char *)local_84);
        iVar8 = QCameraParametersIntf::getRecordingHintValue(this_00);
        if (((iVar8 == 0 || iVar1 == 0) || (iStack136 * local_8c < 0x21c000)) &&
           (iVar8 = addSnapshotChannel(this), iVar8 != 0)) goto LAB_000b52f6;
        iVar8 = addVideoChannel();
        if (iVar8 != 0) {
          if (*(int **)(this + 0x9c4) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x9c4) + 4))();
            *(undefined4 *)(this + 0x9c4) = 0;
          }
          if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000b52f6;
          uVar4 = 1;
          uVar7 = 0x27b3;
          iVar9 = DAT_000b5388 + 0xb5142;
          iVar6 = DAT_000b538c + 0xb514c;
          iVar1 = iVar8;
          goto LAB_000b52f2;
        }
      }
      iVar8 = addPreviewChannel(this);
      uVar3 = QCameraParametersIntf::isRdiMode(this_00);
      uVar5 = count_leading_zeroes(iVar8);
      if ((uVar3 | uVar5 >> 5 | uVar2 ^ 1) == 0) {
        if (*(int **)(this + 0x9c4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c4) + 4))();
          *(undefined4 *)(this + 0x9c4) = 0;
        }
        if (*(int **)(this + 0x9c0) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9c0) + 4))();
          *(undefined4 *)(this + 0x9c0) = 0;
        }
      }
      uVar3 = QCameraParametersIntf::isUBWCEnabled(this_00);
      if (((uVar3 ^ 1 | uVar2) == 0) &&
         (QCameraParametersIntf::getStreamFormat(this_00,1,local_84), local_84[0] == 0x66)) {
        iVar8 = addCallbackChannel(this);
        if (iVar8 != 0) {
          if (*(int **)(this + 0x9bc) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x9bc) + 4))();
            *(undefined4 *)(this + 0x9bc) = 0;
          }
          iVar1 = QCameraParametersIntf::isRdiMode(this_00);
          if (iVar1 == 0) {
            if (*(int **)(this + 0x9c4) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x9c4) + 4))();
              *(undefined4 *)(this + 0x9c4) = 0;
            }
            if (*(int **)(this + 0x9c0) != (int *)0x0) {
              (**(code **)(**(int **)(this + 0x9c0) + 4))();
              *(undefined4 *)(this + 0x9c0) = 0;
            }
          }
          if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000b52f6;
          uVar4 = 1;
          uVar7 = 0x27cb;
          iVar9 = DAT_000b5390 + 0xb520a;
          iVar6 = DAT_000b5394 + 0xb5214;
          iVar1 = iVar8;
          goto LAB_000b52f2;
        }
        iVar8 = 0;
      }
      if (iVar8 == 0) {
LAB_000b52d8:
        iVar8 = 0;
      }
      else {
        if (*(int **)(this + 0x9bc) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9bc) + 4))();
          *(undefined4 *)(this + 0x9bc) = 0;
        }
        if (*(int *)(iVar9 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b539c + 0xb52d4,0x27d3,DAT_000b5398 + 0xb52ca,iVar8);
        }
      }
      if (*(int *)(iVar9 + 0x34) == 0) goto LAB_000b52f6;
      uVar4 = 6;
      uVar7 = 0x27d7;
      iVar9 = DAT_000b53a0 + 0xb52ea;
      iVar6 = DAT_000b53a4 + 0xb52f4;
      iVar1 = iVar8;
    }
    else {
      iVar8 = addZSLChannel(this);
      if (iVar8 == 0) {
        iVar1 = QCameraParametersIntf::isUBWCEnabled(this_00);
        if (((iVar1 == 0) ||
            (QCameraParametersIntf::getStreamFormat(this_00,1,local_84), local_84[0] != 0x66)) ||
           (iVar8 = addCallbackChannel(this), iVar8 == 0)) {
          iVar1 = QCameraParametersIntf::getofflineRAW(this_00);
          if ((iVar1 != 0) && (iVar1 = QCameraParametersIntf::getQuadraCfa(this_00), iVar1 == 0)) {
            addRawChannel(this);
          }
          goto LAB_000b52d8;
        }
        if (*(int **)(this + 0x9b4) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x9b4) + 4))();
          *(undefined4 *)(this + 0x9b4) = 0;
        }
        if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000b52f6;
        uVar4 = 1;
        uVar7 = 0x278d;
        iVar9 = DAT_000b5358 + 0xb525a;
        iVar6 = DAT_000b535c + 0xb5264;
        iVar1 = iVar8;
      }
      else {
        if (*(int *)(iVar9 + 0x20) == 0) goto LAB_000b52f6;
        uVar4 = 1;
        uVar7 = 0x2782;
        iVar9 = DAT_000b5350 + 0xb50fc;
        iVar6 = DAT_000b5354 + 0xb5106;
        iVar1 = iVar8;
      }
    }
  }
  else {
    if (*(int *)(iVar9 + 0x20) == 0) {
      iVar8 = 1;
      goto LAB_000b52f6;
    }
    iVar8 = 1;
    uVar7 = 0x2744;
    iVar9 = DAT_000b529c + 0xb4fb2;
    uVar4 = 1;
    iVar6 = DAT_000b52a0 + 0xb4fbe;
  }
LAB_000b52f2:
  mm_camera_debug_log(1,uVar4,iVar6,uVar7,iVar9,iVar1);
LAB_000b52f6:
  if (1 < *puVar11) {
    if ((**(byte **)(DAT_000b53a8 + 0xb5304) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b53ac + 0xb5312) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar10 == local_28) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

