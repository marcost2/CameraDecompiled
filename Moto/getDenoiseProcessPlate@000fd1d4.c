
/* qcamera::QCameraParametersIntf::getDenoiseProcessPlate(cam_intf_parm_type_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getDenoiseProcessPlate
          (QCameraParametersIntf *this,cam_intf_parm_type_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getDenoiseProcessPlate(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd208 + 0xfd202,DAT_000fd20c + 0xfd204,DAT_000fd210 + 0xfd206);
}

