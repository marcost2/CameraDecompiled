
/* qcamera::QCamera3ReprocessChannel::addReprocStreamsFromSource(cam_pp_feature_config_t&,
   qcamera::reprocess_config_t const&, cam_is_type_t, qcamera::QCamera3Channel*) */

int __thiscall
qcamera::QCamera3ReprocessChannel::addReprocStreamsFromSource
          (QCamera3ReprocessChannel *this,cam_pp_feature_config_t *param_1,
          reprocess_config_t *param_2,cam_is_type_t param_3,QCamera3Channel *param_4)

{
  _Node *this_00;
  undefined4 uVar1;
  int *this_01;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_230;
  undefined8 uStack552;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack536;
  undefined4 uStack532;
  undefined auStack528 [392];
  undefined local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack124;
  int local_28;
  
  piVar4 = *(int **)(DAT_0005e0e0 + 0x5df36);
  local_28 = *piVar4;
  uVar5 = *(undefined4 *)(param_2 + 0x198);
  iVar6 = *(int *)(param_2 + 0x19c);
  if (*(QCamera3Channel **)(param_2 + 0x1b4) != (QCamera3Channel *)0x0) {
    this_00 = (_Node *)QCamera3Channel::getStreamByIndex(*(QCamera3Channel **)(param_2 + 0x1b4),0);
    if (this_00 == (_Node *)0x0) {
      if (*(int *)(*(int *)(DAT_0005e0e4 + 0x5e0aa) + 0x20) != 0) {
        mm_camera_debug_log();
      }
      iVar2 = -0x16;
      goto LAB_0005e0c8;
    }
    uVar1 = android::List<qcamera::ReprocessBuffer>::_Node::getNext(this_00);
    *(undefined4 *)(this + *(int *)(this + 0x44) * 4 + 200) = uVar1;
  }
  local_220 = 1;
  local_21c = *(undefined4 *)(param_2 + 4);
  uStack536 = *(undefined4 *)(param_2 + 8);
  uStack532 = *(undefined4 *)(param_2 + 0xc);
  __aeabi_memcpy8(auStack528,param_2 + 0x10,0x188);
  local_88 = (undefined)*(undefined4 *)(this + 0x78);
  local_84 = *(undefined4 *)param_2;
  __aeabi_memcpy8(&local_80,param_1,0x58);
  this_01 = (int *)operator_new(0x2c0);
  QCamera3Stream::QCamera3Stream
            ((QCamera3Stream *)this_01,*(uint *)(this + 0x48),*(uint *)(this + 0x54),
             *(mm_camera_ops_t **)(this + 0x4c),(cam_padding_info_t *)(this + 8),
             (QCamera3Channel *)this);
  uVar1 = 1;
  iVar2 = (**(code **)(*this_01 + 8))
                    (this_01,9,*(undefined4 *)(param_2 + 4),uVar5,iVar6,1,&local_220,this[0x78],
                     local_80,uStack124,param_3,0,*(undefined4 *)(DAT_0005e0f0 + 0x5dfcc),this);
  if (iVar2 == 0) {
    *(int **)(this + *(int *)(this + 0x44) * 4 + 0x24) = this_01;
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_2 + 0x1b4);
    *(QCamera3Channel **)(this + 0xec) = param_4;
    uVar5 = *(undefined4 *)(param_2 + 0x1a4);
    *(undefined4 *)(this + 0xc4) = uVar5;
    if (*(int *)(*(int *)(DAT_0005e100 + 0x5e040) + 0x2c) != 0) {
      iVar6 = DAT_0005e104 + 0x5e04e;
      mm_camera_debug_log();
      uVar1 = uVar5;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_0005e0f4 + 0x5dff4) + 0x20) != 0) {
      iVar6 = DAT_0005e0f8 + 0x5dffe;
      mm_camera_debug_log();
    }
    (**(code **)(*this_01 + 4))(this_01);
  }
  uStack552 = 0;
  local_230 = 0x100000000;
  uVar3 = (**(code **)(*(int *)(this + 0x4c) + 0x78))
                    (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54),&local_230,
                     *(code **)(*(int *)(this + 0x4c) + 0x78),iVar6,uVar1);
  if ((0x7fffffff < uVar3) && (*(int *)(*(int *)(DAT_0005e10c + 0x5e088) + 0x20) != 0)) {
    mm_camera_debug_log();
  }
LAB_0005e0c8:
  if (*piVar4 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

