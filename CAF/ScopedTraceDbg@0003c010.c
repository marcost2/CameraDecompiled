
/* qcamera::ScopedTraceDbg::ScopedTraceDbg(unsigned long long, char const*) */

ScopedTraceDbg * __thiscall
qcamera::ScopedTraceDbg::ScopedTraceDbg(ScopedTraceDbg *this,ulonglong param_1,char *param_2)

{
  char *in_r2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  *(char **)this = in_r2;
  *(undefined4 *)(this + 4) = in_r3;
  if (1 < **(uint **)(DAT_0003c038 + 0x3c01e)) {
    atrace_begin(CONCAT44(in_lr,unaff_r4),in_r2);
  }
  return this;
}

