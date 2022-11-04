
/* qcamera::QCameraStream::set_config_ops(mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCameraStream::set_config_ops(mm_camera_map_unmap_ops_tbl_t *param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (void *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((int)param_2 + 0x2e8) = *(undefined8 *)param_1;
    *(undefined8 *)((int)param_2 + 0x2f0) = uVar1;
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000cf8ac + 0xcf880) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cf8b4 + 0xcf89c,0x122,DAT_000cf8b0 + 0xcf894);
    return 0xfffffff4;
  }
  return 0xfffffff4;
}

