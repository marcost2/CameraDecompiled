
/* qcamera::QCamera3Stream::put_bufs(mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4 qcamera::QCamera3Stream::put_bufs(mm_camera_map_unmap_ops_tbl_t *param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_0009b77c + 0x9b75c) + 0x3c) != 0) {
      mm_camera_debug_log(2,1,DAT_0009b784 + 0x9b772,0x7e,DAT_0009b780 + 0x9b76a);
    }
    return 0xfffffff4;
  }
  if (((*(int *)((int)param_2 + 0x280) != 0) &&
      (iVar1 = putBatchBufs((QCamera3Stream *)param_2,param_1), iVar1 != 0)) &&
     (*(int *)(*(int *)(DAT_0009b788 + 0x9b730) + 0x3c) != 0)) {
    mm_camera_debug_log(2,1,DAT_0009b790 + 0x9b746,0x85,DAT_0009b78c + 0x9b73e);
  }
  uVar2 = (*(code *)PTR_putBufs_001196d0)(param_2,param_1);
  return uVar2;
}

