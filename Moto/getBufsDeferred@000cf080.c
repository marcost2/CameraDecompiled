
/* qcamera::QCameraStream::getBufsDeferred(cam_frame_len_offset_t*, unsigned char*, unsigned char**,
   mm_camera_buf_def**, mm_camera_map_unmap_ops_tbl_t*) */

undefined4
qcamera::QCameraStream::getBufsDeferred
          (cam_frame_len_offset_t *param_1,uchar *param_2,uchar **param_3,
          mm_camera_buf_def **param_4,mm_camera_map_unmap_ops_tbl_t *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x1c))
                    (*(int **)(param_1 + 0x114),param_1 + 0x10074);
  if (iVar1 == 0) {
    if ((*(mm_camera_buf_def **)(param_1 + 0x90) != (mm_camera_buf_def *)0x0) &&
       (*(int *)(param_1 + 0x118) != 0)) {
      *param_4 = *(mm_camera_buf_def **)(param_1 + 0x90);
      *(cam_frame_len_offset_t *)param_3 = param_1[0x8c];
      *(undefined4 *)param_5 = *(undefined4 *)(param_1 + 0x118);
      if (*(int *)(*(int *)(DAT_000cf15c + 0xcf0e0) + 0x28) != 0) {
        if (*(int *)(param_1 + 0x70) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
        }
        mm_camera_debug_log(1,3,DAT_000cf164 + 0xcf112,0x5c6,DAT_000cf160 + 0xcf0fe,uVar3,
                            *(undefined4 *)(param_1 + 0x90),param_1[0x8c]);
      }
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000cf150 + 0xcf120) + 0x20) == 0) {
      return 0xfffffff4;
    }
    uVar3 = 0x5bd;
    iVar1 = DAT_000cf154 + 0xcf130;
    iVar2 = DAT_000cf158 + 0xcf138;
  }
  else {
    if (*(int *)(*(int *)(DAT_000cf144 + 0xcf0a4) + 0x20) == 0) {
      return 0xfffffff4;
    }
    uVar3 = 0x5b8;
    iVar1 = DAT_000cf148 + 0xcf0b6;
    iVar2 = DAT_000cf14c + 0xcf0be;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xfffffff4;
}

