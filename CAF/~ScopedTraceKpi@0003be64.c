
/* qcamera::ScopedTraceKpi::~ScopedTraceKpi() */

ScopedTraceKpi * __thiscall
qcamera::ScopedTraceKpi::_ScopedTraceKpi(ScopedTraceKpi *this,ulonglong param_1,char *param_2)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (**(int **)(DAT_0003be80 + 0x3be6e) != 0) {
    atrace_end(CONCAT44(in_lr,unaff_r4));
  }
  return this;
}

