
/* qcamera::QCamera3RawChannel::QCamera3RawChannel(unsigned int, unsigned int, mm_camera_ops_t*,
   void (*)(mm_camera_super_buf_t*, camera3_stream_buffer*, unsigned int, bool, void*), void
   (*)(qcamera::QCamera3Channel*, unsigned int, camera3_buffer_status, void*), cam_padding_info_t*,
   void*, camera3_stream*, unsigned long long, qcamera::QCamera3Channel*, bool, unsigned int) */

QCamera3RawChannel * __thiscall
qcamera::QCamera3RawChannel::QCamera3RawChannel
          (QCamera3RawChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          FuncDef71 *param_4,FuncDef72 *param_5,cam_padding_info_t *param_6,void *param_7,
          camera3_stream *param_8,ulonglong param_9,QCamera3Channel *param_10,bool param_11,
          uint param_12)

{
  int iVar1;
  int *piVar2;
  undefined3 in_stack_00000021;
  uint in_stack_00000028;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000a08b8 + 0xa0830);
  local_14 = *piVar2;
  QCamera3ProcessingChannel::QCamera3ProcessingChannel
            ((QCamera3ProcessingChannel *)this,param_1,param_2,param_3,(FuncDef65 *)param_4,
             (FuncDef66 *)param_5,param_6,param_7,param_8,8,CONCAT44(param_10,param_9._4_4_),
             _param_11,in_stack_00000028);
  *(undefined4 *)(this + 0x3178) = 1;
  *(undefined4 *)(this + 0x3174) = 0;
  this[0x317d] = SUB41(param_12,0);
  *(int *)this = *(int *)(DAT_000a08bc + 0xa0880) + 8;
  property_get(DAT_000a08c0 + 0xa0890,acStack112,DAT_000a08c4 + 0xa0892);
  iVar1 = atoi(acStack112);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[0x317c] = SUB41(iVar1,0);
  if (*piVar2 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

