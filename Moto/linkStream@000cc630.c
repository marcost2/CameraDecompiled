
/* qcamera::QCameraChannel::linkStream(qcamera::QCameraChannel*, qcamera::QCameraStream*) */

void qcamera::QCameraChannel::linkStream(QCameraChannel *param_1,QCameraStream *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r2;
  int in_r3;
  int *piVar4;
  
  piVar4 = *(int **)(DAT_000cc6b8 + 0xcc640);
  iVar1 = *piVar4;
  uVar2 = 0xffffffed;
  if (in_r2 != 0) {
    if (param_2 != (QCameraStream *)0x0) {
      in_r3 = *(int *)(param_1 + 0x10);
    }
    if (param_2 != (QCameraStream *)0x0 && in_r3 != 0) {
      iVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x48))
                        (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x10),
                         *(undefined4 *)(in_r2 + 0x68));
      if (iVar3 == 0) {
        if (*(int *)(*(int *)(DAT_000cc6bc + 0xcc694) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cc6c4 + 0xcc6ac,0x115,DAT_000cc6c0 + 0xcc6a4);
        }
        uVar2 = 0xffffffda;
      }
      else {
        pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
        android::VectorImpl::add(param_1 + 0x14);
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
        uVar2 = 0;
      }
    }
  }
  if (*piVar4 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

