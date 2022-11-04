
/* qcamera::MotMemThrottle::computeSleepTimeMs_locked() */

undefined8 __thiscall qcamera::MotMemThrottle::computeSleepTimeMs_locked(MotMemThrottle *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = *(uint *)(this + 0x28);
  uVar4 = *(uint *)(this + 0x2c);
  if (this[0x18] != (MotMemThrottle)0x0) {
    uVar2 = *(uint *)(this + 0x58);
    uVar3 = *(uint *)(this + 0x5c);
    uVar6 = *(uint *)(this + 0x20);
    uVar1 = *(uint *)(this + 0x24);
    if ((int)((uVar3 - uVar4) - (uint)(uVar2 < uVar5)) < 0 !=
        (SBORROW4(uVar3,uVar4) != SBORROW4(uVar3 - uVar4,(uint)(uVar2 < uVar5)))) {
      uVar5 = uVar2;
      uVar4 = uVar3;
    }
    if ((int)((uVar4 - uVar1) - (uint)(uVar5 < uVar6)) < 0 !=
        (SBORROW4(uVar4,uVar1) != SBORROW4(uVar4 - uVar1,(uint)(uVar5 < uVar6)))) {
      uVar4 = uVar1;
      uVar5 = uVar6;
    }
  }
  uVar7 = systemTime(4);
  uVar1 = *(uint *)(this + 0x50);
  uVar2 = *(uint *)(this + 0x54);
  if ((uVar1 | uVar2) != 0) {
    uVar7 = __aeabi_ldivmod((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),(uint)&DAT_000f4240,0);
    uVar3 = uVar1 - (uint)uVar7;
    uVar6 = uVar3 + uVar5;
    uVar1 = uVar4 + ((uVar2 - (int)((ulonglong)uVar7 >> 0x20)) - (uint)(uVar1 < (uint)uVar7)) +
            (uint)CARRY4(uVar3,uVar5);
    uVar4 = (uint)((int)(-(uint)(uVar6 != 0) - uVar1) < 0 !=
                  (SBORROW4(-uVar1,(uint)(uVar6 != 0)) != false));
    uVar5 = uVar4;
    if (uVar4 != 0) {
      uVar4 = uVar1;
      uVar5 = uVar6;
    }
  }
  return CONCAT44(uVar4,uVar5);
}

