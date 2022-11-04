
/* qcamera::QCamera3RawDumpChannel::QCamera3RawDumpChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, cam_dimension_t, cam_padding_info_t*, void*, unsigned long long, unsigned int)
    */

QCamera3RawDumpChannel * __thiscall
qcamera::QCamera3RawDumpChannel::QCamera3RawDumpChannel
          (QCamera3RawDumpChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_dimension_t param_4,cam_padding_info_t *param_5,void *param_6,ulonglong param_7,
          uint param_8)

{
  int iVar1;
  int *piVar2;
  undefined3 in_stack_00000001;
  uint in_stack_ffffff7c;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000597b0 + 0x59740);
  local_14 = *piVar2;
  QCamera3Channel::QCamera3Channel
            ((QCamera3Channel *)this,param_1,param_2,param_3,(FuncDef6 *)0x0,(FuncDef7 *)0x0,
             (cam_padding_info_t *)param_6,
             param_7 & 0xffffffff00000000 | (ulonglong)in_stack_ffffff7c,(void *)param_8,
             (uint)param_7);
  *(undefined4 *)(this + 0x9c) = 0;
  *(cam_padding_info_t **)(this + 0x94) = param_5;
  *(undefined4 *)(this + 0x90) = _param_4;
  *(int *)this = *(int *)(DAT_000597b4 + 0x5977a) + 8;
  property_get();
  iVar1 = atoi(acStack112);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[0x98] = SUB41(iVar1,0);
  if (*piVar2 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

