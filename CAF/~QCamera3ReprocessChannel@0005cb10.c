
/* qcamera::QCamera3ReprocessChannel::~QCamera3ReprocessChannel() */

QCamera3ReprocessChannel * __thiscall
qcamera::QCamera3ReprocessChannel::_QCamera3ReprocessChannel
          (QCamera3ReprocessChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef20 *param_4,FuncDef21 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,void *param_9)

{
  uint extraout_r1;
  char cVar1;
  code *pcVar2;
  
  cVar1 = (char)param_2;
  *(int *)this = *(int *)(DAT_0005cba8 + 0x5cb1c) + 8;
  QCamera3Channel::destroy((QCamera3Channel *)this,(__tree_node *)param_1);
  if (*(int *)(this + 0x54) != 0) {
    pcVar2 = *(code **)(*(int *)(this + 0x4c) + 0x38);
    (*pcVar2)(*(undefined4 *)(this + 0x48));
    cVar1 = (char)pcVar2;
    if (*(int *)(*(int *)(DAT_0005cbac + 0x5cb38) + 0x2c) != 0) {
      cVar1 = (char)DAT_0005cbb4 + 'L';
      mm_camera_debug_log();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  android::Mutex::_Mutex((Mutex *)(this + 0xf38));
  android::Vector<unsigned_int>::_Vector((Vector_unsigned_int_ *)(this + 0xf24));
  QCamera3StreamMem::_QCamera3StreamMem((QCamera3StreamMem *)(this + 0xf4),extraout_r1,(bool)cVar1);
  android::List<int>::_List((List_int_ *)(this + 0xbc));
  android::Mutex::_Mutex((Mutex *)(this + 0xb8));
  android::Mutex::_Mutex((Mutex *)(this + 0xa8));
  android::Mutex::_Mutex((Mutex *)(this + 0xa4));
  android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_List
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x9c));
  android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_List
            ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x94));
  return this;
}

