
/* BSTBokehParam::setFaceDetectionArea(cam_face_detection_data_t*) */

void __thiscall
BSTBokehParam::setFaceDetectionArea(BSTBokehParam *this,cam_face_detection_data_t *param_1)

{
  __aeabi_memcpy8(this + 0x24,param_1,0x108);
  if (this[0x28] != (BSTBokehParam)0x0) {
    return;
  }
  __aeabi_memclr8(this + 0x24,0x108);
  return;
}

