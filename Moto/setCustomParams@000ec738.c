
/* qcamera::QCameraParameters::setCustomParams(qcamera::QCameraParameters const&) */

undefined4 qcamera::QCameraParameters::setCustomParams(QCameraParameters *param_1)

{
  pthread_t pVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 0x1e0);
  puVar3 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2 + 0x76f78;
    if ((*(int *)(param_1 + 0xd30) == 1) &&
       (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(param_1 + 0xd34))) {
      *puVar3 = 1;
      *(undefined4 *)(puVar2 + 0x76f7c) = 1;
      if (*(int *)(param_1 + 0x1e0) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x1e0) + 0xde) = 1;
        return 0;
      }
      __android_log_print(6,DAT_000ec7f8 + 0xec7da,DAT_000ec7fc + 0xec7dc,0,0xde);
      return 0;
    }
    MotParamStateMachine::paramWriteError((MotParamStateMachine *)(param_1 + 0xd28));
  }
  __android_log_print(6,DAT_000ec7e0 + 0xec798,DAT_000ec7e4 + 0xec79a,DAT_000ec7e8 + 0xec79c,0x3c66,
                      puVar3,0);
  if (*(int *)(*(int *)(DAT_000ec7ec + 0xec7a4) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000ec7f4 + 0xec7bc,0x3c67,DAT_000ec7f0 + 0xec7b4);
  }
  return 0xffffffea;
}

