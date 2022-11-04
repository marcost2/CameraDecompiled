
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* qcamera::QCamera3HardwareInterface::handleInputBufferWithLock(unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleInputBufferWithLock
          (QCamera3HardwareInterface *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint local_6c [4];
  undefined8 *local_5c;
  CameraMetadata aCStack88 [8];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar10 = *(int **)(DAT_00089c84 + 0x8995c);
  local_28 = *piVar10;
  puVar9 = *(uint **)(DAT_00089c88 + 0x8996a);
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_00089c8c + 0x8997a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00089c90 + 0x8998a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00089c94 + 0x89c70);
    }
  }
  puVar8 = *(uint **)(this + 0x204);
  do {
    puVar8 = (uint *)puVar8[0x15];
    if (puVar8 == *(uint **)(this + 0x204)) goto LAB_00089a0e;
  } while (*puVar8 != param_1);
  uVar1 = puVar8[0xc];
  if (uVar1 == 0) {
LAB_00089a0e:
    if (*(int *)(*(int *)(DAT_00089d04 + 0x89a14) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00089d0c + 0x89a32,0xf6f,DAT_00089d08 + 0x89a28,param_1);
    }
    goto LAB_00089bf0;
  }
  if (*(char *)((int)puVar8 + 0x4a) == '\0') {
    android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata(aCStack88);
    local_50 = 0;
    local_48 = 0;
    local_2c = 0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    uStack56 = 0;
    uStack52 = 0;
    local_30 = 0;
    local_40 = systemTime(1);
    if ((camera_metadata *)puVar8[0xd] == (camera_metadata *)0x0) {
      if (*(int *)(*(int *)(DAT_00089ca4 + 0x89a3c) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00089cac + 0x89a54,0xf4f,DAT_00089ca8 + 0x89a4c);
      }
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                (aCStack88,(camera_metadata *)puVar8[0xd]);
      iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                        (aCStack88,0xe0010);
      if (iVar2 == 0) {
        if (*(int *)(*(int *)(DAT_00089c98 + 0x89a5e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_00089ca0 + 0x89a76,0xf4c,DAT_00089c9c + 0x89a6e);
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)local_6c);
        local_40 = *local_5c;
      }
    }
    local_48 = local_48 & 0xffffffff00000000 | (ulonglong)param_1;
    local_50 = CONCAT44(local_50._4_4_,2);
    iVar2 = FrameNumberRegistry::getFrameworkFrameNumber
                      ((FrameNumberRegistry *)(this + 0x1e4),param_1,local_6c);
    if (iVar2 == 0) {
      if (local_6c[0] == 0xffffffff) {
        if (*(int *)(*(int *)(DAT_00089cbc + 0x89c48) + 0x20) != 0) {
          uVar6 = 0x110d;
          iVar2 = DAT_00089cc0 + 0x89c5c;
          iVar5 = DAT_00089cc4 + 0x89c64;
          goto LAB_00089ab2;
        }
      }
      else {
        local_48 = local_48 & 0xffffffff00000000 | (ulonglong)local_6c[0];
        (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_50);
      }
    }
    else if (*(int *)(*(int *)(DAT_00089cb0 + 0x89a9c) + 0x20) != 0) {
      uVar6 = 0x1109;
      iVar2 = DAT_00089cb4 + 0x89aac;
      iVar5 = DAT_00089cb8 + 0x89ab4;
LAB_00089ab2:
      mm_camera_debug_log(1,1,iVar5,uVar6,iVar2);
    }
    *(undefined *)((int)puVar8 + 0x4a) = 1;
    if (*(int *)(*(int *)(DAT_00089cc8 + 0x89ad8) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00089cd0 + 0x89afc,0xf58,DAT_00089ccc + 0x89ae8,*puVar8,local_40);
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata(aCStack88);
    uVar1 = puVar8[0xc];
  }
  if (*(int *)(uVar1 + 0x10) != -1) {
    iVar2 = sync_wait(*(int *)(uVar1 + 0x10),0xffffffff);
    close(*(int *)(puVar8[0xc] + 0x10));
    if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_00089cd4 + 0x89b26) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_00089cdc + 0x89b40,0xf5f,DAT_00089cd8 + 0x89b36,iVar2);
    }
  }
  uStack56 = 0;
  uStack52 = 0;
  local_30 = 0;
  local_48 = 0;
  local_50 = CONCAT44(puVar8[0xd],param_1);
  local_40._0_4_ = puVar8[0xc];
  local_40._4_4_ = 2;
  iVar2 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),param_1,local_6c);
  if (iVar2 == 0) {
    if (local_6c[0] != 0xffffffff) {
      local_50 = local_50 & 0xffffffff00000000 | (ulonglong)local_6c[0];
      (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_50);
      goto LAB_00089ba6;
    }
    if (*(int *)(*(int *)(DAT_00089cec + 0x89c28) + 0x2c) != 0) {
      uVar6 = 4;
      uVar7 = 0x10ef;
      iVar2 = DAT_00089cf0 + 0x89c3a;
      iVar5 = DAT_00089cf4 + 0x89c42;
      goto LAB_00089b8e;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_00089ce0 + 0x89b78) + 0x20) != 0) {
      uVar6 = 1;
      uVar7 = 0x10eb;
      iVar2 = DAT_00089ce4 + 0x89b88;
      iVar5 = DAT_00089ce8 + 0x89b90;
LAB_00089b8e:
      mm_camera_debug_log(1,uVar6,iVar5,uVar7,iVar2);
    }
LAB_00089ba6:
    if (*(int *)(*(int *)(DAT_00089cf8 + 0x89bac) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00089d00 + 0x89bc8,0xf6c,DAT_00089cfc + 0x89bbc,*puVar8);
    }
  }
  if ((void *)puVar8[0xc] != (void *)0x0) {
    free((void *)puVar8[0xc]);
    puVar8[0xc] = 0;
  }
  if (puVar8[0xd] != 0) {
    free_camera_metadata();
  }
  uVar1 = puVar8[0x14];
  uVar4 = puVar8[0x15];
  *(uint *)(uVar1 + 0x54) = uVar4;
  *(uint *)(uVar4 + 0x50) = uVar1;
  pvVar3 = (void *)FUN_00098ffc((int)puVar8);
  operator_delete(pvVar3);
LAB_00089bf0:
  if (1 < *puVar9) {
    if ((**(byte **)(DAT_00089d10 + 0x89bfe) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00089d14 + 0x89c0c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

