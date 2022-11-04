
/* qcamera::QCamera3HardwareInterface::computeNoiseModelEntryO(int) */

double __thiscall
qcamera::QCamera3HardwareInterface::computeNoiseModelEntryO
          (QCamera3HardwareInterface *this,int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_00090d2c + 0x90cd0) + *(int *)(this + 0x60) * 4);
  dVar2 = (double)(longlong)param_1;
  dVar3 = dVar2 / (double)(longlong)*(int *)(iVar1 + 0x36ac);
  dVar3 = (double)((ulonglong)(dVar3 != 1.0) * 0x3ff0000000000000 +
                  (ulonglong)(dVar3 == 1.0) * (longlong)dVar3);
  dVar2 = dVar3 * *(double *)(iVar1 + 0x3400) * dVar3 + *(double *)(iVar1 + 0x33f8) * dVar2 * dVar2;
  if ((int)((uint)(dVar2 < 0.0) << 0x1f) < 0) {
    dVar2 = 0.0;
  }
  return dVar2;
}

