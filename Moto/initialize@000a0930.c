
/* qcamera::QCamera3RawChannel::initialize(cam_is_type_t) */

void qcamera::QCamera3RawChannel::initialize(cam_is_type_t param_1)

{
  cam_is_type_t in_r1;
  
  QCamera3RegularChannel::initialize((QCamera3RegularChannel *)param_1,in_r1);
  return;
}

