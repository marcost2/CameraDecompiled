
/* qcamera::QCamera3PostProcessor::initJpeg(void (*)(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*), cam_dimension_t*, void*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::initJpeg
          (QCamera3PostProcessor *this,FuncDef22 *param_1,cam_dimension_t *param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *__src;
  char *extraout_r1;
  char *pcVar4;
  char *extraout_r1_00;
  undefined4 uVar5;
  QCamera3HardwareInterface *this_00;
  int *piVar6;
  undefined8 uVar7;
  int in_stack_ffffffc4;
  ScopedTraceDbg aSStack40 [12];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0005f43c + 0x5f360);
  local_1c = *piVar6;
  puVar1 = (undefined4 *)(DAT_0005f440 + 0x5f36e);
  ScopedTraceDbg::ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffc4,puVar1),(char *)param_1);
  *(FuncDef22 **)(this + 8) = param_1;
  *(void **)(this + 0xc) = param_3;
  iVar2 = *(int *)param_2;
  if ((iVar2 < 0) || (*(int *)(param_2 + 4) < 0)) {
    pcVar4 = *(char **)(*(int *)(DAT_0005f444 + 0x5f3fc) + 0x20);
    if (pcVar4 != (char *)0x0) {
      puVar1 = (undefined4 *)(DAT_0005f448 + 0x5f408);
      mm_camera_debug_log();
      pcVar4 = extraout_r1_00;
      in_stack_ffffffc4 = iVar2;
    }
    uVar5 = 0xffffffea;
  }
  else {
    this_00 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
    uVar5 = 0;
    puVar1 = (undefined4 *)(this + 0x2c);
    *puVar1 = 0;
    uVar3 = QCamera3HardwareInterface::getSensorMountAngle(this_00);
    *(undefined4 *)(this + 0x30) = uVar3;
    __src = (void *)QCamera3HardwareInterface::getRelatedCalibrationData(this_00);
    __aeabi_memcpy8(this + 0x34,__src,0x1b2);
    uVar7 = jpeg_open();
    pcVar4 = (char *)((ulonglong)uVar7 >> 0x20);
    *(int *)(this + 0x24) = (int)uVar7;
    if ((int)uVar7 == 0) {
      if (*(int *)(*(int *)(DAT_0005f450 + 0x5f3d8) + 0x20) != 0) {
        puVar1 = (undefined4 *)(DAT_0005f454 + 0x5f3e2);
        mm_camera_debug_log();
        pcVar4 = extraout_r1;
      }
      uVar5 = 0x80000000;
    }
  }
  ScopedTraceDbg::_ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffc4,puVar1),pcVar4);
  if (*piVar6 == local_1c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

