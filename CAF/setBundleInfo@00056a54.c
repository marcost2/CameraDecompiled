
/* qcamera::QCamera3Channel::setBundleInfo(cam_bundle_config_t const&) */

int __thiscall qcamera::QCamera3Channel::setBundleInfo(QCamera3Channel *this)

{
  int iVar1;
  undefined8 *in_r1;
  int *piVar2;
  undefined4 local_7ed4;
  undefined8 local_7ed0;
  undefined8 uStack32456;
  undefined8 local_7ec0;
  undefined8 uStack32440;
  undefined8 local_7eb0;
  undefined auStack32424 [32392];
  int local_20;
  
  piVar2 = *(int **)(DAT_00056af4 + 0x56a68);
  local_20 = *piVar2;
  __aeabi_memclr4(auStack32424,0x7e88);
  local_7ed4 = 0x61;
  local_7ed0 = *in_r1;
  uStack32456 = in_r1[1];
  local_7ec0 = in_r1[2];
  uStack32440 = in_r1[3];
  local_7eb0 = in_r1[4];
  iVar1 = QCamera3Stream::setParameter
                    (*(QCamera3Stream **)(this + 0x24),(cam_stream_parm_buffer_t *)&local_7ed4);
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_00056af8 + 0x56aba) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
  if (*piVar2 == local_20) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

