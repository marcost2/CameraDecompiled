
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::notifyErrorForPendingRequests() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::notifyErrorForPendingRequests(QCamera3HardwareInterface *this)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  List_qcamera__PendingBuffersInRequest_ *this_00;
  undefined auVar11 [16];
  uint local_c4;
  _Node a_Stack180 [4];
  _Node a_Stack176 [4];
  _Node a_Stack172 [4];
  uint local_a8;
  _Node a_Stack164 [4];
  _Node a_Stack160 [4];
  uint local_9c;
  uint local_98;
  uint local_94;
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uStack120;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong uStack80;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  
  piVar1 = *(int **)(DAT_00049a94 + 0x497b0);
  local_3c = *piVar1;
  local_80 = 0;
  uStack120 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  iVar2 = android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::size
                    ((List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *)(this + 0x198))
  ;
  if (iVar2 == 0) {
    local_c4 = 0xffffffff;
  }
  else {
    android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
    puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_68);
    local_c4 = *puVar3;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
  }
  iVar2 = *(int *)(DAT_00049a98 + 0x49804);
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log();
  }
  this_00 = (List_qcamera__PendingBuffersInRequest_ *)(this + 0x204);
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_94,(_ListIterator *)&local_68);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
  if (iVar4 != 0) {
    auVar11 = ZEXT816(0);
    do {
      puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_94);
      if (*puVar3 < local_c4) {
        if (*(int *)(iVar2 + 0x28) != 0) {
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_94);
          iVar4 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_94);
          android::List<qcamera::PendingBufferInfo>::size
                    ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
          mm_camera_debug_log();
        }
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        uVar5 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        uVar6 = (uint)((ulonglong)uVar5 * 0x14);
        iVar4 = (int)((ulonglong)uVar5 * 0x14 >> 0x20);
        if (iVar4 != 0) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          uVar6 = 0xffffffff;
        }
        pvVar7 = operator_new__(uVar6);
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        iVar4 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        __aeabi_memclr4(pvVar7,iVar4 * 0x14);
        local_90 = local_90 & 0xffffffff;
        puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_94);
        local_90 = local_90 & 0xffffffff00000000 | (ulonglong)*puVar3;
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        uVar8 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        local_88 = CONCAT44(pvVar7,uVar8);
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_94);
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_94);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_98,(_ListIterator *)&local_68);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
        if (iVar4 != 0) {
          puVar10 = (undefined4 *)((int)pvVar7 + 8);
          do {
            local_60 = SUB168(auVar11 >> 0x40,0);
            local_44 = 0;
            local_48 = 0;
            local_68._4_4_ = SUB164(auVar11 >> 0x20,0);
            local_68 = CONCAT44(local_68._4_4_,1);
            local_58 = CONCAT44(local_68._4_4_,4);
            uStack80 = local_60;
            puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_98);
            local_60 = local_60 & 0xffffffff | (ulonglong)*puVar3 << 0x20;
            puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_94);
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)*puVar3;
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            iVar4 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_98);
            puVar10[-1] = *(undefined4 *)(iVar4 + 4);
            *puVar10 = 1;
            puVar9 = (undefined4 *)
                     android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_98);
            puVar10[-2] = *puVar9;
            orchestrateNotify(this,(camera3_notify_msg *)&local_68);
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_94);
            android::List<unsigned_int>::_Node::_Node(a_Stack160,&local_98);
            android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase
                      ((_ListIterator)&local_9c);
            local_98 = local_9c;
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_9c);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack160);
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_94);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar4 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                  *)&local_98,(_ListIterator *)&local_68);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_68);
            puVar10 = puVar10 + 5;
          } while (iVar4 != 0);
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
        if (*(int *)(iVar2 + 0x2c) != 0) {
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_94);
          android::List<qcamera::PendingBuffersInRequest>::size(this_00);
          mm_camera_debug_log();
        }
        android::List<unsigned_int>::_Node::_Node(a_Stack164,&local_94);
        android::List<qcamera::PendingBuffersInRequest>::erase((_ListIterator)&local_68);
        local_94 = (uint)local_68;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack164);
        orchestrateResult(this,(camera3_capture_result *)&local_90);
        operator_delete__(pvVar7);
      }
      else {
        android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
        if (*(int *)(iVar2 + 0x28) != 0) {
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_94);
          mm_camera_debug_log();
        }
        uStack80 = SUB168(auVar11 >> 0x40,0);
        local_44 = 0;
        local_48 = 0;
        local_68._4_4_ = SUB164(auVar11 >> 0x20,0);
        local_68 = CONCAT44(local_68._4_4_,1);
        local_60 = uStack80 & 0xffffffff;
        local_58 = CONCAT44(local_68._4_4_,2);
        puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_94);
        local_60 = local_60 & 0xffffffff00000000 | (ulonglong)*puVar3;
        orchestrateNotify(this,(camera3_notify_msg *)&local_68);
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        uVar5 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        uVar6 = (uint)((ulonglong)uVar5 * 0x14);
        iVar4 = (int)((ulonglong)uVar5 * 0x14 >> 0x20);
        if (iVar4 != 0) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          uVar6 = 0xffffffff;
        }
        pvVar7 = operator_new__(uVar6);
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        iVar4 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        __aeabi_memclr4(pvVar7,iVar4 * 0x14);
        local_90 = local_90 & 0xffffffff;
        puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_94);
        local_90 = local_90 & 0xffffffff00000000 | (ulonglong)*puVar3;
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_98);
        local_80 = local_80 & 0xffffffff00000000 | (ulonglong)*(uint *)(iVar4 + 0x30);
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_94);
        uVar8 = android::List<qcamera::PendingBufferInfo>::size
                          ((List_qcamera__PendingBufferInfo_ *)(iVar4 + 0x10));
        local_88 = CONCAT44(pvVar7,uVar8);
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_94);
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&local_94);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar4 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_9c,(_ListIterator *)&local_a8);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_a8);
        if (iVar4 != 0) {
          puVar10 = (undefined4 *)((int)pvVar7 + 8);
          do {
            puVar10[1] = 0xffffffff;
            puVar10[2] = 0xffffffff;
            iVar4 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_9c);
            puVar10[-1] = *(undefined4 *)(iVar4 + 4);
            *puVar10 = 1;
            puVar9 = (undefined4 *)
                     android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_9c);
            puVar10[-2] = *puVar9;
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_94);
            android::List<unsigned_int>::_Node::_Node(a_Stack172,&local_9c);
            android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase
                      ((_ListIterator)&local_a8);
            local_9c = local_a8;
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_a8);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack172);
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_94);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar4 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                  *)&local_9c,(_ListIterator *)&local_a8);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_a8);
            puVar10 = puVar10 + 5;
          } while (iVar4 != 0);
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_9c);
        if (*(int *)(iVar2 + 0x2c) != 0) {
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_94);
          android::List<qcamera::PendingBuffersInRequest>::size(this_00);
          mm_camera_debug_log();
        }
        android::List<unsigned_int>::_Node::_Node(a_Stack176,&local_94);
        android::List<qcamera::PendingBuffersInRequest>::erase((_ListIterator)&local_9c);
        local_94 = local_9c;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_9c);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack176);
        orchestrateResult(this,(camera3_capture_result *)&local_90);
        operator_delete__(pvVar7);
        android::List<unsigned_int>::_Node::_Node(a_Stack180,&local_98);
        erasePendingRequest((_ListIterator)&local_9c);
        local_98 = local_9c;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_9c);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack180);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_98);
      }
      android::List<qcamera::ReprocessBuffer>::end();
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_94,(_ListIterator *)&local_68);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_94);
  android::List<qcamera::ReprocessBuffer>::clear((List_qcamera__ReprocessBuffer_ *)(this + 0x1a0));
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar4 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_68,(_ListIterator *)&local_94);
  if (iVar4 != 0) {
    do {
      iVar4 = android::List<unsigned_int>::
              _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                        ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)&local_68);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
                ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(iVar4 + 0x10));
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)&local_68);
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_68,(_ListIterator *)&local_94);
    } while (iVar4 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_94);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
  android::List<qcamera::PendingBuffersInRequest>::clear(this_00);
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::clear
            ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)(this + 400));
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log();
  }
  if (*piVar1 == local_3c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

