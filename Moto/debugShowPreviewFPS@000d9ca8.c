
/* qcamera::QCamera2HardwareInterface::debugShowPreviewFPS() */

void __thiscall
qcamera::QCamera2HardwareInterface::debugShowPreviewFPS(QCamera2HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  *(int *)(this + 0x1c08) = *(int *)(this + 0x1c08) + 1;
  lVar5 = systemTime(1);
  uVar1 = (uint)(lVar5 - *(longlong *)(this + 0x1c10));
  iVar2 = (int)((ulonglong)(lVar5 - *(longlong *)(this + 0x1c10)) >> 0x20);
  if ((int)(iVar2 - (uint)(uVar1 < 0xee6b281)) < 0 ==
      (SBORROW4(iVar2,(uint)(uVar1 < 0xee6b281)) != false)) {
    iVar3 = *(int *)(this + 0x1c0c);
    iVar4 = *(int *)(this + 0x1c08);
    __floatdidf(uVar1,iVar2);
    *(double *)(this + 0x1c18) =
         ((double)(longlong)(iVar4 - iVar3) * DAT_000d9d60) / (double)CONCAT44(extraout_r1,uVar1);
    if (*(int *)(*(int *)(DAT_000d9d68 + 0xd9d2c) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000d9d70 + 0xd9d4c,0xd35,DAT_000d9d6c + 0xd9d44);
      iVar4 = *(int *)(this + 0x1c08);
    }
    *(int *)(this + 0x1c10) = (int)lVar5;
    *(int *)(this + 0x1c14) = (int)((ulonglong)lVar5 >> 0x20);
    *(int *)(this + 0x1c0c) = iVar4;
  }
  return;
}

