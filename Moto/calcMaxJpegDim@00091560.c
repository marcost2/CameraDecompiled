
/* qcamera::QCamera3HardwareInterface::calcMaxJpegDim() */

void qcamera::QCamera3HardwareInterface::calcMaxJpegDim(void)

{
  int *in_r0;
  int in_r1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = 0;
  *in_r0 = 0;
  in_r0[1] = 0;
  iVar6 = *(int *)(*(int *)(DAT_000915f4 + 0x91574) + *(int *)(in_r1 + 0x60) * 4);
  uVar7 = *(uint *)(iVar6 + 0x5c8);
  if (uVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar5 = 0;
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar4 = *(int *)(iVar6 + 0x5cc + uVar3 * 8);
      iVar1 = *(int *)(iVar6 + 0x5d0 + uVar3 * 8);
      if (iVar1 * iVar4 - iVar5 * iVar2 != 0 && iVar5 * iVar2 <= iVar1 * iVar4) {
        *in_r0 = iVar4;
        in_r0[1] = iVar1;
        iVar2 = iVar4;
        iVar5 = iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar7);
  }
  if ((QCameraParameters::SCENE_MODES_MAP[in_r1 + 0x57] != '\0') && (*(int *)(iVar6 + 0x25b0) != 0))
  {
    iVar1 = *(int *)(iVar6 + 0x25b8);
    iVar4 = iVar1 * *(int *)(iVar6 + 0x25b4);
    if (iVar4 - iVar5 * iVar2 != 0 && iVar5 * iVar2 <= iVar4) {
      *in_r0 = *(int *)(iVar6 + 0x25b4);
      in_r0[1] = iVar1;
    }
  }
  return;
}

