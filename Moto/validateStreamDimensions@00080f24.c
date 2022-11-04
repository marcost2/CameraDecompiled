
/* qcamera::QCamera3HardwareInterface::validateStreamDimensions(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateStreamDimensions
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  int iVar1;
  QCamera3HardwareInterface QVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  if (*(uint *)param_1 != 0) {
    piVar8 = (int *)0x0;
    uVar6 = 0;
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 4) + uVar6 * 4);
      iVar10 = piVar4[1];
      bVar13 = iVar10 == 1;
      iVar1 = iVar10 + -1;
      if (iVar10 >= 1) {
        bVar13 = piVar4[2] == 0;
        iVar1 = piVar4[2];
      }
      if (bVar13 || iVar1 < 0 != (iVar10 < 1 && SBORROW4(iVar10,1))) {
        if (*(int *)(*(int *)(DAT_000811c4 + 0x81176) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar7 = 0x4c0;
        iVar1 = DAT_000811c8 + 0x81186;
        iVar10 = DAT_000811cc + 0x81192;
        goto LAB_000811ae;
      }
      if ((*piVar4 == 1) && (bVar13 = piVar8 != (int *)0x0, piVar8 = piVar4, bVar13)) {
        if (*(int *)(*(int *)(DAT_000811d0 + 0x81198) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar7 = 0x4c6;
        iVar1 = DAT_000811d4 + 0x811a8;
        iVar10 = DAT_000811d8 + 0x811b0;
        goto LAB_000811ae;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)param_1);
    uVar6 = 0;
    iVar1 = *(int *)(DAT_000811dc + 0x80f76);
    do {
      piVar9 = *(int **)(*(int *)(param_1 + 4) + uVar6 * 4);
      piVar4 = piVar9 + 2;
      piVar8 = piVar9 + 1;
      if ((piVar9[8] | 2U) == 3) {
        piVar8 = piVar4;
        piVar4 = piVar9 + 1;
      }
      iVar12 = piVar9[3];
      iVar10 = *piVar4;
      iVar3 = *piVar8;
      if (iVar12 - 0x24U < 2) {
LAB_00080fb6:
        iVar12 = *(int *)(iVar1 + *(int *)(this + 0x60) * 4);
        uVar5 = *(uint *)(iVar12 + 0x2ae8);
        if (0x27 < uVar5) {
          uVar5 = 0x28;
        }
        if (uVar5 != 0) {
          uVar11 = 0;
          do {
            if ((*(int *)(iVar12 + 0x2aec + uVar11 * 8) == iVar3) &&
               (*(int *)(iVar12 + 0x2af0 + uVar11 * 8) == iVar10)) goto LAB_000810e6;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar5);
        }
        if (((this[0x118013] == (QCamera3HardwareInterface)0x0) ||
            (*(int *)(iVar12 + 0x25b4) < iVar3)) || (*(int *)(iVar12 + 0x25b8) < iVar10)) {
LAB_0008112e:
          if (*(int *)(*(int *)(DAT_000811ec + 0x81134) + 0x20) != 0) {
            iVar1 = DAT_000811f0 + 0x81150;
            uVar7 = 0x534;
            iVar10 = DAT_000811f4 + 0x81168;
LAB_000811ae:
            mm_camera_debug_log(1,1,iVar10,uVar7,iVar1);
          }
          return 0xffffffea;
        }
        if (*piVar9 == 0) {
          QVar2 = (QCamera3HardwareInterface)0x1;
        }
        else {
          if (*piVar9 != 1) goto LAB_000810e6;
          QVar2 = (QCamera3HardwareInterface)0x2;
        }
        this[0x118014] = QVar2;
      }
      else if (iVar12 == 0x21) {
        iVar12 = *(int *)(iVar1 + *(int *)(this + 0x60) * 4);
        uVar5 = *(uint *)(iVar12 + 0x5c8);
        if (0x27 < uVar5) {
          uVar5 = 0x28;
        }
        if (uVar5 != 0) {
          uVar11 = 0;
          do {
            if ((iVar3 == *(int *)(iVar12 + 0x5cc + uVar11 * 8)) &&
               (iVar10 == *(int *)(iVar12 + 0x5d0 + uVar11 * 8))) goto LAB_000810e6;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar5);
        }
        if (((this[0x118013] == (QCamera3HardwareInterface)0x0) ||
            (*(int *)(iVar12 + 0x25b4) < iVar3)) || (*(int *)(iVar12 + 0x25b8) < iVar10))
        goto LAB_0008112e;
        if (*(int *)(*(int *)(DAT_000811e0 + 0x8108a) + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_000811e8 + 0x810a2,0x508,DAT_000811e4 + 0x8109a);
        }
        this[0x118015] = (QCamera3HardwareInterface)0x1;
      }
      else {
        if (iVar12 == 0x20) goto LAB_00080fb6;
        if ((*piVar9 - 1U < 2) || ((piVar9[4] & 0x60000U) == 0x60000)) {
          iVar12 = *(int *)(iVar1 + *(int *)(this + 0x60) * 4);
          if ((iVar3 == *(int *)(iVar12 + 0x3420)) && (iVar10 == *(int *)(iVar12 + 0x3424)))
          goto LAB_000810e6;
        }
        else {
          iVar12 = *(int *)(iVar1 + *(int *)(this + 0x60) * 4);
        }
        uVar5 = *(uint *)(iVar12 + 0x5c8);
        if (0x27 < uVar5) {
          uVar5 = 0x28;
        }
        if (uVar5 == 0) goto LAB_0008112e;
        uVar11 = 0;
        while ((iVar3 != *(int *)(iVar12 + 0x5cc + uVar11 * 8) ||
               (iVar10 != *(int *)(iVar12 + 0x5d0 + uVar11 * 8)))) {
          uVar11 = uVar11 + 1;
          if (uVar5 <= uVar11) goto LAB_0008112e;
        }
      }
LAB_000810e6:
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)param_1);
  }
  return 0;
}

