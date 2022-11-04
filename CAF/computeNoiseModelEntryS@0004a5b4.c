
/* qcamera::QCamera3HardwareInterface::computeNoiseModelEntryS(int) */

double __thiscall
qcamera::QCamera3HardwareInterface::computeNoiseModelEntryS
          (QCamera3HardwareInterface *this,int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0004a5f8 + 0x4a5bc) + *(int *)(this + 0x4c) * 4);
  dVar2 = *(double *)(iVar1 + 0x33e0) + *(double *)(iVar1 + 0x33d8) * (double)(longlong)param_1;
  if ((int)((uint)(dVar2 < 0.0) << 0x1f) < 0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

