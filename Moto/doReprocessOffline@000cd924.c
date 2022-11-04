
/* qcamera::QCameraReprocessChannel::doReprocessOffline(mm_camera_buf_def*, mm_camera_buf_def*,
   qcamera::QCameraStream*) */

int __thiscall
qcamera::QCameraReprocessChannel::doReprocessOffline
          (QCameraReprocessChannel *this,mm_camera_buf_def *param_1,mm_camera_buf_def *param_2,
          QCameraStream *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  QCameraStream **ppQVar5;
  int iVar6;
  mm_camera_map_unmap_ops_tbl_t *pmVar7;
  undefined4 uVar8;
  int iVar9;
  QCameraStream *pQVar10;
  uint uVar11;
  mm_camera_map_unmap_ops_tbl_t *pmVar12;
  QCameraStream *pQVar13;
  int *piVar14;
  QCameraStream *pQVar15;
  undefined4 local_7edc;
  mm_camera_map_unmap_ops_tbl_t *local_7ed8;
  uint local_7ed4;
  undefined auStack32464 [4];
  undefined local_7ecc;
  QCameraStream *local_7ec4;
  undefined local_7ec0;
  mm_camera_buf_def mStack44;
  
  piVar14 = *(int **)(DAT_000cdb8c + 0xcd93c);
  iVar2 = *piVar14;
  if (param_1 == (mm_camera_buf_def *)0x0 || param_2 == (mm_camera_buf_def *)0x0) {
    if (*(int *)(*(int *)(DAT_000cdb90 + 0xcd952) + 0x20) != 0) {
      uVar8 = 0x546;
      iVar3 = DAT_000cdb94 + 0xcd966;
      iVar6 = DAT_000cdb98 + 0xcd96e;
LAB_000cda7c:
      mm_camera_debug_log(1,1,iVar6,uVar8,iVar3);
    }
  }
  else {
    if (param_3 != (QCameraStream *)0x0) {
LAB_000cd974:
      iVar3 = *(int *)(this + 0x5c);
      iVar6 = *(int *)(iVar3 + 0x10);
      if (iVar6 == iVar3) {
        pQVar13 = (QCameraStream *)0x0;
      }
      else {
        uVar4 = 0;
        do {
          puVar1 = (uint *)(iVar6 + 8);
          iVar6 = *(int *)(iVar6 + 0x10);
          if (uVar4 < *puVar1) {
            uVar4 = *puVar1;
          }
        } while (iVar6 != iVar3);
        pQVar13 = (QCameraStream *)(uVar4 + 1);
      }
      uVar4 = *(uint *)(param_2 + 0x208);
      pmVar7 = *(mm_camera_map_unmap_ops_tbl_t **)(param_2 + 0x20c);
      pQVar15 = (QCameraStream *)0x0;
      iVar3 = QCameraStream::mapBuf
                        ((uchar)param_3,6,(int)pQVar13,-1,*(void **)(param_2 + 0x204),uVar4,pmVar7);
      if (iVar3 == 0) {
        pQVar15 = *(QCameraStream **)(this + 0x5c);
        ppQVar5 = (QCameraStream **)operator_new(0x14);
        ppQVar5[4] = pQVar15;
        *ppQVar5 = param_3;
        ppQVar5[1] = (QCameraStream *)0x6;
        ppQVar5[2] = pQVar13;
        pmVar12 = (mm_camera_map_unmap_ops_tbl_t *)(pQVar13 + 1);
        ppQVar5[3] = *(QCameraStream **)(pQVar15 + 0xc);
        *(QCameraStream ***)(*(int *)(pQVar15 + 0xc) + 0x10) = ppQVar5;
        *(QCameraStream ***)(pQVar15 + 0xc) = ppQVar5;
        uVar4 = *(uint *)(param_1 + 0x208);
        pmVar7 = *(mm_camera_map_unmap_ops_tbl_t **)(param_1 + 0x20c);
        pQVar15 = (QCameraStream *)0x0;
        iVar3 = QCameraStream::mapBuf
                          ((uchar)param_3,5,(int)pmVar12,-1,*(void **)(param_1 + 0x204),uVar4,pmVar7
                          );
        if (iVar3 == 0) {
          pQVar10 = *(QCameraStream **)(this + 0x5c);
          ppQVar5 = (QCameraStream **)operator_new(0x14);
          ppQVar5[4] = pQVar10;
          *ppQVar5 = param_3;
          ppQVar5[1] = (QCameraStream *)0x5;
          ppQVar5[2] = (QCameraStream *)pmVar12;
          ppQVar5[3] = *(QCameraStream **)(pQVar10 + 0xc);
          *(QCameraStream ***)(*(int *)(pQVar10 + 0xc) + 0x10) = ppQVar5;
          *(QCameraStream ***)(pQVar10 + 0xc) = ppQVar5;
          __aeabi_memclr8(auStack32464,0x7ea8);
          local_7edc = 0x60;
          uVar11 = *(uint *)(param_1 + 0x1c);
          mStack44 = param_1[0x10];
          local_7ed8 = pmVar12;
          local_7ed4 = uVar11;
          iVar3 = (**(code **)(**(int **)(param_3 + 0x104) + 0x24))(*(int **)(param_3 + 0x104),0);
          iVar6 = QCameraStream::isOrignalTypeOf(param_3,7);
          if ((iVar6 != 0 && iVar3 != 0) && ((int)((uint)*(byte *)(iVar3 + 0x3ec) << 0x1c) < 0)) {
            if (*(int *)(*(int *)(DAT_000cdbc0 + 0xcdb64) + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000cdbc8 + 0xcdb7c,0x58c,DAT_000cdbc4 + 0xcdb74);
            }
            local_7ec0 = 1;
          }
          local_7ecc = 1;
          iVar3 = *(int *)(DAT_000cdbcc + 0xcdb04);
          local_7ec4 = pQVar13;
          if (*(int *)(iVar3 + 0x34) != 0) {
            uVar8 = QCameraStream::getMyOriginalType(param_3);
            mm_camera_debug_log(1,6,DAT_000cdbd4 + 0xcdb26,0x597,DAT_000cdbd0 + 0xcdb18,uVar11,
                                pmVar12,pQVar13,uVar8);
            uVar4 = uVar11;
            pmVar7 = pmVar12;
            pQVar15 = pQVar13;
          }
          iVar9 = QCameraStream::setParameter(param_3,(cam_stream_parm_buffer_t *)&local_7edc);
          iVar6 = iVar9;
          if (iVar9 != 0) {
            iVar6 = *(int *)(iVar3 + 0x20);
          }
          if (iVar9 != 0 && iVar6 != 0) {
            mm_camera_debug_log(1,1,DAT_000cdbdc + 0xcdb52,0x59b,DAT_000cdbd8 + 0xcdb4a,uVar4,pmVar7
                                ,pQVar15);
          }
          goto LAB_000cda84;
        }
        if (*(int *)(*(int *)(DAT_000cdbb4 + 0xcda34) + 0x20) != 0) {
          uVar8 = 0x576;
          iVar3 = DAT_000cdbb8 + 0xcda44;
          iVar6 = DAT_000cdbbc + 0xcda4c;
          goto LAB_000cda4a;
        }
      }
      else if (*(int *)(*(int *)(DAT_000cdba8 + 0xcd9dc) + 0x20) != 0) {
        uVar8 = 0x563;
        iVar3 = DAT_000cdbac + 0xcd9ec;
        iVar6 = DAT_000cdbb0 + 0xcd9f4;
LAB_000cda4a:
        mm_camera_debug_log(1,1,iVar6,uVar8,iVar3,uVar4,pmVar7,pQVar15);
      }
      iVar9 = -1;
      goto LAB_000cda84;
    }
    if (*(uint *)(this + 0x1c) != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(this + uVar4 * 4 + 0x34) == *(int *)param_1) {
          param_3 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar4 * 4);
          if (param_3 != (QCameraStream *)0x0) goto LAB_000cd974;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(this + 0x1c));
    }
    if (*(int *)(*(int *)(DAT_000cdb9c + 0xcda66) + 0x20) != 0) {
      uVar8 = 0x54d;
      iVar3 = DAT_000cdba0 + 0xcda76;
      iVar6 = DAT_000cdba4 + 0xcda7e;
      goto LAB_000cda7c;
    }
  }
  iVar9 = -0x26;
LAB_000cda84:
  if (*piVar14 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

