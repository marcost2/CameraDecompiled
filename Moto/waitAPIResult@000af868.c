
/* qcamera::QCamera2HardwareInterface::waitAPIResult(qcamera::qcamera_sm_evt_enum_t,
   qcamera::qcamera_api_result_t*) */

void __thiscall
qcamera::QCamera2HardwareInterface::waitAPIResult
          (QCamera2HardwareInterface *this,qcamera_sm_evt_enum_t param_1,
          qcamera_api_result_t *param_2)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  qcamera_sm_evt_enum_t qVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(DAT_000af914 + 0xaf87a);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000af91c + 0xaf898,0x20e1,DAT_000af918 + 0xaf88e,param_1);
  }
  do {
    do {
      pthread_cond_wait((pthread_cond_t *)(this + 0x92c),(pthread_mutex_t *)(this + 0x928));
      puVar3 = *(undefined8 **)(this + 0x930);
    } while (puVar3 == (undefined8 *)0x0);
    qVar2 = *(qcamera_sm_evt_enum_t *)((int)puVar3 + 4);
    puVar1 = puVar3;
    while( true ) {
      __ptr = puVar3;
      if (qVar2 == param_1) {
        uVar5 = __ptr[1];
        *(undefined8 *)param_2 = *__ptr;
        *(undefined8 *)(param_2 + 8) = uVar5;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(__ptr + 2);
        if (__ptr == *(undefined8 **)(this + 0x930)) {
          *(undefined4 *)(this + 0x930) = *(undefined4 *)(__ptr + 2);
        }
        free(__ptr);
        if (*(int *)(iVar4 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000af924 + 0xaf90c,0x20fb,DAT_000af920 + 0xaf8fe,
                              *(undefined4 *)param_2,param_1);
        }
        return;
      }
      puVar3 = *(undefined8 **)(__ptr + 2);
      if (puVar3 == (undefined8 *)0x0) break;
      qVar2 = *(qcamera_sm_evt_enum_t *)((int)puVar3 + 4);
      puVar1 = __ptr;
    }
  } while( true );
}

