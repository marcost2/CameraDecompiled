
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::handleInputBufferWithLock(unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleInputBufferWithLock
          (QCamera3HardwareInterface *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char *extraout_r1;
  uint uVar4;
  int *piVar5;
  uint in_stack_ffffff6c;
  _Node a_Stack128 [4];
  uint local_7c [4];
  undefined8 *local_6c;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack104 [4];
  uint local_64;
  ScopedTraceDbg aSStack96 [8];
  uint auStack88 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar5 = *(int **)(DAT_000441d8 + 0x43eec);
  local_28 = *piVar5;
  iVar1 = DAT_000441dc + 0x43efa;
  ScopedTraceDbg::ScopedTraceDbg(aSStack96,CONCAT44(in_stack_ffffff6c,iVar1),(char *)param_1);
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_64,(_ListIterator *)&local_50);
  if (iVar2 != 0) {
    do {
      puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_64);
      uVar4 = *puVar3;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
      if (uVar4 == param_1) goto LAB_00043f6a;
      android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack104,(int)&local_64);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack104);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_64,(_ListIterator *)&local_50);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
LAB_00043f6a:
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_64,(_ListIterator *)&local_50);
  if (iVar2 == 0) {
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
  }
  else {
    iVar2 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_64);
    iVar2 = *(int *)(iVar2 + 0x30);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
    if (iVar2 != 0) {
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      if (*(char *)(iVar2 + 0x4a) == '\0') {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                  ((CameraMetadata *)auStack88);
        local_40._0_4_ = 0;
        local_40._4_4_ = 0;
        uStack56 = 0;
        uStack52 = 0;
        local_50 = 0;
        local_48 = 0;
        local_2c = 0;
        local_30 = 0;
        local_40 = systemTime();
        iVar2 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_64);
        if (*(int *)(iVar2 + 0x34) == 0) {
          if (*(int *)(*(int *)(DAT_000441ec + 0x4403e) + 0x20) != 0) {
            iVar1 = DAT_000441f0 + 0x44048;
            mm_camera_debug_log();
          }
        }
        else {
          iVar2 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_64);
          android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                    ((CameraMetadata *)auStack88,*(camera_metadata **)(iVar2 + 0x34));
          iVar2 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                            ((CameraMetadata *)auStack88,0xe0010);
          if (iVar2 == 0) {
            if (*(int *)(*(int *)(DAT_000441e0 + 0x44060) + 0x20) != 0) {
              iVar1 = DAT_000441e4 + 0x4406a;
              mm_camera_debug_log();
            }
          }
          else {
            android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                      ((CameraMetadata *)local_7c,auStack88);
            local_40 = *local_6c;
          }
        }
        local_48 = local_48 & 0xffffffff00000000 | (ulonglong)param_1;
        local_50 = CONCAT44(local_50._4_4_,2);
        orchestrateNotify(this,(camera3_notify_msg *)&local_50);
        iVar2 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_64);
        *(undefined *)(iVar2 + 0x4a) = 1;
        if (*(int *)(*(int *)(DAT_000441f8 + 0x440a4) + 0x2c) != 0) {
          puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_64);
          in_stack_ffffff6c = *puVar3;
          iVar1 = DAT_000441fc + 0x440ba;
          mm_camera_debug_log();
        }
        android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                  ((CameraMetadata *)auStack88);
      }
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      if (*(int *)(*(int *)(iVar2 + 0x30) + 0x10) != -1) {
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_64);
        uVar4 = sync_wait();
        iVar2 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_64);
        close(*(int *)(*(int *)(iVar2 + 0x30) + 0x10));
        if ((uVar4 != 0) && (*(int *)(*(int *)(DAT_00044204 + 0x44110) + 0x20) != 0)) {
          iVar1 = DAT_00044208 + 0x4411a;
          mm_camera_debug_log();
          in_stack_ffffff6c = uVar4;
        }
      }
      uStack56 = 0;
      uStack52 = 0;
      local_30 = 0;
      local_48 = 0;
      local_40._0_4_ = 0;
      local_40._4_4_ = 0;
      local_50 = local_50 & 0xffffffff00000000 | (ulonglong)param_1;
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      local_50 = local_50 & 0xffffffff | (ulonglong)*(uint *)(iVar2 + 0x34) << 0x20;
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      local_40._0_4_ = *(undefined4 *)(iVar2 + 0x30);
      local_40._4_4_ = 2;
      orchestrateResult(this,(camera3_capture_result *)&local_50);
      if (*(int *)(*(int *)(DAT_00044210 + 0x4416c) + 0x2c) != 0) {
        puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_64);
        in_stack_ffffff6c = *puVar3;
        iVar1 = DAT_00044214 + 0x4417e;
        mm_camera_debug_log();
      }
      android::List<unsigned_int>::_Node::_Node(a_Stack128,&local_64);
      erasePendingRequest((_ListIterator)local_7c);
      local_64 = local_7c[0];
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_7c);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack128);
      goto LAB_000441b6;
    }
  }
  if (*(int *)(*(int *)(DAT_0004421c + 0x44016) + 0x20) != 0) {
    iVar1 = DAT_00044220 + 0x44024;
    mm_camera_debug_log();
    in_stack_ffffff6c = param_1;
  }
LAB_000441b6:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_64);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack96,CONCAT44(in_stack_ffffff6c,iVar1),extraout_r1);
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

