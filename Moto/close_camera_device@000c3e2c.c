
/* qcamera::QCameraMuxer::close_camera_device(hw_device_t*) */

int qcamera::QCameraMuxer::close_camera_device(hw_device_t *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  QCamera2HardwareInterface *this;
  hw_device_t *phVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  iVar12 = *(int *)(DAT_000c4138 + 0xc3e3a);
  if (*(int *)(iVar12 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000c4140 + 0xc3e56,0x6ad,DAT_000c413c + 0xc3e4e);
  }
  piVar2 = *(int **)(DAT_000c4144 + 0xc3e5e);
  iVar6 = *piVar2;
  if (iVar6 == 0) {
    if (*(int *)(iVar12 + 0x20) == 0) {
      return -0x13;
    }
    uVar8 = 0x6ae;
    iVar12 = DAT_000c4148 + 0xc4004;
    iVar6 = DAT_000c414c + 0xc400c;
  }
  else {
    if ((param_1 != (hw_device_t *)0x0) && (iVar15 = *(int *)(param_1 + 0x44), iVar15 != 0)) {
      if (*(char *)(iVar15 + 0x58) == '\0') {
        iVar9 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar15 + 0x54);
        iVar9 = 0;
        if (1 < uVar3) {
          iVar7 = *(int *)(iVar6 + 0x2c);
          piVar11 = (int *)(iVar15 + 0x5c);
          iVar6 = *piVar11;
          if (iVar7 + iVar6 * 0x38 != 0) {
            uVar14 = 0;
            iVar9 = 0;
            do {
              iVar7 = iVar7 + iVar6 * 0x38;
              this = *(QCamera2HardwareInterface **)(iVar7 + 0x30);
              if (this == (QCamera2HardwareInterface *)0x0) {
                if (*(int *)(iVar12 + 0x20) == 0) {
                  return -0x13;
                }
                uVar8 = 0x6bf;
                iVar12 = DAT_000c4160 + 0xc4032;
                iVar6 = DAT_000c4164 + 0xc403a;
                goto LAB_000c400a;
              }
              piVar1 = (int *)(iVar7 + 0x10);
              iVar6 = *piVar1;
              if (iVar6 == 0) {
                uVar13 = 0;
                do {
                  if (uVar13 != *(byte *)(iVar15 + 0x59)) {
                    uVar3 = *(uint *)(iVar15 + 100 + uVar13 * 4);
                    if (*(int *)(iVar12 + 0x28) != 0) {
                      mm_camera_debug_log(1,3,DAT_000c416c + 0xc3f10,0x6ca,DAT_000c4168 + 0xc3f00,
                                          *piVar11,*(undefined4 *)(iVar15 + uVar14 * 4 + 100),uVar3)
                      ;
                    }
                    iVar9 = QCamera2HardwareInterface::bundleRelatedCameras(this,false,uVar3);
                    if (iVar9 != 0) {
                      if (*(int *)(iVar12 + 0x20) != 0) {
                        mm_camera_debug_log(1,1,DAT_000c4174 + 0xc3f4a,0x6cd,DAT_000c4170 + 0xc3f42)
                        ;
                      }
                      break;
                    }
                    uVar3 = *(uint *)(iVar15 + 0x54);
                    iVar9 = 0;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar3);
                iVar6 = *piVar1;
              }
              iVar7 = iVar9;
              if (iVar6 == 1) {
                uVar3 = *(uint *)(iVar15 + (uint)*(byte *)(iVar15 + 0x59) * 4 + 100);
                if (*(int *)(iVar12 + 0x28) != 0) {
                  mm_camera_debug_log(1,3,DAT_000c417c + 0xc3f84,0x6d8,DAT_000c4178 + 0xc3f74,
                                      *piVar11,*(undefined4 *)(iVar15 + uVar14 * 4 + 100),uVar3);
                }
                iVar9 = QCamera2HardwareInterface::bundleRelatedCameras(this,false,uVar3);
                iVar7 = 0;
                if (iVar9 != 0) {
                  if (*(int *)(iVar12 + 0x20) != 0) {
                    mm_camera_debug_log(1,1,DAT_000c4184 + 0xc405a,0x6db,DAT_000c4180 + 0xc4052);
                  }
                  goto LAB_000c405e;
                }
              }
              iVar9 = iVar7;
              uVar3 = *(uint *)(iVar15 + 0x54);
              uVar14 = uVar14 + 1;
              if (uVar3 <= uVar14) goto LAB_000c405e;
              piVar11 = (int *)(iVar15 + uVar14 * 4 + 0x5c);
              iVar6 = *piVar11;
              iVar7 = *(int *)(*piVar2 + 0x2c);
            } while (iVar7 + iVar6 * 0x38 != 0);
          }
          if (*(int *)(iVar12 + 0x20) == 0) {
            return -0x13;
          }
          uVar8 = 0x6bc;
          iVar12 = DAT_000c4158 + 0xc3fd0;
          iVar6 = DAT_000c415c + 0xc3fd8;
          goto LAB_000c400a;
        }
LAB_000c405e:
        *(undefined *)(iVar15 + 0x58) = 0;
        iVar6 = *piVar2;
      }
      if (*(int *)(iVar15 + 0x54) != 0) {
        uVar3 = 0;
        iVar7 = DAT_000c4188 + 0xc407a;
        iVar4 = DAT_000c418c + 0xc4080;
        iVar5 = DAT_000c4190 + 0xc4086;
        do {
          iVar6 = *(int *)(iVar6 + 0x2c) + *(int *)(iVar15 + 0x5c + uVar3 * 4) * 0x38;
          if (iVar6 == 0) {
            if (*(int *)(iVar12 + 0x20) == 0) {
              return -0x13;
            }
            uVar8 = 0x6e7;
            iVar12 = DAT_000c4194 + 0xc4130;
            iVar6 = (int)&DAT_000c4138 + DAT_000c4198;
            goto LAB_000c400a;
          }
          phVar10 = *(hw_device_t **)(iVar6 + 0x34);
          if (*(int *)(iVar12 + 0x28) != 0) {
            mm_camera_debug_log(1,3,iVar4,0x6ea,iVar5,phVar10,*(undefined4 *)(iVar6 + 0x30));
          }
          iVar9 = QCamera2HardwareInterface::close_camera_device(phVar10);
          if ((iVar9 != 0) && (*(int *)(iVar12 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,iVar4,0x6ee,iVar7);
          }
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar6 + 0x30) = 0;
          *(hw_device_t **)(iVar6 + 0x34) = (hw_device_t *)0x0;
          iVar6 = *piVar2;
        } while (uVar3 < *(uint *)(iVar15 + 0x54));
      }
      *(undefined4 *)(iVar6 + 0x20) = 0;
      if (*(int *)(iVar12 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000c41a0 + 0xc4116,0x6f6,DAT_000c419c + 0xc410c,iVar9);
        return iVar9;
      }
      return iVar9;
    }
    if (*(int *)(iVar12 + 0x20) == 0) {
      return -0x13;
    }
    uVar8 = 0x6b3;
    iVar12 = DAT_000c4150 + 0xc3fea;
    iVar6 = DAT_000c4154 + 0xc3ff2;
  }
LAB_000c400a:
  mm_camera_debug_log(1,1,iVar6,uVar8,iVar12);
  return -0x13;
}

