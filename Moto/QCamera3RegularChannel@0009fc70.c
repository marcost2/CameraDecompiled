
/* qcamera::QCamera3RegularChannel::QCamera3RegularChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, void*, camera3_stream*, cam_stream_type_t, unsigned long long,
   qcamera::QCamera3Channel*, unsigned int) */

void __thiscall
qcamera::QCamera3RegularChannel::QCamera3RegularChannel
          (QCamera3RegularChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef67 *param_4,FuncDef68 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  int *piVar1;
  
  piVar1 = (int *)QCamera3ProcessingChannel::QCamera3ProcessingChannel
                            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,
                             (FuncDef65 *)param_4,(FuncDef66 *)param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11,param_12);
  piVar1[0xc5e] = 1;
  piVar1[0xc5d] = 0;
  *piVar1 = *(int *)(DAT_0009fce8 + 0x9fcde) + 8;
  return;
}

