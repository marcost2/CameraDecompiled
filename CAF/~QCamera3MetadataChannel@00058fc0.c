
/* qcamera::QCamera3MetadataChannel::~QCamera3MetadataChannel() */

QCamera3MetadataChannel * __thiscall
qcamera::QCamera3MetadataChannel::_QCamera3MetadataChannel
          (QCamera3MetadataChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef12 *param_4,FuncDef13 *param_5,cam_padding_info_t *param_6,ulonglong param_7,
          void *param_8,uint param_9)

{
  __tree_node *extraout_r1;
  
  *(int *)this = *(int *)(DAT_00058ff4 + 0x58fca) + 8;
  QCamera3Channel::destroy((QCamera3Channel *)this,(__tree_node *)param_1);
  if (*(allocator **)(this + 0x90) != (allocator *)0x0) {
    QCamera3StreamMem::deallocate(*(allocator **)(this + 0x90),extraout_r1,param_2);
    if (*(int **)(this + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x90) + 4))();
    }
    *(undefined4 *)(this + 0x90) = 0;
  }
  return this;
}

