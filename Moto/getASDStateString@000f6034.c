
/* qcamera::QCameraParameters::getASDStateString(cam_auto_scene_t) */

int __thiscall
qcamera::QCameraParameters::getASDStateString(QCameraParameters *this,cam_auto_scene_t param_1)

{
  if (param_1 < 6) {
    return *(int *)(DAT_000f6048 + 0xf603e + param_1 * 4);
  }
  return (int)&DAT_000f6048 + DAT_000f604c;
}

