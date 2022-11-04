
/* qcamera::QCamera3YUVChannel::QCamera3YUVChannel(unsigned int, unsigned int, mm_camera_ops_t*,
   void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   void*, camera3_stream*, cam_stream_type_t, unsigned long long, qcamera::QCamera3Channel*) */

QCamera3YUVChannel * __thiscall
qcamera::QCamera3YUVChannel::QCamera3YUVChannel
          (QCamera3YUVChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef16 *param_4,FuncDef17 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11)

{
  uint uVar1;
  
  QCamera3ProcessingChannel::QCamera3ProcessingChannel
            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,(FuncDef8 *)param_4,
             (FuncDef9 *)param_5,param_6,param_7,param_8,param_9,param_10,param_11,6);
  *(int *)this = *(int *)(DAT_00059be8 + 0x59b76) + 8;
  android::Mutex::Mutex((Mutex *)(this + 0x2ef8));
  android::List<qcamera::QCamera3YUVChannel::PpInfo>::List
            ((List_qcamera__QCamera3YUVChannel__PpInfo_ *)(this + 0x2efc));
  android::List<unsigned_int>::List((List_unsigned_int_ *)(this + 0x2f08));
  android::Mutex::Mutex((Mutex *)(this + 0x2f10));
  *(undefined4 *)(this + 0x2f04) = 0;
  *(undefined4 *)(this + 0x2ee4) = 0;
  *(undefined4 *)(this + 12000) = 0;
  this[0x2edc] = (QCamera3YUVChannel)0x0;
  *(undefined4 *)(this + 0x2ed8) = 0;
  uVar1 = count_leading_zeroes((uint)param_10 | param_10._4_4_);
  this[0x2ed5] = SUB41(uVar1 >> 5,0);
  *(undefined8 *)(this + 0x2ee8) = 0;
  *(undefined8 *)(this + 0x2ef0) = 0;
  return this;
}

