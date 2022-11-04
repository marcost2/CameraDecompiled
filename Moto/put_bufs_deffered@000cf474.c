
/* qcamera::QCameraStream::put_bufs_deffered(mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCameraStream::put_bufs_deffered(mm_camera_map_unmap_ops_tbl_t *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    putBufsDeffered((QCameraStream *)param_2);
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000cf4ac + 0xcf48c) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000cf4b4 + 0xcf4a2,0xbf,DAT_000cf4b0 + 0xcf49a);
  }
  return 0xfffffff4;
}

