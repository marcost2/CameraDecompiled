
/* qcamera::QCamera3PostProcessor::initJpeg(void (*)(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*), cam_dimension_t*, void*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::initJpeg
          (QCamera3PostProcessor *this,FuncDef79 *param_1,cam_dimension_t *param_2,void *param_3)

{
  undefined4 uVar1;
  void *__src;
  QCamera3HardwareInterface *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(DAT_000a8500 + 0xa83f4);
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000a8504 + 0xa8404) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a8508 + 0xa8412) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000a850c + 0xa84ee);
    }
  }
  *(FuncDef79 **)(this + 8) = param_1;
  *(void **)(this + 0xc) = param_3;
  iVar2 = *(int *)param_2;
  if ((iVar2 < 0) || (iVar3 = *(int *)(param_2 + 4), iVar3 < 0)) {
    if (*(int *)(*(int *)(DAT_000a8510 + 0xa8496) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a8518 + 0xa84b2,0xd4,DAT_000a8514 + 0xa84a4,iVar2,
                          *(undefined4 *)(param_2 + 4));
    }
    uVar4 = 0xffffffea;
  }
  else {
    uVar4 = 0;
    this_00 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar1 = QCamera3HardwareInterface::getSensorMountAngle(this_00);
    *(undefined4 *)(this + 0x30) = uVar1;
    __src = (void *)QCamera3HardwareInterface::getRelatedCalibrationData(this_00);
    __aeabi_memcpy8(this + 0x34,__src,0x432);
    iVar2 = jpeg_open(this + 0x10,0,iVar2,iVar3,this + 0x2c);
    *(int *)(this + 0x24) = iVar2;
    if (iVar2 == 0) {
      if (*(int *)(*(int *)(DAT_000a851c + 0xa8472) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a8524 + 0xa8488,0xe7,DAT_000a8520 + 0xa8480);
      }
      uVar4 = 0x80000000;
    }
  }
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000a8528 + 0xa84c6) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a852c + 0xa84d4) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar4;
}

