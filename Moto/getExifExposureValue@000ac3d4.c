
/* qcamera::getExifExposureValue(srat_t*, int, cam_rational_type_t) */

undefined4 __thiscall
qcamera::getExifExposureValue(qcamera *this,srat_t *param_1,int param_2,cam_rational_type_t param_3)

{
  *(int *)this = param_2 * (int)param_1;
  *(cam_rational_type_t *)(this + 4) = param_3;
  return 0;
}

