
/* qcamera::QCamera3HardwareInterface::getMinFrameDuration(camera3_capture_request const*) */

undefined8 __thiscall
qcamera::QCamera3HardwareInterface::getMinFrameDuration
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = *(uint *)(this + 0x398);
    iVar3 = *(int *)(this + 0x39c);
    uVar5 = *(uint *)(this + 0x3a8);
    iVar6 = *(int *)(this + 0x3ac);
    if ((int)((iVar3 - iVar6) - (uint)(uVar4 < uVar5)) < 0 !=
        (SBORROW4(iVar3,iVar6) != SBORROW4(iVar3 - iVar6,(uint)(uVar4 < uVar5)))) {
      iVar3 = iVar6;
      uVar4 = uVar5;
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x10);
    uVar4 = 0;
    bVar1 = false;
    do {
      if ((1 < *(int *)(*piVar2 + 0xc) - 0x24U) && (*(int *)(*piVar2 + 0xc) == 0x21)) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
    uVar4 = *(uint *)(this + 0x398);
    iVar3 = *(int *)(this + 0x39c);
    uVar5 = *(uint *)(this + 0x3a8);
    iVar6 = *(int *)(this + 0x3ac);
    if ((int)((iVar3 - iVar6) - (uint)(uVar4 < uVar5)) < 0 !=
        (SBORROW4(iVar3,iVar6) != SBORROW4(iVar3 - iVar6,(uint)(uVar4 < uVar5)))) {
      uVar4 = uVar5;
      iVar3 = iVar6;
    }
    if (bVar1) {
      uVar5 = *(uint *)(this + 0x3a0);
      iVar6 = *(int *)(this + 0x3a4);
      if ((int)((iVar6 - iVar3) - (uint)(uVar5 < uVar4)) < 0 !=
          (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)(uVar5 < uVar4)))) {
        iVar6 = iVar3;
        uVar5 = uVar4;
      }
      return CONCAT44(iVar6,uVar5);
    }
  }
  return CONCAT44(iVar3,uVar4);
}

