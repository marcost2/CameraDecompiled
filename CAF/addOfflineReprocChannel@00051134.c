
/* qcamera::QCamera3HardwareInterface::addOfflineReprocChannel(qcamera::reprocess_config_t const&,
   qcamera::QCamera3ProcessingChannel*) */

int * qcamera::QCamera3HardwareInterface::addOfflineReprocChannel
                (reprocess_config_t *param_1,QCamera3ProcessingChannel *param_2)

{
  int *this;
  int iVar1;
  int *piVar2;
  uint in_stack_ffffff74;
  ulonglong local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack48;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  piVar2 = *(int **)(DAT_00051294 + 0x51146);
  local_20 = *piVar2;
  this = (int *)operator_new(0xf40);
  QCamera3ReprocessChannel::QCamera3ReprocessChannel
            ((QCamera3ReprocessChannel *)this,**(uint **)(param_1 + 0x50),*(uint *)(param_1 + 0xdc),
             (mm_camera_ops_t *)(*(uint **)(param_1 + 0x50))[1],
             *(FuncDef20 **)(DAT_0005129c + 0x51180),*(FuncDef21 **)(DAT_00051298 + 0x51178),
             *(cam_padding_info_t **)(param_2 + 0x1a0),(ulonglong)in_stack_ffffff74,(void *)0x0,
             param_1);
  iVar1 = (**(code **)(*this + 0x20))(this,0);
  if (iVar1 == 0) {
    uStack112 = 0;
    local_24 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_48 = 0;
    local_40 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_28 = 0;
    local_78 = 0x100068e;
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_000512ac + 0x51202) + *(int *)(param_1 + 0x4c) * 4) +
                    0x2ff0);
    if (iVar1 << 5 < 0) {
      local_78 = 0x400068e;
    }
    if (-1 < iVar1 << 0x1c) {
      local_78 = local_78 & 0xfffffffffffffff7;
    }
    if (*(int *)(param_2 + 0x1a8) != 0) {
      local_78 = local_78 | 0x20;
      local_48 = *(undefined8 *)(param_2 + 0x1a8);
      local_40 = (ulonglong)*(uint *)(param_2 + 0x1b0);
    }
    if (param_1[0x144] != (reprocess_config_t)0x0) {
      local_40 = 1;
      local_48 = 1;
      local_78 = local_78 | 0x20;
    }
    iVar1 = QCamera3ReprocessChannel::addReprocStreamsFromSource
                      ((QCamera3ReprocessChannel *)this,(cam_pp_feature_config_t *)&local_78,
                       (reprocess_config_t *)param_2,0,*(QCamera3Channel **)(param_1 + 0x78));
    if (iVar1 == 0) goto LAB_0005127c;
  }
  else if (*(int *)(*(int *)(DAT_000512a0 + 0x5119a) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  (**(code **)(*this + 4))(this);
  this = (int *)0x0;
LAB_0005127c:
  if (*piVar2 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

