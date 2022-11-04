
/* qcamera::QCamera2HardwareInterface::jpegEvtHandle(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*) */

void qcamera::QCamera2HardwareInterface::jpegEvtHandle
               (jpeg_job_status_t param_1,uint param_2,uint param_3,mm_jpeg_output_t *param_4,
               void *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (param_5 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000b2044 + 0xb2026) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b204c + 0xb203e,0x1d6f,DAT_000b2048 + 0xb2036);
    }
  }
  else {
    puVar1 = (uint *)malloc(0x14);
    if (puVar1 != (uint *)0x0) {
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      *puVar1 = param_3;
      puVar1[1] = param_1;
      if (param_4 != (mm_jpeg_output_t *)0x0) {
        uVar2 = *(undefined8 *)param_4;
        puVar1[4] = *(uint *)(param_4 + 8);
        *(undefined8 *)(puVar1 + 2) = uVar2;
      }
      QCameraStateMachine::procEvt((QCameraStateMachine *)((int)param_5 + 0x4dc),0x23,puVar1);
      return;
    }
  }
  return;
}

