
/* qcamera::QCamera3PostProcessor::needsReprocess(qcamera::qcamera_fwk_input_pp_data_t*) */

uint __thiscall
qcamera::QCamera3PostProcessor::needsReprocess
          (QCamera3PostProcessor *this,qcamera_fwk_input_pp_data_t *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x5ec) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x21c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x7e) == '\0') {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(iVar1 + 0xc6a4);
      if (cVar3 != '\0') {
        cVar3 = '\x01';
      }
    }
    if (*(char *)(iVar1 + 0x8d) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0xc6f4);
      if (uVar4 != 0) {
        uVar4 = 1;
      }
    }
    if (cVar3 == '\0') {
      uVar2 = count_leading_zeroes((uint)*(byte *)(iVar1 + 0x100));
      return uVar2 >> 5 | uVar4;
    }
  }
  return 1;
}

