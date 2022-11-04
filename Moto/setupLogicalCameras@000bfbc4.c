
/* qcamera::QCameraMuxer::setupLogicalCameras() */

undefined4 __thiscall qcamera::QCameraMuxer::setupLogicalCameras(QCameraMuxer *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  char acStack132 [92];
  int local_28;
  
  piVar15 = *(int **)(DAT_000bfce4 + 0xbfbd2);
  local_28 = *piVar15;
  iVar14 = *(int *)(DAT_000bfce8 + 0xbfbe0);
  if (*(int *)(iVar14 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bfcf0 + 0xbfc00,0x70a,DAT_000bfcec + 0xbfbf4,0);
  }
  iVar9 = DAT_000bfcf8 + 0xbfc0e;
  property_get(DAT_000bfcf4 + 0xbfc10,acStack132,iVar9);
  iVar1 = atoi(acStack132);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[0x38] = SUB41(iVar1,0);
  property_get(DAT_000bfcfc + 0xbfc2e,acStack132,iVar9);
  iVar1 = atoi(acStack132);
  iVar9 = 2;
  if (iVar1 == 0) {
    iVar9 = 1;
  }
  uVar2 = (uint)(byte)this[0x39];
  if ((uVar2 - 1 & 0xff) < 5) {
    pvVar3 = operator_new__(uVar2 * 0x38);
    *(void **)(this + 0x2c) = pvVar3;
    __aeabi_memclr8(pvVar3,uVar2 * 0x38);
    this[0x3a] = (QCameraMuxer)0x0;
    if (this[0x39] != (QCameraMuxer)0x0) {
      iVar13 = 0x14;
      uVar2 = 0;
      iVar1 = DAT_000c0040 + 0xbfcac;
      iVar4 = DAT_000c0048 + 0xbfcb4;
      iVar10 = DAT_000c0044 + 0xbfcb6;
      do {
        uVar8 = QCamera2HardwareInterface::getCapabilities
                          (uVar2,(camera_info *)(*(int *)(this + 0x2c) + iVar13),
                           (cam_sync_type_t *)((camera_info *)(*(int *)(this + 0x2c) + iVar13) + -8)
                          );
        *(uint *)(*(int *)(this + 0x2c) + iVar13 + -0x14) = uVar2;
        *(undefined4 *)(*(int *)(this + 0x2c) + iVar13 + -0xc) = 0x100;
        *(undefined4 *)(*(int *)(this + 0x2c) + iVar13 + -4) = 0;
        if ((this[0x38] == (QCameraMuxer)0x0) &&
           (*(int *)(*(int *)(this + 0x2c) + iVar13 + -8) != iVar9)) {
          *(undefined4 *)(*(int *)(this + 0x2c) + iVar13 + -4) = 1;
          if (*(int *)(iVar14 + 0x28) != 0) {
            uVar7 = 0x734;
            uVar5 = *(undefined4 *)(*(int *)(this + 0x2c) + iVar13);
            uVar6 = *(undefined4 *)(*(int *)(this + 0x2c) + iVar13 + -8);
            iVar16 = iVar1;
LAB_000bfd7a:
            mm_camera_debug_log(1,3,iVar10,uVar7,iVar16,uVar2,uVar6,uVar5);
          }
        }
        else {
          this[0x3a] = (QCameraMuxer)((char)this[0x3a] + '\x01');
          if (*(int *)(iVar14 + 0x28) != 0) {
            uVar7 = 0x73a;
            uVar5 = *(undefined4 *)(*(int *)(this + 0x2c) + iVar13);
            uVar6 = *(undefined4 *)(*(int *)(this + 0x2c) + iVar13 + -8);
            iVar16 = iVar4;
            goto LAB_000bfd7a;
          }
        }
        uVar2 = uVar2 + 1;
        iVar13 = iVar13 + 0x38;
      } while (uVar2 < (byte)this[0x39]);
      if ((byte)this[0x3a] != 0) {
        uVar2 = (uint)(byte)this[0x3a] * 0x7c;
        pvVar3 = operator_new__(uVar2);
        *(void **)(this + 0x30) = pvVar3;
        __aeabi_memclr8(pvVar3,uVar2);
        uVar2 = (uint)(byte)this[0x39];
        if (uVar2 != 0) {
          iVar9 = 0;
          iVar4 = 0;
          uVar11 = 0;
          iVar1 = DAT_000c0054 + 0xbfdd0;
          do {
            if (*(int *)(*(int *)(this + 0x2c) + iVar9 + 0x10) == 0) {
              *(undefined *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x59) = 0;
              *(int *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x4c) = iVar4;
              *(undefined4 *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x48) = 0x100;
              *(uint *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x5c) = uVar11;
              *(undefined4 *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x6c) = 1;
              *(undefined4 *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x74) = 0;
              *(undefined4 *)(*(int *)(this + 0x30) + iVar4 * 0x7c + 0x50) =
                   *(undefined4 *)(*(int *)(this + 0x2c) + iVar9 + 0x14);
              iVar10 = *(int *)(this + 0x30) + iVar4 * 0x7c;
              *(int *)(iVar10 + 0x54) = *(int *)(iVar10 + 0x54) + 1;
              if (*(int *)(iVar14 + 0x28) != 0) {
                iVar10 = *(int *)(this + 0x30) + iVar4 * 0x7c;
                mm_camera_debug_log(1,3,DAT_000c0058 + 0xbfe76,0x761,iVar1,
                                    *(undefined4 *)(iVar10 + 0x4c),*(undefined4 *)(iVar10 + 0x50),
                                    *(undefined4 *)(iVar10 + 0x5c),*(undefined4 *)(iVar10 + 0x6c),
                                    *(undefined4 *)(iVar10 + 0x74));
              }
              uVar2 = (uint)(byte)this[0x39];
              iVar4 = iVar4 + 1;
            }
            iVar9 = iVar9 + 0x38;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
          if (uVar2 != 0) {
            uVar11 = 0;
            iVar1 = DAT_000c005c + 0xbfe96;
            iVar9 = DAT_000c0060 + 0xbfe9e;
            do {
              if ((*(int *)(*(int *)(this + 0x2c) + uVar11 * 0x38 + 0x10) == 1) &&
                 (this[0x3a] != (QCameraMuxer)0x0)) {
                uVar2 = 0;
                iVar4 = 0x50;
                do {
                  iVar13 = *(int *)(this + 0x30);
                  iVar10 = *(int *)(iVar13 + iVar4 + 4);
                  if ((iVar10 < 2) &&
                     (*(int *)(iVar13 + iVar4) ==
                      *(int *)(*(int *)(this + 0x2c) + uVar11 * 0x38 + 0x14))) {
                    *(uint *)(iVar13 + iVar10 * 4 + iVar4 + 0xc) = uVar11;
                    *(undefined4 *)(*(int *)(this + 0x30) + iVar10 * 4 + iVar4 + 0x1c) = 2;
                    *(undefined4 *)(*(int *)(this + 0x30) + iVar10 * 4 + iVar4 + 0x24) = 1;
                    *(int *)(*(int *)(this + 0x30) + iVar4 + 4) =
                         *(int *)(*(int *)(this + 0x30) + iVar4 + 4) + 1;
                    if (*(int *)(iVar14 + 0x28) != 0) {
                      iVar13 = *(int *)(this + 0x30) + iVar10 * 4 + iVar4;
                      mm_camera_debug_log(1,3,iVar9,0x776,iVar1,iVar10,uVar2,
                                          *(undefined4 *)(iVar13 + 0xc),
                                          *(undefined4 *)(iVar13 + 0x1c),
                                          *(undefined4 *)(iVar13 + 0x24));
                    }
                  }
                  iVar4 = iVar4 + 0x7c;
                  uVar2 = uVar2 + 1;
                } while (uVar2 < (byte)this[0x3a]);
                uVar2 = (uint)(byte)this[0x39];
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar2);
          }
        }
        if (this[0x3a] != (QCameraMuxer)0x0) {
          iVar1 = *(int *)(this + 0x30);
          uVar2 = 0;
          iVar9 = DAT_000c0064 + 0xbff68;
          do {
            if (*(int *)(iVar1 + uVar2 * 0x7c + 0x54) != 0) {
              uVar11 = 0;
              bVar12 = 0;
              do {
                if (*(int *)(iVar14 + 0x28) != 0) {
                  iVar1 = iVar1 + uVar2 * 0x7c;
                  iVar4 = iVar1 + uVar11 * 4;
                  mm_camera_debug_log(1,3,DAT_000c0068 + 0xbffa8,0x782,iVar9,uVar2,uVar11,
                                      *(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar4 + 0x5c),
                                      *(undefined4 *)(iVar4 + 0x6c),*(undefined4 *)(iVar4 + 0x74));
                  iVar1 = *(int *)(this + 0x30);
                }
                bVar12 = bVar12 + 1;
                uVar11 = (uint)bVar12;
              } while (uVar11 < *(uint *)(iVar1 + uVar2 * 0x7c + 0x54));
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < (byte)this[0x3a]);
        }
        if (*(int *)(iVar14 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000c0070 + 0xbffe6,0x785,DAT_000c006c + 0xbffdc,uVar8);
        }
        goto LAB_000c0028;
      }
    }
    if (*(int *)(iVar14 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c0050 + 0xc0004,0x740,DAT_000c004c + 0xbfffc);
    }
    if (*(void **)(this + 0x2c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x2c));
    }
    uVar8 = 0xffffffed;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  else if (*(int *)(iVar14 + 0x20) == 0) {
    uVar8 = 0xffffffea;
  }
  else {
    mm_camera_debug_log(1,1,DAT_000bfd04 + 0xbfc6a,0x719,DAT_000bfd00 + 0xbfc5e,uVar2);
    uVar8 = 0xffffffea;
  }
LAB_000c0028:
  if (*piVar15 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

