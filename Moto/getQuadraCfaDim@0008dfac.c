
/* qcamera::QCamera3HardwareInterface::getQuadraCfaDim() */

void qcamera::QCamera3HardwareInterface::getQuadraCfaDim(void)

{
  undefined4 *in_r0;
  int in_r1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *in_r0 = 0;
  in_r0[1] = 0;
  iVar1 = *(int *)(*(int *)(DAT_0008e020 + 0x8dfbe) + *(int *)(in_r1 + 0x60) * 4);
  if (*(int *)(iVar1 + 0x25b0) == 0) {
    if (*(int *)(*(int *)(DAT_0008e030 + 0x8e000) + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x117e;
    iVar1 = DAT_0008e034 + 0x8e010;
    iVar3 = DAT_0008e038 + 0x8e018;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x25b8);
    *in_r0 = *(undefined4 *)(iVar1 + 0x25b4);
    in_r0[1] = uVar2;
    if (*(int *)(*(int *)(DAT_0008e024 + 0x8dfe0) + 0x2c) == 0) {
      return;
    }
    uVar4 = 0x117c;
    iVar1 = DAT_0008e028 + 0x8dfee;
    uVar2 = 4;
    iVar3 = DAT_0008e02c + 0x8dffa;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar1);
  return;
}

