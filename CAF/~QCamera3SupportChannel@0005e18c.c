
/* qcamera::QCamera3SupportChannel::~QCamera3SupportChannel() */

QCamera3SupportChannel * __thiscall
qcamera::QCamera3SupportChannel::_QCamera3SupportChannel
          (QCamera3SupportChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_padding_info_t *param_4,ulonglong param_5,cam_stream_type_t param_6,
          cam_dimension_t *param_7,cam_format_t param_8,uchar param_9,
          cam_color_filter_arrangement_t param_10,void *param_11,uint param_12)

{
  __tree_node *extraout_r1;
  
  *(int *)this = *(int *)(DAT_0005e1c0 + 0x5e196) + 8;
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

