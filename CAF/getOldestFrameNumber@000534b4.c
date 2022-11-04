
/* qcamera::QCamera3HeapMemory::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3HeapMemory::getOldestFrameNumber(QCamera3HeapMemory *this,uint *param_1)

{
  bool bVar1;
  int *extraout_r1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00053538 + 0x534c4);
  local_1c = *piVar5;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x608));
  piVar2 = extraout_r1;
  if (*(int *)(this + 4) != 0) {
    piVar2 = (int *)(this + 0x10);
    iVar4 = 0x7fffffff;
    bVar1 = true;
    uVar3 = 0;
    do {
      if (*piVar2 != 0) {
        if (!bVar1) {
          bVar1 = false;
          if ((iVar4 <= *(int *)(this + uVar3 * 4 + 0x508)) ||
             (*(int *)(this + uVar3 * 4 + 0x508) == -1)) goto LAB_00053508;
        }
        iVar4 = *(int *)(this + uVar3 * 4 + 0x508);
        *param_1 = uVar3;
        bVar1 = false;
      }
LAB_00053508:
      piVar2 = piVar2 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 4));
    if (!bVar1) goto LAB_0005351a;
  }
  iVar4 = -1;
LAB_0005351a:
  android::Mutex::Autolock::_Autolock(aAStack32,(Mutex *)piVar2);
  if (*piVar5 == local_1c) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

