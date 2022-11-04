
/* qcamera::QCamera3ProcessingChannel::metadataBufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::metadataBufDone
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (mm_camera_super_buf_t *)0x0) &&
     (*(QCamera3Channel **)(this + 0x124c) != (QCamera3Channel *)0x0)) {
    uVar1 = QCamera3Channel::
            __ThumbV7PILongThunk__ZN7qcamera15QCamera3Channel7bufDoneEP21mm_camera_super_buf_t
                      (*(QCamera3Channel **)(this + 0x124c),(uint)param_1);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_00058674 + 0x58648) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

