
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::handleBufferWithLock(camera3_stream_buffer*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBufferWithLock
          (QCamera3HardwareInterface *this,camera3_stream_buffer *param_1,uint param_2)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  char *extraout_r1;
  char *extraout_r1_00;
  uint uVar9;
  char *extraout_r1_01;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  ulonglong uVar16;
  uint in_stack_ffffff44;
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack164 [4];
  _Node a_Stack160 [4];
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  camera3_stream_buffer *local_8c;
  ulonglong *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack124;
  undefined4 local_78;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack116 [4];
  _Node a_Stack112 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack108 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack104 [4];
  uint local_64;
  ScopedTraceDbg aSStack96 [8];
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar13 = *(int **)(DAT_00044574 + 0x4423a);
  local_28 = *piVar13;
  iVar2 = DAT_00044578 + 0x44248;
  ScopedTraceDbg::ScopedTraceDbg(aSStack96,CONCAT44(in_stack_ffffff44,iVar2),(char *)param_1);
  pcVar10 = extraout_r1;
  if (*(int *)(this + 0x117910) - 5U < 2) goto LAB_00044834;
  if (this[0x142] != (QCamera3HardwareInterface)0x0) {
    handleBuffersDuringFlushLock(this,param_1);
    pcVar10 = extraout_r1_00;
    goto LAB_00044834;
  }
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_64,(_ListIterator *)&local_50);
  if (iVar3 != 0) {
    do {
      puVar4 = (uint *)android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_64);
      uVar11 = *puVar4;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
      if (uVar11 == param_2) goto LAB_000442de;
      android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack104,(int)&local_64);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack104);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_64,(_ListIterator *)&local_50);
    } while (iVar3 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
LAB_000442de:
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
          _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                        *)&local_64,(_ListIterator *)&local_50);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
  if (iVar3 == 0) {
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_64);
    if (*(int *)(iVar3 + 0x30) == 0) {
      android::List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)&local_64);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
      android::List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)&local_64);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_50,(_ListIterator *)&local_98);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
      if (iVar3 != 0) {
        iVar5 = *(int *)(DAT_000448a0 + 0x4452a);
        iVar3 = DAT_000448a4 + 0x44530;
        iVar14 = DAT_000448ac + 0x4453c;
        do {
          piVar12 = (int *)android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_50);
          if (*piVar12 == *(int *)param_1) {
            iVar6 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_50);
            if (*(int *)(iVar6 + 4) == 0) {
              pvVar7 = malloc(0x14);
              iVar6 = android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)&local_50);
              *(void **)(iVar6 + 4) = pvVar7;
              iVar6 = android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)&local_50);
              auVar1 = *(undefined (*) [16])param_1;
              puVar8 = *(undefined8 **)(iVar6 + 4);
              *puVar8 = SUB168(auVar1,0);
              puVar8[1] = SUB168(auVar1 >> 0x40,0);
              *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_1 + 0x10);
              if (*(int *)(iVar5 + 0x28) != 0) {
                in_stack_ffffff44 = *(uint *)(param_1 + 4);
                iVar6 = iVar3;
                goto LAB_000445ca;
              }
            }
            else {
              iVar6 = iVar14;
              if (*(int *)(iVar5 + 0x20) != 0) {
LAB_000445ca:
                mm_camera_debug_log();
                iVar2 = iVar6;
              }
            }
          }
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
          _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
          ::operator__(a_Stack164,(int)&local_50);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack164)
          ;
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_64);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar6 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)&local_50,(_ListIterator *)&local_98);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
        } while (iVar6 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_50);
    }
    else {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                ((CameraMetadata *)local_58);
      local_40 = 0;
      uStack56 = 0;
      local_50 = 0;
      local_48 = 0;
      local_2c = 0;
      local_30 = 0;
      uVar16 = systemTime();
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      if (*(int *)(iVar3 + 0x34) == 0) {
        if (*(int *)(*(int *)(DAT_00044874 + 0x44610) + 0x20) != 0) {
          iVar2 = DAT_00044878 + 0x4461e;
LAB_00044648:
          mm_camera_debug_log();
        }
      }
      else {
        iVar3 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_64);
        android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                  ((CameraMetadata *)local_58,*(camera_metadata **)(iVar3 + 0x34));
        iVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          ((CameraMetadata *)local_58,0xe0010);
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(DAT_00044868 + 0x44632) + 0x24) != 0) {
            iVar2 = DAT_0004486c + 0x4463c;
            goto LAB_00044648;
          }
        }
        else {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find
                    ((CameraMetadata *)&local_98,local_58);
          uVar16 = *local_88;
        }
      }
      local_40 = uVar16;
      local_48 = local_48 & 0xffffffff00000000 | (ulonglong)param_2;
      local_50 = CONCAT44(local_50._4_4_,2);
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_64);
      if (*(int *)(*(int *)(iVar3 + 0x30) + 0x10) != -1) {
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_64);
        uVar11 = sync_wait();
        iVar3 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_64);
        close(*(int *)(*(int *)(iVar3 + 0x30) + 0x10));
        if ((uVar11 != 0) && (*(int *)(*(int *)(DAT_00044880 + 0x44694) + 0x20) != 0)) {
          iVar2 = DAT_00044884 + 0x4469e;
          mm_camera_debug_log();
          in_stack_ffffff44 = uVar11;
        }
      }
      uVar11 = PendingBuffersMap::getBufErrStatus
                         ((PendingBuffersMap *)(this + 0x200),*(native_handle ***)(param_1 + 4));
      uVar9 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar11 | uVar9;
      bVar15 = ((uVar11 | uVar9) & 1) != 0;
      piVar12 = (int *)(DAT_0004488c + 0x446cc);
      iVar3 = *piVar12;
      if (bVar15) {
        piVar12 = *(int **)(iVar3 + 0x34);
      }
      if (bVar15 && piVar12 != (int *)0x0) {
        iVar2 = DAT_00044890 + 0x446de;
        in_stack_ffffff44 = param_2;
        mm_camera_debug_log();
      }
      PendingBuffersMap::removeBuf
                ((PendingBuffersMap *)(this + 0x200),*(native_handle ***)(param_1 + 4));
      local_80 = 0;
      uStack124 = 0;
      local_78 = 0;
      local_98 = param_2;
      iVar14 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                             *)&local_64);
      local_94 = *(undefined4 *)(iVar14 + 0x34);
      iVar14 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                             *)&local_64);
      local_88 = *(ulonglong **)(iVar14 + 0x30);
      local_84 = 2;
      local_90 = 1;
      local_8c = param_1;
      orchestrateNotify(this,(camera3_notify_msg *)&local_50);
      orchestrateResult(this,(camera3_capture_result *)&local_98);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        iVar2 = DAT_00044898 + 0x44740;
        mm_camera_debug_log();
        in_stack_ffffff44 = param_2;
      }
      android::List<unsigned_int>::_Node::_Node(a_Stack160,&local_64);
      erasePendingRequest((_ListIterator)&local_9c);
      local_64 = local_9c;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_9c);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack160);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                ((CameraMetadata *)local_58);
    }
  }
  else {
    android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&local_50,(_ListIterator *)&local_98);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
    if (iVar3 != 0) {
      iVar14 = *(int *)(DAT_0004457c + 0x44334);
      iVar3 = DAT_00044580 + 0x4433c;
      do {
        puVar4 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_50);
        if (((*puVar4 < param_2) &&
            (iVar5 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_50), *(int *)(iVar5 + 0x30) == 0)) &&
           (*(int *)(iVar14 + 0x24) != 0)) {
          puVar4 = (uint *)android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_50);
          in_stack_ffffff44 = *puVar4;
          iVar2 = iVar3;
          mm_camera_debug_log();
        }
        android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
        _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack108,(int)&local_50);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack108);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_50,(_ListIterator *)&local_98);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
      } while (iVar5 != 0);
    }
    iVar3 = libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_50);
    *(undefined8 *)(iVar3 + 0x14) = 0;
    *(undefined8 *)(iVar3 + 0x1c) = 0;
    *(undefined8 *)(iVar3 + 4) = 0;
    *(undefined8 *)(iVar3 + 0xc) = 0;
    local_50 = CONCAT44(local_50._4_4_,param_2);
    local_40 = (ulonglong)(uint)local_40;
    local_48 = CONCAT44(local_48._4_4_,1);
    android::List<qcamera::ReprocessBuffer>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&local_98,(_ListIterator *)local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_58);
    if (iVar3 != 0) {
      do {
        piVar12 = *(int **)(*(int *)param_1 + 0x18);
        uVar11 = (**(code **)(*piVar12 + 0x1c))(piVar12);
        iVar3 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar12,uVar11);
        iVar14 = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)&local_98);
        if ((*(int *)(iVar14 + 4) == iVar3) &&
           (puVar4 = (uint *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_98), *puVar4 == param_2)) {
          *(undefined4 *)(param_1 + 8) = 1;
          if (*(int *)(*(int *)(DAT_00044850 + 0x4478c) + 0x2c) != 0) {
            iVar2 = DAT_00044854 + 0x44796;
            in_stack_ffffff44 = param_2;
            mm_camera_debug_log();
          }
          android::List<unsigned_int>::_Node::_Node(a_Stack112,&local_98);
          android::List<qcamera::ReprocessBuffer>::erase((_ListIterator)local_58);
          local_98 = local_58[0];
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_58);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack112)
          ;
          break;
        }
        android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
        _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack116,(int)&local_98);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack116);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar3 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_98,(_ListIterator *)local_58);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)local_58);
      } while (iVar3 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
    uVar11 = PendingBuffersMap::getBufErrStatus
                       ((PendingBuffersMap *)(this + 0x200),*(native_handle ***)(param_1 + 4));
    *(uint *)(param_1 + 8) = uVar11 | *(uint *)(param_1 + 8);
    local_48 = local_48 & 0xffffffff | ZEXT48(param_1) << 0x20;
    if (*(int *)(*(int *)(DAT_0004485c + 0x447fa) + 0x20) != 0) {
      iVar2 = DAT_00044860 + 0x44808;
      mm_camera_debug_log();
      in_stack_ffffff44 = param_2;
    }
    PendingBuffersMap::removeBuf
              ((PendingBuffersMap *)(this + 0x200),*(native_handle ***)(param_1 + 4));
    orchestrateResult(this,(camera3_capture_result *)&local_50);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_64);
  pcVar10 = extraout_r1_01;
LAB_00044834:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack96,CONCAT44(in_stack_ffffff44,iVar2),pcVar10);
  if (*piVar13 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

