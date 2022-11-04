
/* qcamera::QCamera2HardwareInterface::debugShowVideoFPS() */

void __thiscall
qcamera::QCamera2HardwareInterface::debugShowVideoFPS(QCamera2HardwareInterface *this)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  int iVar5;
  double dVar6;
  longlong lVar7;
  
  *(int *)(this + 0x1bec) = *(int *)(this + 0x1bec) + 1;
  lVar7 = systemTime(1);
  dVar1 = DAT_000db708;
  uVar2 = (uint)(lVar7 - *(longlong *)(this + 0x1bf8));
  iVar3 = (int)((ulonglong)(lVar7 - *(longlong *)(this + 0x1bf8)) >> 0x20);
  if ((int)(iVar3 - (uint)(uVar2 < 0xee6b281)) < 0 ==
      (SBORROW4(iVar3,(uint)(uVar2 < 0xee6b281)) != false)) {
    iVar4 = *(int *)(this + 0x1bf0);
    iVar5 = *(int *)(this + 0x1bec);
    dVar6 = __floatdidf(uVar2,iVar3);
    *(double *)(this + 0x1c00) =
         ((double)(longlong)(iVar5 - iVar4) * dVar1) / (double)CONCAT44(extraout_r1,uVar2);
    if (*(int *)(*(int *)(DAT_000db710 + 0xdb6cc) + 0x34) != 0) {
      mm_camera_debug_log(SUB84(dVar6,0),1,6,DAT_000db718 + 0xdb6ec,0xd1d,DAT_000db714 + 0xdb6e4);
      iVar5 = *(int *)(this + 0x1bec);
    }
    *(int *)(this + 0x1bf8) = (int)lVar7;
    *(int *)(this + 0x1bfc) = (int)((ulonglong)lVar7 >> 0x20);
    *(int *)(this + 0x1bf0) = iVar5;
  }
  return;
}

