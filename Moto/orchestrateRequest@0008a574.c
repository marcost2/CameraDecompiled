
/* qcamera::QCamera3HardwareInterface::orchestrateRequest(camera3_capture_request*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::orchestrateRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  camera_metadata *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  int iVar15;
  FrameNumberRegistry *this_00;
  int *piVar16;
  int iVar17;
  int iVar18;
  uchar local_49;
  int local_48;
  uint local_44;
  int local_40;
  void *local_3c;
  int local_38;
  void *local_34;
  uint local_30 [2];
  int local_28;
  
  piVar16 = *(int **)(DAT_0008a8e4 + 0x8a584);
  local_28 = *piVar16;
  uVar13 = *(uint *)param_1;
  uVar11 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  iVar17 = *(int *)(DAT_0008a8e8 + 0x8a59a) + 8;
  local_38 = iVar17;
  pvVar4 = operator_new__(0x10);
  *(void **)((int)pvVar4 + 8) = pvVar4;
  *(void **)((int)pvVar4 + 0xc) = pvVar4;
  local_40 = iVar17;
  local_34 = pvVar4;
  pvVar5 = operator_new__(0x10);
  *(void **)((int)pvVar5 + 8) = pvVar5;
  *(void **)((int)pvVar5 + 0xc) = pvVar5;
  local_3c = pvVar5;
  iVar6 = isHdrSnapshotRequest(this,param_1);
  if ((iVar6 == 0) || (*(int *)(param_1 + 8) != 0)) {
    FrameNumberRegistry::allocStoreInternalFrameNumber
              ((FrameNumberRegistry *)(this + 0x1e4),*(uint *)param_1,local_30);
    *(uint *)param_1 = local_30[0];
    uVar3 = processCaptureRequest(this,param_1,(List *)&local_38);
  }
  else {
    iVar6 = *(int *)(DAT_0008a8ec + 0x8a656);
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0008a8f4 + 0x8a676,0x105c,DAT_0008a8f0 + 0x8a66a,
                          *(undefined4 *)(param_1 + 0xc));
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
              ((CameraMetadata *)local_30);
    uVar7 = *(uint *)(param_1 + 0xc);
    if (uVar7 != 0) {
      iVar15 = 0;
      uVar12 = 0;
      do {
        iVar18 = *(int *)(*(int *)(param_1 + 0x10) + iVar15);
        if (*(int *)(iVar18 + 0xc) == 0x21) {
          piVar8 = (int *)operator_new(0x10);
          iVar10 = *(int *)((int)pvVar4 + 8);
          *piVar8 = iVar18;
          piVar8[1] = 0x100;
          piVar8[2] = iVar10;
          piVar8[3] = (int)pvVar4;
          *(int **)(iVar10 + 0xc) = piVar8;
          *(int **)((int)pvVar4 + 8) = piVar8;
          uVar7 = *(uint *)(param_1 + 0xc);
        }
        iVar15 = iVar15 + 0x14;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,*(camera_metadata **)(param_1 + 4));
    local_48 = -6;
    local_49 = '\x01';
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,&local_48,1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,&local_49,1);
    pcVar9 = (camera_metadata *)
             android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                       ((CameraMetadata *)local_30);
    this_00 = (FrameNumberRegistry *)(this + 0x1e4);
    *(camera_metadata **)(param_1 + 4) = pcVar9;
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_38);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    FrameNumberRegistry::allocStoreInternalFrameNumber(this_00,uVar13,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_40);
    *(undefined4 *)(param_1 + 0xc) = 0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,pcVar9);
    local_48 = 0;
    local_49 = '\x01';
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,&local_48,1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,&local_49,1);
    pcVar9 = (camera_metadata *)
             android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                       ((CameraMetadata *)local_30);
    *(camera_metadata **)(param_1 + 4) = pcVar9;
    if (*(void **)((int)pvVar4 + 0xc) == pvVar4) {
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008a8fc + 0x8a7b6,0x108f,DAT_0008a8f8 + 0x8a7ae);
      }
    }
    else {
      *(undefined2 *)((int)*(void **)((int)pvVar4 + 0xc) + 4) = 0x100;
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_38);
    if (*(void **)((int)pvVar4 + 0xc) == pvVar4) {
      __android_log_print(6,DAT_0008a900 + 0x8a7e8,DAT_0008a904 + 0x8a7ea);
    }
    else {
      *(undefined2 *)((int)*(void **)((int)pvVar4 + 0xc) + 4) = 1;
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_38);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,pcVar9);
    local_48 = 6;
    local_49 = '\x01';
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,&local_48,1);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,&local_49,1);
    uVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                      ((CameraMetadata *)local_30);
    *(undefined4 *)(param_1 + 4) = uVar3;
    if (*(void **)((int)pvVar4 + 0xc) == pvVar4) {
      __android_log_print(6,DAT_0008a908 + 0x8a860,DAT_0008a90c + 0x8a862);
    }
    else {
      *(undefined2 *)((int)*(void **)((int)pvVar4 + 0xc) + 4) = 0x100;
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_38);
    if (*(void **)((int)pvVar4 + 0xc) == pvVar4) {
      __android_log_print(6,DAT_0008a910 + 0x8a896,DAT_0008a914 + 0x8a898);
    }
    else {
      *(undefined2 *)((int)*(void **)((int)pvVar4 + 0xc) + 4) = 1;
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_44);
    *(uint *)param_1 = local_44;
    processCaptureRequest(this,param_1,(List *)&local_38);
    pvVar2 = *(void **)((int)pvVar4 + 0xc);
    pvVar14 = pvVar4;
    while (pvVar1 = pvVar2, pvVar1 != pvVar4) {
      pvVar14 = *(void **)((int)pvVar1 + 0xc);
      pvVar2 = pvVar14;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
    }
    *(void **)((int)pvVar14 + 8) = pvVar14;
    *(void **)((int)pvVar4 + 0xc) = pvVar4;
    *(undefined4 *)(param_1 + 4) = uVar11;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
              ((CameraMetadata *)local_30);
    uVar3 = 0;
  }
  local_40 = iVar17;
  pvVar14 = *(void **)((int)pvVar5 + 0xc);
  while (pvVar2 = pvVar14, pvVar2 != pvVar5) {
    pvVar14 = *(void **)((int)pvVar2 + 0xc);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  operator_delete__(pvVar5);
  local_38 = iVar17;
  pvVar14 = *(void **)((int)pvVar4 + 0xc);
  pvVar5 = pvVar4;
  while (pvVar2 = pvVar14, pvVar2 != pvVar4) {
    pvVar5 = *(void **)((int)pvVar2 + 0xc);
    pvVar14 = pvVar5;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  *(void **)((int)pvVar5 + 8) = pvVar5;
  operator_delete__(pvVar4);
  if (*piVar16 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

