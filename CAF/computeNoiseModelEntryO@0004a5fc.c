
/* qcamera::QCamera3HardwareInterface::computeNoiseModelEntryO(int) */

double __thiscall
qcamera::QCamera3HardwareInterface::computeNoiseModelEntryO
          (QCamera3HardwareInterface *this,int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_0004a670 + 0x4a604) + *(int *)(this + 0x4c) * 4);
  dVar2 = (double)(longlong)param_1;
  dVar3 = dVar2 / (double)(longlong)*(int *)(iVar1 + 0x369c);
  dVar3 = (double)((ulonglong)(dVar3 != 1.0) * 0x3ff0000000000000 +
                  (ulonglong)(dVar3 == 1.0) * (longlong)dVar3);
  dVar2 = dVar3 * *(double *)(iVar1 + 0x33f0) * dVar3 + *(double *)(iVar1 + 0x33e8) * dVar2 * dVar2;
  if ((int)((uint)(dVar2 < 0.0) << 0x1f) < 0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

