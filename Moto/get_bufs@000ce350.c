
/* qcamera::QCameraStream::get_bufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCameraStream::get_bufs
          (cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5,void *param_6)

{
  undefined4 uVar1;
  
  if (param_6 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000ce3b0 + 0xce390) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ce3b8 + 0xce3a6,0x54,DAT_000ce3b4 + 0xce39e);
    }
    return 0xfffffff4;
  }
  if ((*(int *)((int)param_6 + 0x70) != 0) && (*(int *)(*(int *)((int)param_6 + 0x70) + 0x1a0) == 2)
     ) {
    uVar1 = allocateBatchBufs((QCameraStream *)param_6,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = getBufs((QCameraStream *)param_6,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

