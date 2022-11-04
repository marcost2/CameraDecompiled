
/* qcamera::QCamera3ReprocessChannel::getSrcStreamBySrcHandle(unsigned int) */

undefined4 qcamera::QCamera3ReprocessChannel::getSrcStreamBySrcHandle(uint param_1)

{
  uint uVar1;
  int in_r1;
  uint in_r3;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 != 0) {
    in_r3 = *(uint *)(param_1 + 0x44);
  }
  if (iVar2 != 0 && in_r3 != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + 0xd8 + uVar1 * 4) == in_r1) {
        if (*(uint *)(iVar2 + 0x44) <= uVar1) {
          return 0;
        }
        return *(undefined4 *)(iVar2 + uVar1 * 4 + 0x24);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_r3);
  }
  return 0;
}

