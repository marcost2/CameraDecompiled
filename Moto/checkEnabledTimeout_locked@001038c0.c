
/* qcamera::MotMemThrottle::checkEnabledTimeout_locked() */

void __thiscall qcamera::MotMemThrottle::checkEnabledTimeout_locked(MotMemThrottle *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  bVar3 = *(uint *)(this + 0x40) == 0;
  if ((int)(*(int *)(this + 0x44) - (uint)bVar3) < 0 ==
      (SBORROW4(*(int *)(this + 0x44),(uint)bVar3) != false)) {
    uVar4 = systemTime(4);
    lVar5 = __aeabi_ldivmod((uint)uVar4,(uint)((ulonglong)uVar4 >> 0x20),(uint)&DAT_000f4240,0);
    iVar1 = (int)((ulonglong)(lVar5 - *(longlong *)(this + 0x38)) >> 0x20);
    iVar2 = *(int *)(this + 0x44);
    bVar3 = *(uint *)(this + 0x40) < (uint)(lVar5 - *(longlong *)(this + 0x38));
    if ((int)((iVar2 - iVar1) - (uint)bVar3) < 0 !=
        (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar3))) {
      this[0x30] = (MotMemThrottle)0x0;
    }
  }
  return;
}

