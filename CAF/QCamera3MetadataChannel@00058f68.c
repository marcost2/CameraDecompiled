
/* qcamera::QCamera3MetadataChannel::QCamera3MetadataChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, unsigned long long, void*, unsigned int) */

void __thiscall
qcamera::QCamera3MetadataChannel::QCamera3MetadataChannel
          (QCamera3MetadataChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef12 *param_4,FuncDef13 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,uint param_9)

{
  int *piVar1;
  uint in_stack_ffffffe4;
  
  piVar1 = (int *)QCamera3Channel::QCamera3Channel
                            ((QCamera3Channel *)this,param_1,param_2,param_3,(FuncDef6 *)param_4,
                             (FuncDef7 *)param_5,param_6,
                             param_7 & 0xffffffff00000000 | (ulonglong)in_stack_ffffffe4,param_8,
                             param_9);
  piVar1[0x24] = 0;
  *piVar1 = *(int *)(DAT_00058fbc + 0x58fb4) + 8;
  return;
}

