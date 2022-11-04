
/* qcamera::QCamera3Stream::~QCamera3Stream() */

QCamera3Stream * __thiscall
qcamera::QCamera3Stream::_QCamera3Stream
          (QCamera3Stream *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,QCamera3Channel *param_5)

{
  __tree_node *extraout_r1;
  __tree_node *p_Var1;
  uint uVar2;
  undefined8 uVar3;
  
  *(int *)this = *(int *)(DAT_000552c0 + 0x5520c) + 8;
  if (*(int *)(this + 0x284) != 0) {
    flushFreeBatchBufQ(this);
  }
  if (*(int *)(this + 200) != 0) {
    uVar2 = *(uint *)(this + 0xc);
    uVar3 = (**(code **)(*(int *)(this + 0x10) + 0x58))
                      (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),uVar2,4,0,0xffffffff);
    p_Var1 = (__tree_node *)((ulonglong)uVar3 >> 0x20);
    if ((0x7fffffff < (uint)uVar3) && (*(int *)(*(int *)(DAT_000552c4 + 0x55244) + 0x3c) != 0)) {
      uVar2 = DAT_000552cc + 0x55254;
      mm_camera_debug_log();
      p_Var1 = extraout_r1;
    }
    QCamera3HeapMemory::deallocate(*(allocator **)(this + 200),p_Var1,uVar2);
    if (*(int **)(this + 200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 200) + 0x20))();
    }
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    (**(code **)(*(int *)(this + 0x10) + 0x44))(*(undefined4 *)(this + 4),*(undefined4 *)(this + 8))
    ;
    *(undefined4 *)(this + 0xc) = 0;
  }
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x29c));
  android::Mutex::_Mutex((Mutex *)(this + 0x280));
  android::Mutex::_Mutex((Mutex *)(this + 0x27c));
  QCameraCmdThread::_QCameraCmdThread((QCameraCmdThread *)(this + 0x88));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 100));
  QCameraQueue::_QCameraQueue((QCameraQueue *)(this + 0x40));
  return this;
}

