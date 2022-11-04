
/* qcamera::QCameraParametersIntf::isSensorUsed(char const*) */

void qcamera::QCameraParametersIntf::isSensorUsed(char *param_1)

{
  if (*(int *)param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(DAT_001033e4 + 0x1033dc,DAT_001033e8 + 0x1033de,DAT_001033ec + 0x1033e0);
  }
  (*(code *)PTR_isSensorUsed_0011a990)();
  return;
}

