
/* qcamera::QCameraReprocessChannel::doReprocessOffline(mm_camera_super_buf_t*, mm_camera_buf_def*,
   qcamera::QCameraParametersIntf&) */

undefined4 __thiscall
qcamera::QCameraReprocessChannel::doReprocessOffline
          (QCameraReprocessChannel *this,mm_camera_super_buf_t *param_1,mm_camera_buf_def *param_2,
          QCameraParametersIntf *param_3)

{
  int **ppiVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  QCameraStream *this_00;
  int iVar8;
  byte bVar9;
  QCameraStream *this_01;
  uint uVar10;
  undefined8 uVar11;
  
  uVar2 = *(uint *)(this + 0x1c);
  if (uVar2 == 0) {
    if (*(int *)(*(int *)(DAT_000cdedc + 0xcde6c) + 0x20) == 0) {
      return 0xffffffff;
    }
    uVar7 = 0x5b6;
    iVar3 = DAT_000cdee0 + 0xcde7c;
    iVar4 = DAT_000cdee4 + 0xcde84;
  }
  else {
    if (*(int *)(this + 0x54) != 0) {
      if (param_1 == (mm_camera_super_buf_t *)0x0) {
        if (*(int *)(*(int *)(DAT_000cdef4 + 0xcdeb6) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cdefc + 0xcdece,0x5bf,DAT_000cdef8 + 0xcdec6);
        }
        return 0xffffffea;
      }
      if (*(int *)(param_1 + 8) == 0) {
        return 0;
      }
      uVar7 = 0;
      uVar10 = 0;
joined_r0x000cdc14:
      if (uVar2 != 0) {
        ppiVar1 = (int **)(param_1 + uVar10 * 4 + 0x10);
        uVar5 = 0;
        do {
          if (*(int *)(this + uVar5 * 4 + 0x34) == **ppiVar1) {
            this_01 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar5 * 4);
            if (((((this_01 != (QCameraStream *)0x0) &&
                  (*(int *)(this + 0x10) == *(int *)(this_01 + 100))) &&
                 ((iVar3 = QCameraParametersIntf::getofflineRAW(param_3), iVar3 == 0 ||
                  ((iVar3 = QCameraStream::isOrignalTypeOf(this_01,8), iVar3 != 0 ||
                   (iVar3 = QCameraStream::isOrignalTypeOf(this_01,7), iVar3 != 0)))))) &&
                ((iVar3 = QCameraStream::isOrignalTypeOf(this_01,7), iVar3 == 0 ||
                 ((iVar3 = QCameraParametersIntf::getManualCaptureMode(param_3), 2 < iVar3 ||
                  (iVar3 = QCameraParametersIntf::getQuadraCfa(param_3), iVar3 != 0)))))) &&
               (iVar3 = QCameraStream::isTypeOf(this_01,0xb), iVar3 == 0)) {
              if (param_2 == (mm_camera_buf_def *)0x0) goto LAB_000cdcc4;
              uVar2 = *(uint *)(*(int *)(this + 0x54) + 0x1c);
              if (uVar2 == 0) goto LAB_000cdcc4;
              uVar5 = 0;
              goto LAB_000cdcb2;
            }
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      goto LAB_000cde5a;
    }
    if (*(int *)(*(int *)(DAT_000cdee8 + 0xcde8a) + 0x20) == 0) {
      return 0xffffffff;
    }
    uVar7 = 0x5ba;
    iVar3 = DAT_000cdeec + 0xcde9a;
    iVar4 = DAT_000cdef0 + 0xcdea2;
  }
  mm_camera_debug_log(1,1,iVar4,uVar7,iVar3);
  return 0xffffffff;
  while (uVar5 = uVar5 + 1, uVar5 < uVar2) {
LAB_000cdcb2:
    this_00 = *(QCameraStream **)(*(int *)(*(int *)(this + 0x54) + 0x18) + uVar5 * 4);
    if ((this_00 != (QCameraStream *)0x0) && (*(int *)(this_00 + 0x68) == **ppiVar1)) {
      iVar3 = *(int *)(param_2 + 0x208);
      if ((iVar3 == 0) || (*(char *)(iVar3 + 0x3b) == '\0')) break;
      pbVar6 = (byte *)(iVar3 + 0x22fc);
      if (7 < *pbVar6) {
        if (*(int *)(*(int *)(DAT_000cdf00 + 0xcdd0e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cdf08 + 0xcdd28,0x5f8,DAT_000cdf04 + 0xcdd20);
        }
        break;
      }
      iVar8 = *(int *)(iVar3 + 0x2300);
      iVar4 = QCameraStream::getMyServerID(this_00);
      if (iVar8 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar8 = *(int *)(iVar3 + 0x2324);
        iVar4 = QCameraStream::getMyServerID(this_00);
        if (iVar8 == iVar4) {
          iVar4 = 1;
        }
        else {
          iVar8 = *(int *)(iVar3 + 0x2348);
          iVar4 = QCameraStream::getMyServerID(this_00);
          if (iVar8 == iVar4) {
            iVar4 = 2;
          }
          else {
            iVar8 = *(int *)(iVar3 + 0x236c);
            iVar4 = QCameraStream::getMyServerID(this_00);
            if (iVar8 == iVar4) {
              iVar4 = 3;
            }
            else {
              iVar8 = *(int *)(iVar3 + 0x2390);
              iVar4 = QCameraStream::getMyServerID(this_00);
              if (iVar8 == iVar4) {
                iVar4 = 4;
              }
              else {
                iVar8 = *(int *)(iVar3 + 0x23b4);
                iVar4 = QCameraStream::getMyServerID(this_00);
                if (iVar8 == iVar4) {
                  iVar4 = 5;
                }
                else {
                  iVar8 = *(int *)(iVar3 + 0x23d8);
                  iVar4 = QCameraStream::getMyServerID(this_00);
                  if (iVar8 == iVar4) {
                    iVar4 = 6;
                  }
                  else {
                    iVar4 = *(int *)(iVar3 + 0x23fc);
                    iVar8 = QCameraStream::getMyServerID(this_00);
                    if (iVar4 != iVar8) break;
                    iVar4 = 7;
                  }
                }
              }
            }
          }
        }
      }
      bVar9 = *pbVar6;
      iVar4 = iVar3 + 0x2300 + iVar4 * 0x24;
      iVar3 = iVar3 + 0x2300 + (uint)bVar9 * 0x24;
      uVar11 = *(undefined8 *)(iVar4 + 0xc);
      *(undefined8 *)(iVar3 + 4) = *(undefined8 *)(iVar4 + 4);
      *(undefined8 *)(iVar3 + 0xc) = uVar11;
      uVar11 = *(undefined8 *)(iVar4 + 0x1c);
      *(undefined8 *)(iVar3 + 0x14) = *(undefined8 *)(iVar4 + 0x14);
      *(undefined8 *)(iVar3 + 0x1c) = uVar11;
      if (*(int *)(this + 0x1c) == 0) goto LAB_000cde2e;
      uVar2 = 0;
      bVar9 = 0;
      goto LAB_000cddde;
    }
  }
  goto LAB_000cdcc4;
  while( true ) {
    bVar9 = bVar9 + 1;
    uVar2 = (uint)bVar9;
    if (*(uint *)(this + 0x1c) <= uVar2) break;
LAB_000cddde:
    iVar3 = QCameraStream::getMyType(this_00);
    iVar4 = QCameraStream::getMyOriginalType(*(QCameraStream **)(*(int *)(this + 0x18) + uVar2 * 4))
    ;
    if (iVar3 == iVar4) {
      uVar7 = QCameraStream::getMyServerID(*(QCameraStream **)(*(int *)(this + 0x18) + uVar2 * 4));
      bVar9 = *pbVar6;
      *(undefined4 *)(pbVar6 + (uint)bVar9 * 0x24 + 4) = uVar7;
      goto LAB_000cde2e;
    }
  }
  bVar9 = *pbVar6;
LAB_000cde2e:
  *pbVar6 = bVar9 + 1;
LAB_000cdcc4:
  uVar7 = doReprocessOffline(this,(mm_camera_buf_def *)*ppiVar1,param_2,this_01);
LAB_000cde5a:
  uVar10 = uVar10 + 1;
  if (*(uint *)(param_1 + 8) <= uVar10) {
    return uVar7;
  }
  uVar2 = *(uint *)(this + 0x1c);
  goto joined_r0x000cdc14;
}

