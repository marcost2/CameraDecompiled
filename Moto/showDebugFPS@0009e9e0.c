
/* qcamera::QCamera3ProcessingChannel::showDebugFPS(int) */

void __thiscall
qcamera::QCamera3ProcessingChannel::showDebugFPS(QCamera3ProcessingChannel *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(int *)(this + 0x69c) = *(int *)(this + 0x69c) + 1;
  lVar5 = systemTime(1);
  uVar1 = (uint)(lVar5 - *(longlong *)(this + 0x6a8));
  iVar2 = (int)((ulonglong)(lVar5 - *(longlong *)(this + 0x6a8)) >> 0x20);
  if ((int)(iVar2 - (uint)(uVar1 < 0xee6b281)) < 0 !=
      (SBORROW4(iVar2,(uint)(uVar1 < 0xee6b281)) != false)) {
    return;
  }
  __floatdidf(uVar1,iVar2);
  switch(param_1) {
  case 1:
    if (*(int *)(*(int *)(DAT_0009eb20 + 0x9ea60) + 0x28) == 0) goto LAB_0009eb06;
    uVar4 = 0x755;
    iVar2 = DAT_0009eb24 + 0x9ea78;
    iVar3 = DAT_0009eb28 + 0x9ea80;
    break;
  default:
    if (*(int *)(*(int *)(DAT_0009eb50 + 0x9ea86) + 0x28) == 0) goto LAB_0009eb06;
    uVar4 = 0x764;
    iVar2 = DAT_0009eb54 + 0x9ea96;
    iVar3 = DAT_0009eb58 + 0x9ea9e;
    break;
  case 4:
    if (*(int *)(*(int *)(DAT_0009eb2c + 0x9eaa4) + 0x28) == 0) goto LAB_0009eb06;
    uVar4 = 0x759;
    iVar2 = DAT_0009eb30 + 0x9eab8;
    iVar3 = DAT_0009eb34 + 0x9eac0;
    break;
  case 5:
    if (*(int *)(*(int *)(DAT_0009eb38 + 0x9eac6) + 0x28) == 0) goto LAB_0009eb06;
    uVar4 = 0x75d;
    iVar2 = DAT_0009eb3c + 0x9eada;
    iVar3 = DAT_0009eb40 + 0x9eae2;
    break;
  case 8:
    if (*(int *)(*(int *)(DAT_0009eb44 + 0x9eae8) + 0x28) == 0) goto LAB_0009eb06;
    uVar4 = 0x761;
    iVar2 = DAT_0009eb48 + 0x9eafc;
    iVar3 = DAT_0009eb4c + 0x9eb04;
  }
  mm_camera_debug_log(1,3,iVar3,uVar4,iVar2);
LAB_0009eb06:
  *(int *)(this + 0x6a8) = (int)lVar5;
  *(int *)(this + 0x6ac) = (int)((ulonglong)lVar5 >> 0x20);
  *(undefined4 *)(this + 0x6a0) = *(undefined4 *)(this + 0x69c);
  return;
}

