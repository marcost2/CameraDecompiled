
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::addOfflineReprocChannel(qcamera::reprocess_config_t const&,
   qcamera::QCamera3ProcessingChannel*, signed char) */

int * __thiscall
qcamera::QCamera3HardwareInterface::addOfflineReprocChannel
          (QCamera3HardwareInterface *this,reprocess_config_t *param_1,
          QCamera3ProcessingChannel *param_2,signed param_3)

{
  int *this_00;
  FuncDef78 *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint in_stack_ffffff34;
  uint local_b8;
  undefined4 local_b4;
  undefined auStack176 [64];
  undefined8 local_70;
  undefined8 local_68;
  int local_28;
  
  piVar7 = *(int **)(DAT_00098a8c + 0x98870);
  local_28 = *piVar7;
  iVar8 = *(int *)(DAT_00098a90 + 0x9887e);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00098a98 + 0x988a8,0x3276,DAT_00098a94 + 0x9889a,param_3,
                        (int)(char)this[0x118016]);
  }
  this_00 = (int *)operator_new(0x1170);
  pFVar1 = *(FuncDef78 **)(DAT_00098a9c + 0x988d4);
  QCamera3ReprocessChannel::QCamera3ReprocessChannel
            ((QCamera3ReprocessChannel *)this_00,**(uint **)(this + 100),*(uint *)(this + 0xf4),
             (mm_camera_ops_t *)(*(uint **)(this + 100))[1],*(FuncDef77 **)(DAT_00098aa0 + 0x988dc),
             pFVar1,*(cam_padding_info_t **)(param_1 + 0x1a4),(ulonglong)in_stack_ffffff34,
             (void *)0x0,this);
  iVar2 = (**(code **)(*this_00 + 0x24))(this_00,0);
  if (iVar2 == 0) {
    if (0 < (int)param_3) {
      *(QCamera3ReprocessChannel *)(this_00 + 0x45b) = SUB41(param_3,0);
    }
    __aeabi_memclr8(auStack176,0x88);
    local_b8 = 0x100068e;
    if (*(int *)(param_1 + 0x1a8) == 1) {
      local_b8 = 0x100069e;
    }
    uVar4 = *(uint *)(*(int *)(*(int *)(DAT_00098aac + 0x98960) + *(int *)(this + 0x60) * 4) +
                     0x3000);
    uVar3 = uVar4 & 0x4000000;
    uVar5 = local_b8;
    if (uVar3 != 0) {
      uVar5 = (local_b8 & 0x69e) + 0x4000000;
    }
    if ((uVar4 & 8) == 0) {
      uVar5 = uVar5 & 0x5000696;
LAB_00098988:
      local_b8 = uVar5;
    }
    else if (uVar3 != 0) goto LAB_00098988;
    if (*(int *)(param_1 + 0x1ac) != 0) {
      uVar5 = uVar5 | 0x20;
      local_70 = *(undefined8 *)(param_1 + 0x1ac);
      local_68 = *(undefined8 *)(param_1 + 0x1b4);
      local_b8 = uVar5;
    }
    uVar6 = 0;
    if (this[0x1ac] != (QCamera3HardwareInterface)0x0) {
      uVar5 = uVar5 | 0x20;
      local_68 = CONCAT44(local_68._4_4_,1);
      local_70 = 1;
      local_b8 = uVar5;
    }
    local_b4 = 0;
    if (this[0x118012] != (QCamera3HardwareInterface)0x0) {
      if (*(int *)(iVar8 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_00098ab4 + 0x989ea,0x32b1,DAT_00098ab0 + 0x989e2);
      }
      uVar5 = uVar5 | 0x40000;
      local_b8 = uVar5;
    }
    local_b4 = 0;
    if (((this[0x117f34] != (QCamera3HardwareInterface)0x0) && (param_3 == 0)) &&
       (this[0x118016] == (QCamera3HardwareInterface)0x2)) {
      if (*(int *)(iVar8 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00098abc + 0x98a2e,0x32b6,DAT_00098ab8 + 0x98a26);
      }
      uVar6 = 2;
      uVar5 = 0;
      local_b4 = 2;
      local_b8 = 0;
    }
    if (*(int *)(iVar8 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00098ac4 + 0x98a56,0x32ba,DAT_00098ac0 + 0x98a4e,pFVar1,uVar5,
                          uVar6);
    }
    iVar8 = QCamera3ReprocessChannel::addReprocStreamsFromSource
                      ((QCamera3ReprocessChannel *)this_00,(cam_pp_feature_config_t *)&local_b8,
                       param_1,0,*(QCamera3Channel **)(this + 0x8c));
    if (iVar8 == 0) goto LAB_00098a76;
  }
  else if (*(int *)(iVar8 + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_00098aa8 + 0x98910,0x3281,DAT_00098aa4 + 0x98904,iVar2);
  }
  (**(code **)(*this_00 + 4))(this_00);
  this_00 = (int *)0x0;
LAB_00098a76:
  if (*piVar7 == local_28) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

