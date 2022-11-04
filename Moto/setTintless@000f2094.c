
/* qcamera::QCameraParameters::setTintless(bool) */

void qcamera::QCameraParameters::setTintless(bool param_1)

{
  int in_r1;
  char *pcVar1;
  
  if (in_r1 == 0) {
    pcVar1 = *(char **)(DAT_000f20b0 + 0xf20a6);
  }
  else {
    pcVar1 = *(char **)(DAT_000f20ac + 0xf209c);
  }
  setTintlessValue((QCameraParameters *)(uint)param_1,pcVar1);
  return;
}

