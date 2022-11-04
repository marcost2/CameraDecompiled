
/* qcamera::QCamera3Stream::put_bufs(mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4 qcamera::QCamera3Stream::put_bufs(mm_camera_map_unmap_ops_tbl_t *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != (void *)0x0) {
    if (((*(int *)((int)param_2 + 0x284) != 0) &&
        (iVar1 = putBatchBufs((QCamera3Stream *)param_2,param_1), iVar1 != 0)) &&
       (*(int *)(*(int *)(DAT_00054c50 + 0x54bf8) + 0x3c) != 0)) {
      mm_camera_debug_log();
    }
    uVar2 = __ThumbV7PILongThunk__ZN7qcamera14QCamera3Stream7putBufsEP29mm_camera_map_unmap_ops_tbl_t
                      ((QCamera3Stream *)param_2,param_1);
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_00054c44 + 0x54c24) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  return 0xfffffff4;
}

