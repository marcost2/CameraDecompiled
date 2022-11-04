
/* qcamera::QCamera3HardwareInterface::~QCamera3HardwareInterface() */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::_QCamera3HardwareInterface
          (QCamera3HardwareInterface *this,uint param_1,camera_module_callbacks *param_2)

{
  QCamera3HardwareInterface QVar1;
  int *piVar2;
  QCameraPerfLock *this_00;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  undefined4 uVar7;
  pthread_mutex_t *__mutex;
  int iVar8;
  _Node a_Stack416 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack412 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack408 [4];
  uint local_194;
  uint local_190 [42];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_28;
  
  piVar2 = *(int **)(DAT_0003b09c + 0x3ad9e);
  local_28 = *piVar2;
  *(int *)this = *(int *)(DAT_0003b0a0 + 0x3adaa) + 8;
  iVar8 = *(int *)(DAT_0003b0a4 + 0x3adb6);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  disablePowerHint(this);
  this_00 = (QCameraPerfLock *)(this + 0x98);
  QCameraPerfLock::lock_acq(this_00);
  if (this[0x117914] != (QCamera3HardwareInterface)0x0) {
    **(undefined4 **)(this + 0x11791c) = 2;
    __mutex = *(pthread_mutex_t **)(DAT_0003b0b0 + 0x3ae0e);
    pthread_mutex_lock(__mutex);
    QVar1 = this[0x117915];
    *(uint *)(*(int *)(this + 0x11791c) + 8) = (byte)QVar1 ^ 1;
    uVar7 = 1;
    if ((byte)QVar1 == 0) {
      uVar7 = 2;
    }
    *(undefined4 *)(*(int *)(this + 0x11791c) + 4) = uVar7;
    *(undefined4 *)(*(int *)(this + 0x11791c) + 0xc) =
         *(undefined4 *)(*(int *)(DAT_0003b0b4 + 0x3ae4e) + (uint)(byte)this[0x117916] * 4);
    pthread_mutex_unlock(__mutex);
    uVar3 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x90))
                      (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x11791c));
    if ((0x7fffffff < uVar3) && (*(int *)(iVar8 + 0x20) != 0)) {
      mm_camera_debug_log();
    }
    this[0x117914] = (QCamera3HardwareInterface)0x0;
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 0xc))();
  }
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)local_190,(_ListIterator *)&local_194);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
  if (iVar4 != 0) {
    do {
      piVar5 = (int *)android::List<unsigned_int>::
                      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                      operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)local_190);
      if (*(int **)(*piVar5 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(*piVar5 + 0x18) + 0xc))();
      }
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                (a_Stack408,(int)local_190);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack408);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)local_190,(_ListIterator *)&local_194);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_190);
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 0xc))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 0xc))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 0xc))();
  }
  if ((*(int *)(this + 0xdc) != 0) &&
     ((**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x68))(**(undefined4 **)(this + 0x50)),
     *(int *)(iVar8 + 0x2c) != 0)) {
    mm_camera_debug_log();
  }
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)local_190,(_ListIterator *)&local_194);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
  if (iVar4 != 0) {
    do {
      piVar5 = (int *)android::List<unsigned_int>::
                      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                      operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)local_190);
      if (*(int **)(*piVar5 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(*piVar5 + 0x18) + 4))();
      }
      ppvVar6 = (void **)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                      *)local_190);
      free(*ppvVar6);
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                (a_Stack412,(int)local_190);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack412);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)local_190,(_ListIterator *)&local_194);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_190);
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
    *(undefined4 *)(this + 0x90) = 0;
  }
  *(undefined4 *)(this + 0x7c) = 0;
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (this[0x54] != (QCamera3HardwareInterface)0x0) {
    if (this[0x140] == (QCamera3HardwareInterface)0x0) {
      __aeabi_memclr4(local_190,0x168);
      local_e8 = 3;
      local_e4 = 0;
      if (this[0x15d] == (QCamera3HardwareInterface)0x0) {
        local_e4 = 6;
      }
      clear_metadata_buffer(*(metadata_buffer_t **)(this + 0x14c));
      if (*(int *)(this + 0x14c) == 0) {
        if (*(int *)(iVar8 + 0x20) != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        __aeabi_memcpy8((void *)(*(int *)(this + 0x14c) + 0x734b8),local_190,0x168);
        *(undefined *)(*(int *)(this + 0x14c) + 0x70) = 1;
      }
      uVar3 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x18))
                        (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0x14c));
      if ((0x7fffffff < uVar3) && (*(int *)(iVar8 + 0x20) != 0)) {
        mm_camera_debug_log();
      }
    }
    deinitParameters(this);
  }
  if (*(int *)(this + 0xdc) != 0) {
    (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x38))(**(undefined4 **)(this + 0x50));
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log();
    }
    *(undefined4 *)(this + 0xdc) = 0;
  }
  if (*(int *)(this + 0x117910) != 0) {
    closeCamera();
  }
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)local_190,(_ListIterator *)&local_194);
  if (iVar4 != 0) {
    do {
      iVar4 = android::List<unsigned_int>::
              _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                        ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)local_190);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
                ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(iVar4 + 0x10));
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)local_190);
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)local_190,(_ListIterator *)&local_194);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_190);
  android::List<qcamera::PendingBuffersInRequest>::clear
            ((List_qcamera__PendingBuffersInRequest_ *)(this + 0x204));
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::clear
            ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)(this + 400));
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)local_190,(_ListIterator *)&local_194);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
  if (iVar4 != 0) {
    do {
      android::List<unsigned_int>::_Node::_Node(a_Stack416,local_190);
      erasePendingRequest((_ListIterator)&local_194);
      local_190[0] = local_194;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack416);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)local_190,(_ListIterator *)&local_194);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_194);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_190);
  iVar4 = 0x16;
  do {
    if (*(int *)(this + iVar4 * 4) != 0) {
      free_camera_metadata();
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1d);
  QCameraPerfLock::lock_rel(this_00);
  QCameraPerfLock::lock_deinit(this_00);
  pthread_cond_destroy((pthread_cond_t *)(this + 0x20c));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x38c));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x388));
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x1178fc));
  QCamera3CropRegionMapper::_QCamera3CropRegionMapper((QCamera3CropRegionMapper *)(this + 0x1178d4))
  ;
  android::List<qcamera::stream_info_t*>::_List((List_qcamera__stream_info_t__ *)(this + 0x390));
  PendingBuffersMap::_PendingBuffersMap((PendingBuffersMap *)(this + 0x200));
  android::KeyedVector<unsigned_int,unsigned_int>::_KeyedVector
            ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8));
  android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::_List
            ((List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ *)(this + 0x1a0));
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_List
            ((List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *)(this + 0x198));
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::_List
            ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)(this + 400));
  FrameNumberRegistry::_FrameNumberRegistry((FrameNumberRegistry *)(this + 0x17c));
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x154));
  QCameraCommon::_QCameraCommon((QCameraCommon *)(this + 0xd8));
  QCameraPerfLock::_QCameraPerfLock(this_00);
  if (*piVar2 == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

