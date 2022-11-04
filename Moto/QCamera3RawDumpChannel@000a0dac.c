
/* qcamera::QCamera3RawDumpChannel::QCamera3RawDumpChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, cam_dimension_t, cam_padding_info_t*, void*, unsigned long long, unsigned int)
    */

QCamera3RawDumpChannel * __thiscall
qcamera::QCamera3RawDumpChannel::QCamera3RawDumpChannel
          (QCamera3RawDumpChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_dimension_t param_4,cam_padding_info_t *param_5,void *param_6,ulonglong param_7,
          uint param_8)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000018;
  char acStack112 [92];
  int local_14;
  
  piVar4 = *(int **)(DAT_000a0e80 + 0xa0dbe);
  local_14 = *piVar4;
  *(uint *)(this + 0x54) = param_2;
  *(int *)this = *(int *)(DAT_000a0e84 + 0xa0dca) + 8;
  this[0x50] = (QCamera3RawDumpChannel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 4) = (undefined4)param_7;
  auVar1 = *param_6;
                    /* WARNING: Load size is inaccurate */
  uVar5 = *(undefined8 *)((int)param_6 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)((int)param_6 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar5;
  *(longlong *)(this + 8) = SUB168(auVar1,0);
  *(longlong *)(this + 0x10) = SUB168(auVar1 >> 0x40,0);
  *(uint *)(this + 0x6c) = param_8;
  *(undefined4 *)(this + 0x68) = param_7._4_4_;
  this[0x7c] = (QCamera3RawDumpChannel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = in_stack_00000018;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar2 = BSTLiveBokeh::createInstance();
  *(undefined4 *)(this + 0x90) = uVar2;
  *(undefined4 *)(this + 0xa0) = 0;
  *(cam_padding_info_t **)(this + 0x98) = param_5;
  *(undefined4 *)(this + 0x94) = _param_4;
  *(int *)this = *(int *)(DAT_000a0e88 + 0xa0e4c) + 8;
  property_get(DAT_000a0e8c + 0xa0e58,acStack112,DAT_000a0e90 + 0xa0e5a);
  iVar3 = atoi(acStack112);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  this[0x9c] = SUB41(iVar3,0);
  if (*piVar4 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

