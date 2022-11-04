
/* qcamera::QCameraReprocessChannel::doReprocess(mm_camera_super_buf_t*,
   qcamera::QCameraParametersIntf&, qcamera::QCameraStream*, unsigned char) */

int __thiscall
qcamera::QCameraReprocessChannel::doReprocess
          (QCameraReprocessChannel *this,mm_camera_super_buf_t *param_1,
          QCameraParametersIntf *param_2,QCameraStream *param_3,uchar param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  QCameraStream *this_00;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined3 in_stack_00000001;
  undefined4 local_7edc;
  int local_7ed8;
  int local_7ed4;
  undefined auStack32464 [4];
  undefined local_7ecc;
  undefined4 local_7ec8;
  undefined4 uStack32452;
  undefined uStack44;
  
  piVar9 = *(int **)(DAT_000ce128 + 0xcdf22);
  iVar2 = *piVar9;
  if (*(int *)(this + 0x1c) == 0) {
    if (*(int *)(*(int *)(DAT_000ce12c + 0xce0ae) + 0x20) != 0) {
      uVar6 = 0x61f;
      iVar8 = DAT_000ce130 + 0xce0be;
      iVar7 = DAT_000ce134 + 0xce0c6;
LAB_000ce0e2:
      mm_camera_debug_log(1,1,iVar7,uVar6,iVar8);
    }
  }
  else {
    if (*(int *)(this + 0x54) != 0) {
      iVar8 = *(int *)(DAT_000ce144 + 0xcdf46);
      if ((param_3 == (QCameraStream *)0x0) && (*(int *)(iVar8 + 0x24) != 0)) {
        mm_camera_debug_log(1,2,DAT_000ce14c + 0xcdf60,0x628,DAT_000ce148 + 0xcdf58);
      }
      if (*(int *)(param_1 + 8) != 0) {
        uVar10 = 0;
        do {
          if (*(uint *)(this + 0x1c) != 0) {
            uVar5 = 0;
            do {
              if (*(int *)(this + uVar5 * 4 + 0x34) == **(int **)(param_1 + uVar10 * 4 + 0x10)) {
                this_00 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar5 * 4);
                if (((((this_00 != (QCameraStream *)0x0) &&
                      (*(int *)(this + 0x10) == *(int *)(this_00 + 100))) &&
                     ((iVar7 = QCameraParametersIntf::getofflineRAW(param_2), iVar7 == 0 ||
                      (((iVar7 = QCameraStream::isOrignalTypeOf(this_00,8), iVar7 != 0 ||
                        (iVar7 = QCameraStream::isOrignalTypeOf(this_00,2), iVar7 != 0)) ||
                       (iVar7 = QCameraStream::isOrignalTypeOf(this_00,7), iVar7 != 0)))))) &&
                    (((iVar7 = QCameraStream::isOrignalTypeOf(this_00,7), iVar7 == 0 ||
                      (iVar7 = QCameraParametersIntf::getManualCaptureMode(param_2), 2 < iVar7)) ||
                     (iVar7 = QCameraParametersIntf::getQuadraCfa(param_2), iVar7 != 0)))) &&
                   (iVar7 = QCameraStream::isTypeOf(this_00,0xb), iVar7 == 0)) {
                  __aeabi_memclr8(auStack32464,0x7ea8);
                  local_7edc = 0x60;
                  piVar3 = *(int **)(param_1 + uVar10 * 4 + 0x10);
                  local_7ed8 = piVar3[3];
                  local_7ed4 = piVar3[7];
                  uStack44 = *(undefined *)(piVar3 + 4);
                  if (param_3 == (QCameraStream *)0x0) {
                    uVar6 = 0;
                  }
                  else {
                    local_7ecc = 1;
                    local_7ec8 = QCameraStream::getMyServerID(param_3);
                    uVar6 = _param_4;
                    uStack32452 = _param_4;
                  }
                  iVar1 = local_7ed4;
                  iVar7 = local_7ed8;
                  if (*(int *)(iVar8 + 0x34) != 0) {
                    uVar4 = QCameraStream::getMyOriginalType(this_00);
                    mm_camera_debug_log(1,6,DAT_000ce154 + 0xce08c,0x64d,DAT_000ce150 + 0xce072,
                                        iVar1,iVar7,uVar6,uVar4);
                  }
                  iVar7 = QCameraStream::setParameter
                                    (this_00,(cam_stream_parm_buffer_t *)&local_7edc);
                  if (iVar7 != 0) {
                    if (*(int *)(iVar8 + 0x20) != 0) {
                      mm_camera_debug_log(1,1,DAT_000ce15c + 0xce120,0x660,DAT_000ce158 + 0xce118);
                    }
                    goto LAB_000ce0ea;
                  }
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)(this + 0x1c));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 8));
      }
      iVar7 = 0;
      goto LAB_000ce0ea;
    }
    if (*(int *)(*(int *)(DAT_000ce138 + 0xce0cc) + 0x20) != 0) {
      uVar6 = 0x623;
      iVar8 = DAT_000ce13c + 0xce0dc;
      iVar7 = DAT_000ce140 + 0xce0e4;
      goto LAB_000ce0e2;
    }
  }
  iVar7 = -1;
LAB_000ce0ea:
  if (*piVar9 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

