
/* qcamera::QCamera3HardwareInterface::orchestrateRequest(camera3_capture_request*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::orchestrateRequest
          (QCamera3HardwareInterface *this,camera3_capture_request *param_1)

{
  int iVar1;
  camera_metadata *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  FrameNumberRegistry *this_00;
  undefined4 uVar8;
  uint in_stack_ffffff88;
  undefined4 local_58;
  undefined local_51;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined2 local_44;
  List_qcamera__QCamera3HardwareInterface__InternalRequest_ aLStack64 [8];
  uint auStack56 [2];
  uint local_30 [2];
  int local_28;
  
  piVar3 = *(int **)(DAT_00044d6c + 0x449ac);
  local_28 = *piVar3;
  uVar6 = *(uint *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)auStack56);
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List(aLStack64);
  iVar1 = isHdrSnapshotRequest(this,param_1);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) != 0)) {
    FrameNumberRegistry::allocStoreInternalFrameNumber
              ((FrameNumberRegistry *)(this + 0x17c),*(uint *)param_1,local_30);
    *(uint *)param_1 = local_30[0];
    uVar5 = processCaptureRequest(this,param_1,(List *)auStack56);
  }
  else {
    iVar1 = *(int *)(DAT_00044d70 + 0x44a16);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      in_stack_ffffff88 = DAT_00044d74 + 0x44a24;
      mm_camera_debug_log();
    }
    android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
              ((CameraMetadata *)local_30);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      uVar7 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar4) + 0xc) == 0x21) {
          local_44 = 0x100;
          local_48 = *(uint *)(*(int *)(param_1 + 0x10) + iVar4);
          android::List<qcamera::ReprocessBuffer>::push_back(auStack56);
        }
        iVar4 = iVar4 + 0x14;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0xc));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    android::List<qcamera::ReprocessBuffer>::begin();
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,*(camera_metadata **)(param_1 + 4));
    local_50 = 0xfffffffa;
    local_51 = 1;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,(uint)&local_50,1,in_stack_ffffff88);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,(uint)&local_51,1,in_stack_ffffff88);
    pcVar2 = (camera_metadata *)
             android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                       ((CameraMetadata *)local_30);
    *(camera_metadata **)(param_1 + 4) = pcVar2;
    this_00 = (FrameNumberRegistry *)(this + 0x17c);
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)auStack56);
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    FrameNumberRegistry::allocStoreInternalFrameNumber(this_00,uVar6,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)aLStack64);
    *(undefined4 *)(param_1 + 0xc) = 0;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,pcVar2);
    local_50 = 0;
    local_51 = 1;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,(uint)&local_50,1,in_stack_ffffff88);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,(uint)&local_51,1,in_stack_ffffff88);
    pcVar2 = (camera_metadata *)
             android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                       ((CameraMetadata *)local_30);
    *(camera_metadata **)(param_1 + 4) = pcVar2;
    android::List<qcamera::ReprocessBuffer>::begin();
    local_4c = local_58;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar4 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_4c,(_ListIterator *)&local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    if (iVar4 == 0) {
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 4) = 0;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 5) = 1;
    }
    else if (*(int *)(iVar1 + 0x20) != 0) {
      in_stack_ffffff88 = DAT_00044d7c + 0x44b7e;
      mm_camera_debug_log();
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)auStack56);
    android::List<qcamera::ReprocessBuffer>::begin();
    local_4c = local_58;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_4c,(_ListIterator *)&local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    if (iVar1 == 0) {
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 4) = 1;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 5) = 0;
    }
    else {
      __android_log_print();
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)auStack56);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
              ((CameraMetadata *)local_30,pcVar2);
    local_50 = 6;
    local_51 = 1;
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10001,(uint)&local_50,1,in_stack_ffffff88);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::update
              ((CameraMetadata *)local_30,0x10002,(uint)&local_51,1,in_stack_ffffff88);
    uVar8 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                      ((CameraMetadata *)local_30);
    *(undefined4 *)(param_1 + 4) = uVar8;
    android::List<qcamera::ReprocessBuffer>::begin();
    local_4c = local_58;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_4c,(_ListIterator *)&local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    if (iVar1 == 0) {
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 4) = 0;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 5) = 1;
    }
    else {
      __android_log_print();
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)auStack56);
    android::List<qcamera::ReprocessBuffer>::begin();
    local_4c = local_58;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_4c,(_ListIterator *)&local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    if (iVar1 == 0) {
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 4) = 1;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_4c);
      *(undefined *)(iVar1 + 5) = 0;
    }
    else {
      __android_log_print();
    }
    FrameNumberRegistry::generateStoreInternalFrameNumber(this_00,&local_48);
    *(uint *)param_1 = local_48;
    processCaptureRequest(this,param_1,(List *)auStack56);
    android::List<qcamera::ReprocessBuffer>::clear((List_qcamera__ReprocessBuffer_ *)auStack56);
    *(undefined4 *)(param_1 + 4) = uVar5;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_4c);
    android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
              ((CameraMetadata *)local_30);
    uVar5 = 0;
  }
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_List(aLStack64);
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)auStack56);
  if (*piVar3 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

