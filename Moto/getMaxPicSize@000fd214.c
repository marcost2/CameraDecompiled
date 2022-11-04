
/* qcamera::QCameraParametersIntf::getMaxPicSize(cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getMaxPicSize(QCameraParametersIntf *this,cam_dimension_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x284);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x280);
    *(undefined4 *)(param_1 + 4) = uVar2;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd248 + 0xfd242,DAT_000fd24c + 0xfd244,DAT_000fd250 + 0xfd246);
}

