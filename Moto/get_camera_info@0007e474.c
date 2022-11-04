
/* qcamera::QCamera2Factory::get_camera_info(int, camera_info*) */

void qcamera::QCamera2Factory::get_camera_info(int param_1,camera_info *param_2)

{
  if (**(int **)(DAT_0007e498 + 0x7e47e) == 0) {
    (*(code *)PTR_getCameraInfo_001192e8)(**(undefined4 **)(DAT_0007e49c + 0x7e490));
    return;
  }
  (*(code *)PTR_get_camera_info_001192e4)(param_1,param_2);
  return;
}

