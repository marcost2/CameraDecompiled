
/* qcamera::QCameraParametersIntf::setIntEvent(cam_int_evt_params_t) */

undefined4 qcamera::QCameraParametersIntf::setIntEvent(cam_int_evt_params_t param_1)

{
  cam_int_evt_params_t cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack104 [19];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 4));
  cVar1 = *(cam_int_evt_params_t *)param_1;
  if (cVar1 != 0) {
    iVar4 = 0x48;
    puVar3 = (undefined4 *)register0x00000054;
    puVar5 = auStack104;
    do {
      iVar4 = iVar4 + -4;
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0);
    uVar2 = QCameraParameters::setIntEvent(cVar1);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 4));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdfd8 + 0xfdfd2,DAT_000fdfdc + 0xfdfd4,DAT_000fdfe0 + 0xfdfd6);
}

