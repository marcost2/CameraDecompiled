
/* qcamera::QCameraChannel::processZoomDone(preview_stream_ops*, cam_crop_data_t&) */

undefined4 __thiscall
qcamera::QCameraChannel::processZoomDone
          (QCameraChannel *this,preview_stream_ops *param_1,cam_crop_data_t *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
  uVar2 = *(uint *)(this + 0x1c);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(this + 0x18) + uVar4 * 4);
      if ((piVar1 != (int *)0x0) && (*(int *)(this + 0x10) == piVar1[0x19])) {
        uVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2);
        uVar2 = *(uint *)(this + 0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
  return uVar3;
}

