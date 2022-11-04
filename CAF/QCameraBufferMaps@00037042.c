
/* qcamera::QCameraBufferMaps::QCameraBufferMaps(cam_mapping_buf_type, unsigned int, unsigned int,
   int, unsigned int, int, unsigned int, void*) */

QCameraBufferMaps * __thiscall
qcamera::QCameraBufferMaps::QCameraBufferMaps(QCameraBufferMaps *this)

{
  cam_mapping_buf_type in_r1;
  uint in_r2;
  uint in_r3;
  int in_stack_00000000;
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  void *in_stack_00000010;
  
  __aeabi_memclr4(this,0x804);
  enqueue(this,in_r1,in_r2,in_r3,in_stack_00000000,in_stack_00000004,in_stack_00000008,
          in_stack_0000000c,in_stack_00000010);
  return this;
}

