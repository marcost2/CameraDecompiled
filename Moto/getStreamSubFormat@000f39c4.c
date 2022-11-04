
/* qcamera::QCameraParameters::getStreamSubFormat(cam_stream_type_t, cam_sub_format_type_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::getStreamSubFormat
          (QCameraParameters *this,cam_stream_type_t param_1,cam_sub_format_type_t *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined4 uStack40;
  undefined4 local_24;
  undefined4 uStack32;
  undefined8 uStack28;
  int local_14;
  
  piVar2 = *(int **)(DAT_000f3a5c + 0xf39ce);
  local_14 = *piVar2;
  *(undefined4 *)param_2 = 2;
  if (param_1 == 8) {
    local_70 = 0;
    uStack104 = 0;
    uStack32 = 0;
    uStack28 = 0;
    local_30 = 0;
    uStack40 = 0;
    local_24 = 0;
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_60 = 0;
    uStack88 = 0;
    property_get(DAT_000f3a64 + 0xf3a1c,&local_70,*(undefined4 *)(DAT_000f3a60 + 0xf3a16));
    iVar1 = atoi((char *)&local_70);
    *(int *)param_2 = iVar1;
    if (*(int *)(*(int *)(DAT_000f3a68 + 0xf3a2c) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f3a70 + 0xf3a46,0x2b22,DAT_000f3a6c + 0xf3a3a,iVar1);
    }
  }
  if (*piVar2 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

