
/* qcamera::QCamera3ProcessingChannel::~QCamera3ProcessingChannel() */

QCamera3ProcessingChannel * __thiscall
qcamera::QCamera3ProcessingChannel::_QCamera3ProcessingChannel
          (QCamera3ProcessingChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef8 *param_4,FuncDef9 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,cam_stream_type_t param_9,ulonglong param_10,
          QCamera3Channel *param_11,uint param_12)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  QCamera3ProcessingChannel *extraout_r1_02;
  undefined uVar2;
  QCamera3StreamMem *this_00;
  QCamera3StreamMem *this_01;
  undefined8 uVar3;
  
  *(int *)this = *(int *)(DAT_0005713c + 0x5708c) + 8;
  QCamera3Channel::destroy((QCamera3Channel *)this,(__tree_node *)param_1);
  iVar1 = QCamera3PostProcessor::deinit((QCamera3PostProcessor *)(this + 0x90));
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_00057140 + 0x570a8) + 0x20) != 0)) {
    param_2 = DAT_00057148 + 0x570b8;
    mm_camera_debug_log();
  }
  this_00 = (QCamera3StreamMem *)(this + 0x2084);
  uVar3 = QCamera3StreamMem::getCnt(this_00);
  if ((int)uVar3 != 0) {
    QCamera3StreamMem::deallocate
              ((allocator *)this_00,(__tree_node *)((ulonglong)uVar3 >> 0x20),param_2);
  }
  uVar2 = (undefined)param_2;
  this_01 = (QCamera3StreamMem *)(this + 0x1254);
  iVar1 = QCamera3StreamMem::getCnt(this_01);
  if (iVar1 != 0) {
    QCamera3StreamMem::unregisterBuffers(this_01);
  }
  android::List<unsigned_int>::_List((List_unsigned_int_ *)(this + 0x2ecc));
  android::List<mm_camera_super_buf_t*>::_List((List_mm_camera_super_buf_t__ *)(this + 0x2ec4));
  android::Mutex::_Mutex((Mutex *)(this + 0x2ec0));
  android::Mutex::_Mutex((Mutex *)(this + 0x2ebc));
  android::List<unsigned_int>::_List((List_unsigned_int_ *)(this + 0x2eb4));
  QCamera3StreamMem::_QCamera3StreamMem(this_00,extraout_r1,(bool)uVar2);
  QCamera3StreamMem::_QCamera3StreamMem(this_01,extraout_r1_00,(bool)uVar2);
  QCamera3StreamMem::_QCamera3StreamMem
            ((QCamera3StreamMem *)(this + 0x408),extraout_r1_01,(bool)uVar2);
  QCamera3PostProcessor::_QCamera3PostProcessor
            ((QCamera3PostProcessor *)(this + 0x90),extraout_r1_02);
  return this;
}

