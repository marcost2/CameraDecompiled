
/* qcamera::QCameraStream::processZoomDone(preview_stream_ops*, cam_crop_data_t&) */

undefined4 __thiscall
qcamera::QCameraStream::processZoomDone
          (QCameraStream *this,preview_stream_ops *param_1,cam_crop_data_t *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (this[0x2e1] == (QCameraStream)0x0) {
    if (*(int *)(*(int *)(DAT_000d0abc + 0xd0a58) + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000d0ac4 + 0xd0a70,0x3ca,DAT_000d0ac0 + 0xd0a68);
    }
  }
  else if ((byte)*param_2 != 0) {
    piVar3 = (int *)(param_2 + 4);
    uVar2 = 0;
    do {
      if (*piVar3 == **(int **)(this + 0x70)) {
        pthread_mutex_lock((pthread_mutex_t *)(this + 0x2d8));
        uVar4 = *(undefined8 *)(piVar3 + 3);
        *(undefined8 *)(this + 0x2c4) = *(undefined8 *)(piVar3 + 1);
        *(undefined8 *)(this + 0x2cc) = uVar4;
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2d8));
        if (param_1 == (preview_stream_ops *)0x0) {
          return 0;
        }
        if (1 < *(int *)(*(int *)(this + 0x70) + 4) - 1U) {
          return 0;
        }
        uVar1 = (**(code **)(param_1 + 0x14))
                          (param_1,*(undefined4 *)(this + 0x2c4),*(undefined4 *)(this + 0x2c8),
                           *(undefined4 *)(this + 0x2cc),*(undefined4 *)(this + 0x2d0));
        return uVar1;
      }
      piVar3 = piVar3 + 9;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (byte)*param_2);
  }
  return 0;
}

