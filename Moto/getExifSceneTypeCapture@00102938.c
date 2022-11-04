
/* qcamera::QCameraParametersIntf::getExifSceneTypeCapture(int*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifSceneTypeCapture(QCameraParametersIntf *this,int *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifSceneTypeCapture(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_0010296c + 0x102966,DAT_00102970 + 0x102968,DAT_00102974 + 0x10296a);
}

