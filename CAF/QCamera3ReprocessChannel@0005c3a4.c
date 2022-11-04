
/* qcamera::QCamera3ReprocessChannel::QCamera3ReprocessChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool,
   void*), void (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*),
   cam_padding_info_t*, unsigned long long, void*, void*) */

QCamera3ReprocessChannel * __thiscall
qcamera::QCamera3ReprocessChannel::QCamera3ReprocessChannel
          (QCamera3ReprocessChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef20 *param_4,FuncDef21 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,void *param_9)

{
  QCamera3Channel *in_stack_0000001c;
  uint in_stack_ffffffd4;
  
  QCamera3Channel::getNumBuffers(in_stack_0000001c);
  QCamera3Channel::QCamera3Channel
            ((QCamera3Channel *)this,param_1,param_2,param_3,(FuncDef6 *)param_4,(FuncDef7 *)param_5
             ,param_6,param_7 & 0xffffffff00000000 | (ulonglong)in_stack_ffffffd4,param_8,
             (uint)param_9);
  *(QCamera3Channel **)(this + 0x90) = in_stack_0000001c;
  *(int *)this = *(int *)(DAT_0005c484 + 0x5c3ee) + 8;
  android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::List
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x94));
  android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::List
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x9c));
  android::Mutex::Mutex((Mutex *)(this + 0xa4));
  android::Mutex::Mutex((Mutex *)(this + 0xa8));
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  android::Mutex::Mutex((Mutex *)(this + 0xb8));
  android::List<int>::List((List_int_ *)(this + 0xbc));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  QCamera3StreamMem::QCamera3StreamMem((QCamera3StreamMem *)(this + 0xf4),0,true);
  android::Vector<unsigned_int>::Vector((Vector_unsigned_int_ *)(this + 0xf24));
  android::Mutex::Mutex((Mutex *)(this + 0xf38));
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xf3c] = (QCamera3ReprocessChannel)0x0;
  *(int *)(this + 0xac) = *(int *)(this + 0x78) + -1;
  *(int *)(this + 0xb0) = *(int *)(this + 0x78) * 2 + -1;
  return this;
}

