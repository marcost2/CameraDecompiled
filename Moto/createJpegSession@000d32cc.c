
/* qcamera::QCameraPostProcessor::createJpegSession(qcamera::QCameraChannel*) */

int __thiscall
qcamera::QCameraPostProcessor::createJpegSession(QCameraPostProcessor *this,QCameraChannel *param_1)

{
  QCameraStream *pQVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  QCameraStream *pQVar6;
  QCameraStream *pQVar7;
  undefined4 uVar8;
  int iVar9;
  QCameraChannel *this_00;
  uint uVar10;
  int *piVar11;
  int iVar12;
  QCameraStream *pQVar13;
  QCameraStream *pQVar14;
  mm_jpeg_encode_params_t amStack80064 [80028];
  
  piVar11 = *(int **)(DAT_000d35d4 + 0xd32e4);
  iVar2 = *piVar11;
  iVar9 = *(int *)(DAT_000d35d8 + 0xd32f0);
  if (*(int *)(iVar9 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d35e0 + 0xd3308,0x197,DAT_000d35dc + 0xd3300);
  }
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(iVar9 + 0x20) != 0) {
      uVar8 = 0x199;
      iVar9 = DAT_000d35e4 + 0xd3416;
      iVar3 = DAT_000d35e8 + 0xd341e;
LAB_000d3434:
      mm_camera_debug_log(1,1,iVar3,uVar8,iVar9);
    }
  }
  else {
    if (param_1 != (QCameraChannel *)0x0) {
      if (0 < (char)this[0x140]) {
        iVar12 = (char)this[0x140] + -1;
        iVar3 = QCamera2HardwareInterface::needReprocess(*(QCamera2HardwareInterface **)(this + 8));
        this_00 = param_1;
        if (iVar3 != 0) {
          this_00 = *(QCameraChannel **)(this + iVar12 * 4 + 0x144);
        }
        iVar3 = QCameraParametersIntf::isZSLMode
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if (iVar3 == 0) {
LAB_000d3370:
          uVar5 = QCameraParametersIntf::generateThumbFromMain
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
          uVar5 = uVar5 ^ 1;
        }
        else {
          iVar3 = QCameraParametersIntf::getFlipMode
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),3);
          iVar4 = QCameraParametersIntf::getFlipMode
                            ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac),1);
          if (iVar3 == iVar4) goto LAB_000d3370;
          uVar5 = 0;
        }
        if (this_00 == (QCameraChannel *)0x0) {
          if (*(int *)(iVar9 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d35f8 + 0xd3460,0x1b6,DAT_000d35f4 + 0xd3456,iVar12);
          }
          iVar3 = -0x80000000;
          goto LAB_000d35b8;
        }
        if (*(int *)(this_00 + 0x1c) == 0) {
          pQVar14 = (QCameraStream *)0x0;
          pQVar13 = (QCameraStream *)0x0;
        }
        else {
          uVar10 = 0;
          pQVar14 = (QCameraStream *)0x0;
          pQVar7 = (QCameraStream *)0x0;
          do {
            pQVar6 = (QCameraStream *)QCameraChannel::getStreamByIndex(this_00,uVar10);
            pQVar13 = pQVar7;
            if (pQVar6 == (QCameraStream *)0x0) break;
            iVar3 = QCameraStream::isTypeOf(pQVar6,3);
            pQVar1 = pQVar6;
            if ((iVar3 == 0) &&
               (iVar3 = QCameraStream::isOrignalTypeOf(pQVar6,3), pQVar1 = pQVar14, iVar3 != 0)) {
              pQVar1 = pQVar6;
            }
            pQVar14 = pQVar1;
            if ((((uVar5 != 0) &&
                 (iVar3 = QCameraStream::isTypeOf(pQVar6,1), pQVar13 = pQVar6, iVar3 == 0)) &&
                (iVar3 = QCameraStream::isTypeOf(pQVar6,2), iVar3 == 0)) &&
               ((iVar3 = QCameraStream::isOrignalTypeOf(pQVar6,1), iVar3 == 0 &&
                (iVar3 = QCameraStream::isOrignalTypeOf(pQVar6,2), pQVar13 = pQVar7, iVar3 != 0))))
            {
              pQVar13 = pQVar6;
            }
            uVar10 = uVar10 + 1;
            pQVar7 = pQVar13;
          } while (uVar10 < *(uint *)(this_00 + 0x1c));
        }
        pQVar7 = pQVar13;
        if (pQVar13 != (QCameraStream *)0x0) {
          pQVar7 = (QCameraStream *)0x1;
        }
        if (((uint)pQVar7 | uVar5 ^ 1) == 0) {
          if ((this_00 == *(QCameraChannel **)(this + iVar12 * 4 + 0x144)) &&
             (*(int *)(param_1 + 0x1c) != 0)) {
            uVar5 = 0;
            pQVar7 = (QCameraStream *)0x0;
            do {
              pQVar6 = (QCameraStream *)QCameraChannel::getStreamByIndex(param_1,uVar5);
              pQVar13 = pQVar7;
              if (pQVar6 == (QCameraStream *)0x0) break;
              iVar3 = QCameraStream::isTypeOf(pQVar6,2);
              pQVar13 = pQVar6;
              if ((((iVar3 == 0) && (iVar3 = QCameraStream::isOrignalTypeOf(pQVar6,2), iVar3 == 0))
                  && (iVar3 = QCameraStream::isTypeOf(pQVar6,1), iVar3 == 0)) &&
                 (iVar3 = QCameraStream::isOrignalTypeOf(pQVar6,1), pQVar13 = pQVar7, iVar3 != 0)) {
                pQVar13 = pQVar6;
              }
              uVar5 = uVar5 + 1;
              pQVar7 = pQVar13;
            } while (uVar5 < *(uint *)(param_1 + 0x1c));
          }
          else {
            pQVar13 = (QCameraStream *)0x0;
          }
        }
        pQVar7 = pQVar13;
        if (pQVar13 != (QCameraStream *)0x0) {
          pQVar7 = (QCameraStream *)0x1;
        }
        this[0x2f4] = SUB41(pQVar7,0);
        if (pQVar14 != (QCameraStream *)0x0) {
          __aeabi_memclr8(amStack80064,(size_t)&DAT_00013890);
          iVar3 = getJpegEncodingConfig(this,amStack80064,pQVar14,pQVar13);
          if (iVar3 != 0) {
            if (*(int *)(iVar9 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d3600 + 0xd34f0,0x1ec,DAT_000d35fc + 0xd34e8);
            }
            goto LAB_000d35b8;
          }
          if (*(int *)(iVar9 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d3608 + 0xd350c,0x1ef,DAT_000d3604 + 0xd3504);
          }
          iVar3 = (**(code **)(this + 0x1c))(*(undefined4 *)(this + 0x30),amStack80064,this + 0x34);
          if (iVar3 != 0) {
            if (*(int *)(iVar9 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000d3610 + 0xd353c,0x1f5,DAT_000d360c + 0xd3534);
            }
            goto LAB_000d35b8;
          }
          this[0x2d0] = (QCameraPostProcessor)0x0;
        }
      }
      if (*(int *)(iVar9 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d3618 + 0xd35b4,0x1fb,DAT_000d3614 + 0xd35ac);
      }
      iVar3 = 0;
      goto LAB_000d35b8;
    }
    if (*(int *)(iVar9 + 0x20) != 0) {
      uVar8 = 0x19e;
      iVar9 = DAT_000d35ec + 0xd342e;
      iVar3 = DAT_000d35f0 + 0xd3436;
      goto LAB_000d3434;
    }
  }
  iVar3 = -0x80000000;
LAB_000d35b8:
  if (*piVar11 == iVar2) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

