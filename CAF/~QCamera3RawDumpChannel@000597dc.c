
/* qcamera::QCamera3RawDumpChannel::~QCamera3RawDumpChannel() */

void __thiscall
qcamera::QCamera3RawDumpChannel::_QCamera3RawDumpChannel
          (QCamera3RawDumpChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_dimension_t param_4,cam_padding_info_t *param_5,void *param_6,ulonglong param_7,
          uint param_8)

{
  void *pvVar1;
  cam_dimension_t unaff_r7;
  cam_padding_info_t *in_lr;
  undefined3 in_stack_00000001;
  
  pvVar1 = (void *)_QCamera3RawDumpChannel
                             (this,param_1,param_2,param_3,unaff_r7,in_lr,_param_4,
                              CONCAT44(param_6,param_5),(uint)param_7);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

