
/* qcamera::QCamera3Stream::get_bufs(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*, void*) */

undefined4
qcamera::QCamera3Stream::get_bufs
          (cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_6 == (void *)0x0) {
    if (*(int *)(*(int *)(DAT_0009ae94 + 0x9ae54) + 0x3c) == 0) {
      return 0xfffffff4;
    }
    uVar3 = 0x59;
    iVar1 = DAT_0009ae98 + 0x9ae62;
    iVar2 = DAT_0009ae9c + 0x9ae6a;
  }
  else {
    iVar1 = getBufs((QCamera3Stream *)param_6,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      if (*(int *)((int)param_6 + 0x280) == 0) {
        return 0;
      }
      uVar3 = (*(code *)PTR_getBatchBufs_001196a8)(param_6,param_2,param_3,param_4);
      return uVar3;
    }
    if (*(int *)(*(int *)(DAT_0009aea0 + 0x9ae38) + 0x3c) == 0) {
      return 0xfffffff4;
    }
    uVar3 = 0x5e;
    iVar1 = DAT_0009aea4 + 0x9ae46;
    iVar2 = DAT_0009aea8 + 0x9ae4e;
  }
  mm_camera_debug_log(2,1,iVar2,uVar3,iVar1);
  return 0xfffffff4;
}

