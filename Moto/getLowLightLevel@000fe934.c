
/* qcamera::QCameraParametersIntf::getLowLightLevel() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getLowLightLevel(QCameraParametersIntf *this)

{
  if (*(int *)this != 0) {
    return *(undefined4 *)(*(int *)this + 0x7a8);
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe950 + 0xfe94a,DAT_000fe954 + 0xfe94c,DAT_000fe958 + 0xfe94e);
}

