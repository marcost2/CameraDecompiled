
/* qcamera::QCamera2HardwareInterface::setDisplaySkip(bool, unsigned char) */

void __thiscall
qcamera::QCamera2HardwareInterface::setDisplaySkip
          (QCamera2HardwareInterface *this,bool param_1,uchar param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
  piVar1 = (int *)(this + 0x1e1c);
  if (param_1 == false) {
    if (*piVar1 == 0) {
      *piVar1 = 0;
      *(undefined4 *)(this + 0x1e20) = 0;
    }
    else {
      uVar2 = *(int *)(this + 0x1e18) + (uint)param_2 + 1;
      if ((uVar2 == 0) || (*(uint *)(this + 0x1e20) < uVar2)) {
        *(uint *)(this + 0x1e20) = uVar2;
      }
    }
  }
  else {
    *piVar1 = 0;
    *(undefined4 *)(this + 0x1e20) = 0;
    iVar3 = *(int *)(this + 0x1e18) + (uint)param_2 + 1;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      *piVar1 = iVar3;
    }
    *(undefined4 *)(this + 0x1e20) = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
  return;
}

