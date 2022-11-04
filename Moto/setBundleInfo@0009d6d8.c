
/* qcamera::QCamera3Channel::setBundleInfo(cam_bundle_config_t const&) */

int __thiscall
qcamera::QCamera3Channel::setBundleInfo(QCamera3Channel *this,cam_bundle_config_t *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_7ed8;
  undefined8 local_7ed4;
  undefined8 uStack32460;
  undefined8 local_7ec4;
  undefined8 uStack32444;
  undefined8 local_7eb4;
  undefined auStack32428 [32396];
  
  piVar3 = *(int **)(DAT_0009d774 + 0x9d6f4);
  iVar1 = *piVar3;
  __aeabi_memclr8(auStack32428,0x7e88);
  local_7ed8 = 0x61;
  local_7ed4 = *(undefined8 *)param_1;
  uStack32460 = *(undefined8 *)(param_1 + 8);
  local_7ec4 = *(undefined8 *)(param_1 + 0x10);
  uStack32444 = *(undefined8 *)(param_1 + 0x18);
  local_7eb4 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = QCamera3Stream::setParameter
                    (*(QCamera3Stream **)(this + 0x24),(cam_stream_parm_buffer_t *)&local_7ed8);
  if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_0009d778 + 0x9d73e) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0009d780 + 0x9d756,0x183,DAT_0009d77c + 0x9d74e);
  }
  if (*piVar3 == iVar1) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

