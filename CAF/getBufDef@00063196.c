
/* qcamera::QCamera3StreamMem::getBufDef(cam_frame_len_offset_t const&, mm_camera_buf_def&, unsigned
   int) */

void __thiscall
qcamera::QCamera3StreamMem::getBufDef
          (QCamera3StreamMem *this,cam_frame_len_offset_t *param_1,mm_camera_buf_def *param_2,
          uint param_3)

{
  QCamera3Memory *this_00;
  
  this_00 = (QCamera3Memory *)(this + 0x614);
  if (param_3 < *(uint *)(this + 0xe24)) {
    this_00 = (QCamera3Memory *)(this + 4);
  }
  QCamera3Memory::getBufDef(this_00,param_1,param_2,param_3);
  *(QCamera3StreamMem **)(param_2 + 0x210) = this;
  return;
}

