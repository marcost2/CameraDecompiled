
/* qcamera::QCameraStream::mapBufs(cam_buf_map_type_list, mm_camera_map_unmap_ops_tbl_t*) */

void qcamera::QCameraStream::mapBufs
               (cam_buf_map_type_list param_1,mm_camera_map_unmap_ops_tbl_t *param_2)

{
  uint uVar1;
  mm_camera_map_unmap_ops_tbl_t *local_c [3];
  
  uVar1 = (uint)(byte)param_1;
  local_c[0] = param_2;
  if (*(code **)(uVar1 + 0x2ec) == (code *)0x0) {
    (**(code **)(*(int *)(uVar1 + 0x6c) + 0x54))
              (*(undefined4 *)(uVar1 + 0x60),*(undefined4 *)(uVar1 + 100));
  }
  else {
    (**(code **)(uVar1 + 0x2ec))(local_c,*(undefined4 *)(uVar1 + 0x2f4));
  }
  return;
}

