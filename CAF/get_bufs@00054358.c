
/* qcamera::QCamera3Stream::get_bufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCamera3Stream::get_bufs
          (cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5,void *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_6 == (void *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_000543dc + 0x5439c) + 0x3c);
  }
  else {
    iVar1 = getBufs((QCamera3Stream *)param_6,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      if (*(int *)((int)param_6 + 0x284) != 0) {
        uVar2 = __ThumbV7PILongThunk__ZN7qcamera14QCamera3Stream12getBatchBufsEPhPS1_PP17mm_camera_buf_defP29mm_camera_map_unmap_ops_tbl_t
                          ((QCamera3Stream *)param_6,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      return 0;
    }
    iVar1 = *(int *)(*(int *)(DAT_000543e8 + 0x54380) + 0x3c);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return 0xfffffff4;
}

