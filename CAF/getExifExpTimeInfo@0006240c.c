
/* qcamera::getExifExpTimeInfo(rat_t*, long long) */

void qcamera::getExifExpTimeInfo(rat_t *param_1,longlong param_2)

{
  uint in_r2;
  uint in_r3;
  
  if ((in_r2 | in_r3) == 0) {
    in_r2 = 0x3c;
  }
  __ThumbV7PILongThunk__ZN7qcamera11getRationalEP5rat_tii(param_1,1,in_r2);
  return;
}

