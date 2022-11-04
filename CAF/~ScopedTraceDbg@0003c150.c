
/* qcamera::ScopedTraceDbg::~ScopedTraceDbg() */

ScopedTraceDbg * __thiscall
qcamera::ScopedTraceDbg::_ScopedTraceDbg(ScopedTraceDbg *this,ulonglong param_1,char *param_2)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (1 < **(uint **)(DAT_0003c16c + 0x3c15a)) {
    atrace_end(CONCAT44(in_lr,unaff_r4));
  }
  return this;
}

