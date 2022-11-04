
/* qcamera::QCameraStream::put_bufs(mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4 qcamera::QCameraStream::put_bufs(mm_camera_map_unmap_ops_tbl_t *param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_000cf1b8 + 0xcf18e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cf1c0 + 0xcf1a8,0x9c,DAT_000cf1bc + 0xcf1a0);
    }
    return 0xfffffff4;
  }
  if ((*(int *)((int)param_2 + 0x70) != 0) && (*(int *)(*(int *)((int)param_2 + 0x70) + 0x1a0) == 2)
     ) {
    uVar1 = (*(code *)PTR_releaseBatchBufs_0011a164)(param_2,param_1);
    return uVar1;
  }
  uVar1 = (*(code *)PTR_putBufs_0011a168)(param_2,param_1);
  return uVar1;
}

