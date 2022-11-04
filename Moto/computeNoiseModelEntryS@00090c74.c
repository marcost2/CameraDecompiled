
/* qcamera::QCamera3HardwareInterface::computeNoiseModelEntryS(int) */

double __thiscall
qcamera::QCamera3HardwareInterface::computeNoiseModelEntryS
          (QCamera3HardwareInterface *this,int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_00090cb8 + 0x90c88) + *(int *)(this + 0x60) * 4);
  dVar2 = *(double *)(iVar1 + 0x33f0) + *(double *)(iVar1 + 0x33e8) * (double)(longlong)param_1;
  if ((int)((uint)(dVar2 < 0.0) << 0x1f) < 0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

