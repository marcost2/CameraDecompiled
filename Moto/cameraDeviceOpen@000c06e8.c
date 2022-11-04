
/* qcamera::QCameraMuxer::cameraDeviceOpen(int, hw_device_t**) */

int __thiscall
qcamera::QCameraMuxer::cameraDeviceOpen(QCameraMuxer *this,int param_1,hw_device_t **param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *this_00;
  uint uVar4;
  undefined4 uVar5;
  hw_device_t *phVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  hw_device_t **pphVar10;
  int aiStack208 [3];
  hw_device_t *phStack196;
  int *local_c0;
  int iStack188;
  hw_device_t *local_b8 [2];
  hw_device_t **pphStack176;
  uint *puStack172;
  uint uStack168;
  uint *puStack164;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  char acStack136 [92];
  int iStack44;
  
  piVar8 = *(int **)(DAT_000c09bc + 0xc06fc);
  iStack44 = *piVar8;
  if ((param_1 < 0) || ((int)(uint)(byte)this[0x3a] <= param_1)) {
    if (*(int *)(*(int *)(DAT_000c09c0 + 0xc07aa) + 0x20) != 0) {
      uVar5 = 0x862;
      local_c0 = (int *)(DAT_000c09c4 + 0xc07bc);
      iVar3 = DAT_000c09c8 + 0xc07c6;
      iStack188 = param_1;
LAB_000c07c4:
      mm_camera_debug_log(1,1,iVar3,uVar5);
    }
  }
  else {
    if (*(int *)(this + 0x30) != 0) {
      property_get(DAT_000c09d8 + 0xc0728,acStack136,DAT_000c09dc + 0xc072a);
      iVar3 = atoi(acStack136);
      if (iVar3 != 0) {
        iVar3 = 1;
      }
      this[0xd6] = SUB41(iVar3,0);
      puVar7 = (undefined4 *)(*(int *)(this + 0x30) + param_1 * 0x7c);
      if ((int *)puVar7[0x12] == (int *)0x100) {
        pphStack176 = param_2;
        puVar1 = puVar7 + 0x15;
        iVar2 = -(*puVar1 * 4 + 7 & 0xfffffff8);
        pphVar10 = (hw_device_t **)((int)local_b8 + iVar2);
        uVar9 = puVar7[0x17];
        if (*(int *)(*(int *)(this + 0x2c) + uVar9 * 0x38 + 0xc) == 1) {
          local_b8[0] = (hw_device_t *)local_b8;
          local_b8[1] = (hw_device_t *)puVar7;
          if (*puVar1 == 0) {
LAB_000c08c4:
            iVar3 = 0;
            *(undefined4 *)local_b8[1] = 0x48574454;
            *(undefined4 *)((int)local_b8[1] + 4) = 0x100;
            uVar5 = *(undefined4 *)(DAT_000c0a10 + 0xc08e8);
            *(undefined4 *)((int)local_b8[1] + 0x3c) = *(undefined4 *)(DAT_000c0a14 + 0xc08ea);
            *(undefined4 *)((int)local_b8[1] + 0x40) = uVar5;
            *(hw_device_t **)((int)local_b8[1] + 0x44) = local_b8[1];
            *pphStack176 = local_b8[1];
          }
          else {
            puStack172 = puVar1;
            puStack164 = puVar7 + 0x18;
            uStack168 = 1;
            while( true ) {
              this_00 = (int *)operator_new(0x1f90);
              QCamera2HardwareInterface::QCamera2HardwareInterface
                        ((QCamera2HardwareInterface *)this_00,uVar9);
              *pphVar10 = (hw_device_t *)0x0;
              uStack160 = 1;
              iVar3 = *(int *)(this + 0x2c) + uVar9 * 0x38;
              uStack152 = *(undefined4 *)(iVar3 + 0x10);
              uStack156 = *(undefined4 *)(iVar3 + 0xc);
              iVar3 = QCamera2HardwareInterface::setRelatedCamSyncInfo
                                ((QCamera2HardwareInterface *)this_00,
                                 (cam_sync_related_sensors_event_info_t *)&uStack160);
              QCamera2HardwareInterface::setFrameSyncEnabled(SUB41(this_00,0));
              if (iVar3 != 0) break;
              iVar3 = QCamera2HardwareInterface::openCamera
                                ((QCamera2HardwareInterface *)this_00,pphVar10);
              if (iVar3 != 0) goto LAB_000c09a8;
              QCamera2HardwareInterface::getCameraSessionId
                        ((QCamera2HardwareInterface *)this_00,
                         (uint *)(*(int *)(this + 0x2c) + uVar9 * 0x38 + 4));
              puVar1 = puStack164;
              *(hw_device_t **)(*(int *)(this + 0x2c) + uVar9 * 0x38 + 0x34) = *pphVar10;
              *(int **)(*(int *)(this + 0x2c) + uVar9 * 0x38 + 0x30) = this_00;
              uVar4 = *(uint *)(*(int *)(this + 0x2c) + uVar9 * 0x38 + 4);
              puStack164[1] = uVar4;
              if (*(int *)(*(int *)(DAT_000c09f8 + 0xc088e) + 0x28) != 0) {
                phVar6 = *pphVar10;
                *(int *)((int)aiStack208 + iVar2) = DAT_000c09fc + 0xc08a2;
                *(uint *)((int)aiStack208 + iVar2 + 4) = uVar9;
                *(uint *)((int)aiStack208 + iVar2 + 8) = uVar4;
                *(hw_device_t **)((int)&phStack196 + iVar2) = phVar6;
                *(int **)((int)&local_c0 + iVar2) = this_00;
                mm_camera_debug_log(1,3,DAT_000c0a00 + 0xc08b2,0x89e);
              }
              if (*puStack172 <= uStack168) goto LAB_000c08c4;
              uVar9 = *puVar1;
              pphVar10 = pphVar10 + 1;
              uStack168 = uStack168 + 1;
              puStack164 = puVar1 + 1;
            }
            if (*(int *)(*(int *)(DAT_000c09e0 + 0xc0984) + 0x20) != 0) {
              *(int *)((int)&local_c0 + iVar2) = DAT_000c09e4 + 0xc0996;
              *(int *)((int)&iStack188 + iVar2) = iVar3;
              mm_camera_debug_log(1,1,DAT_000c09e8 + 0xc09a0,0x88f);
            }
LAB_000c09a8:
            (**(code **)(*this_00 + 0x24))(this_00);
          }
        }
        else {
          if (*(int *)(*(int *)(DAT_000c09ec + 0xc0952) + 0x20) != 0) {
            *(int *)((int)&local_c0 + iVar2) = DAT_000c09f0 + 0xc0964;
            mm_camera_debug_log(1,1,DAT_000c09f4 + 0xc096c,0x878);
          }
          iVar3 = -0x80000000;
        }
      }
      else if (*(int *)(*(int *)(DAT_000c0a04 + 0xc0924) + 0x20) == 0) {
        iVar3 = -0x16;
      }
      else {
        aiStack208[2] = DAT_000c0a08 + 0xc0934;
        phStack196 = (hw_device_t *)param_1;
        local_c0 = (int *)puVar7[0x12];
        mm_camera_debug_log(1,1,DAT_000c0a0c + 0xc0942,0x8a2);
        iVar3 = -0x16;
      }
      goto LAB_000c07ce;
    }
    if (*(int *)(*(int *)(DAT_000c09cc + 0xc0900) + 0x20) != 0) {
      uVar5 = 0x867;
      local_c0 = (int *)(DAT_000c09d0 + 0xc0916);
      iVar3 = DAT_000c09d4 + 0xc091e;
      goto LAB_000c07c4;
    }
  }
  iVar3 = -0x13;
LAB_000c07ce:
  if (*piVar8 != iStack44) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

