
/* qcamera::QCamera3RawDumpChannel::~QCamera3RawDumpChannel() */

QCamera3RawDumpChannel * __thiscall
qcamera::QCamera3RawDumpChannel::_QCamera3RawDumpChannel
          (QCamera3RawDumpChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_dimension_t param_4,cam_padding_info_t *param_5,void *param_6,ulonglong param_7,
          uint param_8)

{
  *(int *)this = *(int *)(DAT_000597d8 + 0x597ca) + 8;
  QCamera3Channel::destroy((QCamera3Channel *)this,(__tree_node *)param_1);
  return this;
}

