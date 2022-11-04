
/* qcamera::QCameraStream::get_bufs_deffered(cam_frame_len_offset_t*, unsigned char*, unsigned
   char**, mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCameraStream::get_bufs_deffered
          (cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5,void *param_6)

{
  undefined4 uVar1;
  
  if (param_6 != (void *)0x0) {
    uVar1 = getBufsDeferred((cam_frame_len_offset_t *)param_6,param_2,(uchar **)param_2,
                            (mm_camera_buf_def **)param_3,(mm_camera_map_unmap_ops_tbl_t *)param_4);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000cf074 + 0xcf052) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cf07c + 0xcf068,0x81,DAT_000cf078 + 0xcf060);
  }
  return 0xfffffff4;
}

