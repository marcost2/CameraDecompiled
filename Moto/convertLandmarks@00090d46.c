
/* qcamera::QCamera3HardwareInterface::convertLandmarks(cam_face_landmarks_info_t, int*) */

void qcamera::QCamera3HardwareInterface::convertLandmarks
               (cam_face_landmarks_info_t param_1,int *param_2)

{
  cam_face_landmarks_info_t in_r2;
  cam_face_landmarks_info_t in_r3;
  cam_face_landmarks_info_t in_stack_00000000;
  cam_face_landmarks_info_t in_stack_00000004;
  cam_face_landmarks_info_t *in_stack_00000008;
  
  in_stack_00000008[5] = in_stack_00000004;
  *in_stack_00000008 = param_1;
  in_stack_00000008[1] = (cam_face_landmarks_info_t)param_2;
  in_stack_00000008[2] = in_r2;
  in_stack_00000008[3] = in_r3;
  in_stack_00000008[4] = in_stack_00000000;
  return;
}

