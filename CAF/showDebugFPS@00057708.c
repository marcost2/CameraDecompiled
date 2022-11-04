
/* qcamera::QCamera3ProcessingChannel::showDebugFPS(int) */

void __thiscall
qcamera::QCamera3ProcessingChannel::showDebugFPS(QCamera3ProcessingChannel *this,int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  *(int *)(this + 0x3f8) = *(int *)(this + 0x3f8) + 1;
  lVar3 = systemTime();
  uVar1 = (uint)(lVar3 - *(longlong *)(this + 0x400));
  iVar2 = (int)((ulonglong)(lVar3 - *(longlong *)(this + 0x400)) >> 0x20);
  if ((int)(iVar2 - (uint)(uVar1 < 0xee6b281)) < 0 ==
      (SBORROW4(iVar2,(uint)(uVar1 < 0xee6b281)) != false)) {
    __floatdidf(uVar1,iVar2);
    switch(param_1) {
    case 1:
      iVar2 = *(int *)(*(int *)(DAT_00057848 + 0x57784) + 0x28);
      break;
    default:
      iVar2 = *(int *)(*(int *)(DAT_00057878 + 0x577aa) + 0x28);
      break;
    case 4:
      iVar2 = *(int *)(*(int *)(DAT_00057854 + 0x577c8) + 0x28);
      break;
    case 5:
      iVar2 = *(int *)(*(int *)(DAT_00057860 + 0x577ea) + 0x28);
      break;
    case 8:
      iVar2 = *(int *)(*(int *)(DAT_0005786c + 0x5780c) + 0x28);
    }
    if (iVar2 != 0) {
      mm_camera_debug_log();
    }
    *(int *)(this + 0x400) = (int)lVar3;
    *(int *)(this + 0x404) = (int)((ulonglong)lVar3 >> 0x20);
    *(undefined4 *)(this + 0x3fc) = *(undefined4 *)(this + 0x3f8);
  }
  return;
}

