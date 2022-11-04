
/* qcamera::ScopedTraceKpi::ScopedTraceKpi(unsigned long long, char const*) */

ScopedTraceKpi * __thiscall
qcamera::ScopedTraceKpi::ScopedTraceKpi(ScopedTraceKpi *this,ulonglong param_1,char *param_2)

{
  char *in_r2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *(char **)this = in_r2;
  *(undefined4 *)(this + 4) = in_r3;
  if (**(int **)(DAT_0003be5c + 0x3be46) != 0) {
    atrace_begin(CONCAT44(in_lr,unaff_r4),in_r2);
  }
  return this;
}

