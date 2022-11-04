
/* qcamera::QCamera3HardwareInterface::validateStreamDimensions(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateStreamDimensions
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if (*(int *)param_1 != 0) {
    uVar6 = 0;
    piVar4 = (int *)0x0;
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 4) + uVar6 * 4);
      if ((*piVar5 == 1) && (bVar12 = piVar4 != (int *)0x0, piVar4 = piVar5, bVar12)) {
        iVar11 = *(int *)(*(int *)(DAT_0003c350 + 0x3c328) + 0x20);
        goto joined_r0x0003c32a;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)param_1);
    if (*(int *)param_1 != 0) {
      uVar6 = 0;
      iVar11 = *(int *)(DAT_0003c35c + 0x3c1b4);
      do {
        piVar8 = *(int **)(*(int *)(param_1 + 4) + uVar6 * 4);
        piVar5 = piVar8 + 2;
        piVar4 = piVar8 + 1;
        if ((piVar8[8] | 2U) == 3) {
          piVar4 = piVar5;
          piVar5 = piVar8 + 1;
        }
        iVar9 = *piVar5;
        iVar7 = *piVar4;
        iVar10 = piVar8[3];
        if (iVar10 - 0x24U < 2) {
LAB_0003c1f4:
          iVar10 = *(int *)(iVar11 + *(int *)(this + 0x4c) * 4);
          uVar3 = *(uint *)(iVar10 + 0x2ad8);
          if (0x27 < uVar3) {
            uVar3 = 0x28;
          }
          if (uVar3 == 0) {
LAB_0003c2ec:
            iVar11 = *(int *)(*(int *)(DAT_0003c360 + 0x3c2f2) + 0x20);
joined_r0x0003c32a:
            if (iVar11 != 0) {
              mm_camera_debug_log();
            }
            return 0xffffffea;
          }
          uVar2 = 0;
          while ((*(int *)(iVar10 + 0x2adc + uVar2 * 8) != iVar7 ||
                 (*(int *)(iVar10 + 0x2ae0 + uVar2 * 8) != iVar9))) {
            uVar2 = uVar2 + 1;
            if (uVar3 <= uVar2) goto LAB_0003c2ec;
          }
        }
        else if (iVar10 == 0x21) {
          iVar10 = *(int *)(iVar11 + *(int *)(this + 0x4c) * 4);
          uVar3 = *(uint *)(iVar10 + 0x5c4);
          if (0x27 < uVar3) {
            uVar3 = 0x28;
          }
          if (uVar3 == 0) goto LAB_0003c2ec;
          piVar4 = (int *)(iVar10 + 0x5c8);
          iVar10 = 0xb9;
          while( true ) {
            iVar1 = *piVar4;
            bVar12 = iVar7 == iVar1;
            if (bVar12) {
              iVar1 = piVar4[1];
            }
            if (bVar12 && iVar9 == iVar1) break;
            piVar4 = piVar4 + 2;
            uVar2 = iVar10 - 0xb8;
            iVar10 = iVar10 + 1;
            if (uVar3 <= uVar2) goto LAB_0003c2ec;
          }
        }
        else {
          if (iVar10 == 0x20) goto LAB_0003c1f4;
          if ((((1 < *piVar8 - 1U) && ((piVar8[4] & 0x60000U) != 0x60000)) ||
              (iVar10 = *(int *)(iVar11 + *(int *)(this + 0x4c) * 4),
              iVar7 != *(int *)(iVar10 + 0x3410))) || (iVar9 != *(int *)(iVar10 + 0x3414))) {
            iVar10 = *(int *)(iVar11 + *(int *)(this + 0x4c) * 4);
            uVar3 = *(uint *)(iVar10 + 0x5c4);
            if (0x27 < uVar3) {
              uVar3 = 0x28;
            }
            if (uVar3 == 0) goto LAB_0003c2ec;
            piVar4 = (int *)(iVar10 + 0x5c8);
            iVar10 = 0xb9;
            while( true ) {
              iVar1 = *piVar4;
              bVar12 = iVar7 == iVar1;
              if (bVar12) {
                iVar1 = piVar4[1];
              }
              if (bVar12 && iVar9 == iVar1) break;
              piVar4 = piVar4 + 2;
              uVar2 = iVar10 - 0xb8;
              iVar10 = iVar10 + 1;
              if (uVar3 <= uVar2) goto LAB_0003c2ec;
            }
          }
        }
        uVar6 = uVar6 + 1;
        if (*(uint *)param_1 <= uVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

