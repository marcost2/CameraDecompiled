
/* qcamera::QCamera2HardwareInterface::registerFaceImage(void*, cam_pp_offline_src_config_t*, int&)
    */

int __thiscall
qcamera::QCamera2HardwareInterface::registerFaceImage
          (QCamera2HardwareInterface *this,void *param_1,cam_pp_offline_src_config_t *param_2,
          int *param_3)

{
  int *this_00;
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  cam_pp_offline_src_config_t *unaff_r6;
  int iVar4;
  int *piVar5;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined auStack176 [136];
  int local_28;
  
  piVar5 = *(int **)(DAT_000b9530 + 0xb931c);
  local_28 = *piVar5;
  *param_3 = -1;
  if (param_1 != (void *)0x0) {
    unaff_r6 = param_2;
  }
  if (param_1 == (void *)0x0 || param_2 == (cam_pp_offline_src_config_t *)0x0) {
    if (*(int *)(*(int *)(DAT_000b9534 + 0xb933a) + 0x20) == 0) {
      iVar4 = -0x16;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000b953c + 0xb9354,0x1c4e,DAT_000b9538 + 0xb934c);
      iVar4 = -0x16;
    }
    goto LAB_000b9518;
  }
  this_00 = (int *)operator_new(0x718);
  piVar1 = (int *)QCameraHeapMemory::QCameraHeapMemory((QCameraHeapMemory *)this_00,true);
  iVar4 = (**(code **)(*piVar1 + 8))(this_00,1,*(undefined4 *)(unaff_r6 + 400),0);
  if (iVar4 < 0) {
    if (*(int *)(*(int *)(DAT_000b9540 + 0xb9418) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b9548 + 0xb9430,0x1c5b,DAT_000b9544 + 0xb9428);
    }
  }
  else {
    pvVar2 = (void *)(**(code **)(*this_00 + 0x24))(this_00,0);
    if (pvVar2 != (void *)0x0) {
      __aeabi_memcpy8(pvVar2,param_1,*(size_t *)(unaff_r6 + 400));
      __aeabi_memclr8(auStack176,0x88);
      local_b4 = 0;
      local_b8 = 0x40;
      piVar1 = (int *)addOfflineReprocChannel
                                (this,unaff_r6,(cam_pp_feature_config_t *)&local_b8,(FuncDef90 *)0x0
                                 ,(void *)0x0);
      if (piVar1 == (int *)0x0) {
        if (*(int *)(*(int *)(DAT_000b9558 + 0xb9470) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b9560 + 0xb9488,0x1c70,DAT_000b955c + 0xb9480);
        }
        (**(code **)(*this_00 + 0xc))(this_00);
        (**(code **)(*this_00 + 0x2c))(this_00);
LAB_000b949a:
        iVar4 = -0x80000000;
      }
      else {
        iVar4 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar4 == 0) {
          uVar3 = QCameraMemory::getSize((QCameraMemory *)this_00,0);
          if (uVar3 == 0xffffffb5) {
            if (*(int *)(*(int *)(DAT_000b9570 + 0xb94b4) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000b9578 + 0xb94ce,0x1c84,DAT_000b9574 + 0xb94c6);
            }
            goto LAB_000b949a;
          }
          iVar4 = QCameraMemory::getFd((QCameraMemory *)this_00,0);
          pvVar2 = (void *)(**(code **)(*this_00 + 0x24))(this_00,0);
          iVar4 = QCameraReprocessChannel::doReprocess
                            ((QCameraReprocessChannel *)piVar1,iVar4,pvVar2,uVar3,param_3);
          (**(code **)(*this_00 + 0xc))(this_00);
          (**(code **)(*this_00 + 0x2c))(this_00);
          (**(code **)(*piVar1 + 0x18))(piVar1);
        }
        else {
          if (*(int *)(*(int *)(DAT_000b9564 + 0xb93e0) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000b956c + 0xb93f8,0x1c78,DAT_000b9568 + 0xb93f0);
          }
          (**(code **)(*this_00 + 0xc))(this_00);
          (**(code **)(*this_00 + 0x2c))(this_00);
        }
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      goto LAB_000b9518;
    }
    if (*(int *)(*(int *)(DAT_000b954c + 0xb943a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b9554 + 0xb9452,0x1c62,DAT_000b9550 + 0xb944a);
    }
    (**(code **)(*this_00 + 0xc))(this_00);
  }
  (**(code **)(*this_00 + 0x2c))(this_00);
  iVar4 = -0xc;
LAB_000b9518:
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

