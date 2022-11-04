
/* qcamera::QCameraParameters::isValidHDRVideoSize(int, int) */

undefined4 __thiscall
qcamera::QCameraParameters::isValidHDRVideoSize(QCameraParameters *this,int param_1,int param_2)

{
  if (param_1 == 0xf00) {
    if (param_2 != 0x870) goto LAB_000e5e0c;
  }
  else if ((param_1 != 0x780) || (param_2 != 0x438)) {
LAB_000e5e0c:
    __android_log_print(6,DAT_000e5e2c + 0xe5e20,DAT_000e5e30 + 0xe5e22,DAT_000e5e34 + 0xe5e24,
                        param_1,param_2);
    return 0;
  }
  return 1;
}

