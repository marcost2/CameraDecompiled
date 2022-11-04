
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::handleMetadataWithLock(mm_camera_super_buf_t*, bool, bool) */

void qcamera::QCamera3HardwareInterface::handleMetadataWithLock
               (mm_camera_super_buf_t *param_1,bool param_2,bool param_3)

{
  uchar uVar1;
  bool bVar2;
  undefined auVar3 [16];
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  QCamera3HardwareInterface *this;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  QCamera3HardwareInterface *pQVar17;
  QCamera3HardwareInterface *pQVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  void *pvVar21;
  int iVar22;
  undefined (*pauVar23) [16];
  mm_camera_super_buf_t *__ptr;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  uint *puVar24;
  char *extraout_r1_02;
  char *pcVar25;
  CameraMetadata *pCVar26;
  undefined8 *puVar27;
  uint *puVar28;
  QCamera3ProcessingChannel *pQVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  undefined auVar36 [16];
  longlong lVar37;
  uint in_stack_fffffe5c;
  uint *local_14c;
  int local_13c;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack300 [4];
  _Node a_Stack296 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack292 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack288 [4];
  _Node a_Stack284 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack280 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack276 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack272 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack268 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack264 [4];
  uint local_104;
  undefined8 local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong uStack232;
  undefined4 local_e0;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack216 [4];
  uint local_d4;
  ScopedTraceDbg aSStack208 [8];
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong uStack176;
  ulonglong local_a8;
  ulonglong uStack160;
  ulonglong local_98;
  ulonglong uStack144;
  ulonglong local_88;
  undefined4 uStack128;
  undefined4 local_7c;
  undefined4 uStack120;
  ulonglong uStack116;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack88;
  ulonglong uStack80;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  
  __ptr = (mm_camera_super_buf_t *)(uint)param_2;
  piVar32 = *(int **)(DAT_000401fc + 0x3fea2);
  local_3c = *piVar32;
  this = (QCamera3HardwareInterface *)(DAT_00040200 + 0x3feb0);
  ScopedTraceDbg::ScopedTraceDbg(aSStack208,CONCAT44(in_stack_fffffe5c,this),(char *)__ptr);
  if ((param_1[0x142] != (mm_camera_super_buf_t)0x0) || (*(int *)(param_1 + 0x117910) - 5U < 2)) {
    pcVar25 = extraout_r1;
    local_100._0_4_ = in_stack_fffffe5c;
    if (*(int *)(*(int *)(DAT_00040204 + 0x3fed8) + 0x2c) != 0) {
      this = (QCamera3HardwareInterface *)(DAT_00040208 + 0x3fee2);
      mm_camera_debug_log();
      pcVar25 = extraout_r1_00;
      local_100._0_4_ = in_stack_fffffe5c;
    }
    if (param_3 != false) {
      QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x78),(uint)__ptr);
      free(__ptr);
      pcVar25 = extraout_r1_01;
    }
    goto LAB_000400c6;
  }
  puVar28 = *(uint **)(*(int *)(__ptr + 0x10) + 0x208);
  puVar14 = puVar28 + 0x312a;
  if (param_1[0x117940] == (mm_camera_super_buf_t)0x0) {
    iVar31 = *(int *)(param_1 + 0x11793c);
    uVar34 = *(uint *)(param_1 + 0x117938);
  }
  else {
    uVar34 = 0;
    iVar31 = 0;
  }
  local_c8._0_4_ = in_stack_fffffe5c;
  if (puVar28 == (uint *)0x0) {
    local_14c = (uint *)0x0;
    puVar24 = (uint *)0x0;
    puVar4 = puVar28;
    puVar5 = puVar28;
    puVar14 = puVar28;
    puVar6 = puVar28;
    puVar7 = puVar28;
  }
  else {
    puVar24 = (uint *)(uint)*(byte *)(puVar28 + 0x1a);
    if (puVar24 != (uint *)0x0) {
      puVar24 = puVar28 + 0x312c;
    }
    local_14c = puVar24;
    if (puVar24 != (uint *)0x0) {
      local_14c = (uint *)0x1;
    }
    puVar4 = puVar28 + 0x313e;
    puVar5 = puVar28 + 0x31a6;
    puVar6 = puVar28 + 0x312b;
    puVar7 = puVar28 + 0x313d;
    if (*(int *)(*(int *)(DAT_00040210 + 0x3ff9a) + 0x2c) != 0 && puVar24 != (uint *)0x0) {
      local_c8._0_4_ = *puVar14;
      this = (QCamera3HardwareInterface *)(DAT_00040214 + 0x3ffb6);
      mm_camera_debug_log();
    }
  }
  if (((puVar4 == (uint *)0x0 || puVar6 == (uint *)0x0) ||
      (puVar5 == (uint *)0x0 || puVar14 == (uint *)0x0)) || (puVar7 == (uint *)0x0)) {
    local_100._0_4_ = (uint)local_c8;
    if (*(int *)(*(int *)(DAT_0004021c + 0x3fff2) + 0x20) != 0) {
      this = (QCamera3HardwareInterface *)(DAT_00040220 + 0x3fffc);
      mm_camera_debug_log();
      local_100._0_4_ = (uint)local_c8;
    }
joined_r0x00040012:
    if (param_3 != false) {
      QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x78),(uint)__ptr);
      free(__ptr);
    }
  }
  else {
    uVar8 = *puVar4;
    uVar9 = *puVar6;
    uVar10 = *puVar7;
    uVar11 = *puVar14;
    uVar30 = *puVar5;
    uVar33 = puVar5[1];
    lVar37 = systemTime();
    android::List<qcamera::PendingBuffersInRequest>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar12 = uVar30 - uVar34;
    iVar31 = (uVar33 - iVar31) - (uint)(uVar30 < uVar34);
    iVar13 = android::List<qcamera::ReprocessBuffer>::
             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                           *)&local_c8,(_ListIterator *)&local_68);
    if (iVar13 != 0) {
      do {
        puVar14 = (uint *)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)&local_c8);
        iVar13 = (int)((ulonglong)(lVar37 - *(longlong *)(puVar14 + 2)) >> 0x20);
        bVar35 = (uint)(lVar37 - *(longlong *)(puVar14 + 2)) < 0xb2d05e01;
        if ((int)(iVar13 - (uint)bVar35) < 0 == (SBORROW4(iVar13,(uint)bVar35) != false)) {
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
          android::List<qcamera::ReprocessBuffer>::end();
          while (iVar13 = android::List<qcamera::ReprocessBuffer>::
                          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                        *)&local_100,(_ListIterator *)&local_d4), iVar13 != 0) {
            piVar15 = (int *)android::List<unsigned_int>::
                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                             ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                          *)&local_100);
            piVar15 = *(int **)(*piVar15 + 0x18);
            if ((piVar15 != (int *)0x0) && ((QCamera3Stream *)piVar15[9] != (QCamera3Stream *)0x0))
            {
              if (*(int *)(*(int *)(DAT_00040234 + 0x401be) + 0x20) != 0) {
                local_c8._0_4_ = *puVar14;
                QCamera3Stream::getMyType((QCamera3Stream *)piVar15[9]);
                this = (QCamera3HardwareInterface *)(DAT_00040238 + 0x401d8);
                mm_camera_debug_log();
              }
              (**(code **)(*piVar15 + 0x40))(piVar15,*puVar14);
            }
            android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
            _ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
                          *)&local_100);
          }
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_d4);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_100)
          ;
        }
        android::List<qcamera::PendingBuffersInRequest>::
        _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                      *)&local_c8);
        iVar13 = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                               *)&local_c8,(_ListIterator *)&local_68);
      } while (iVar13 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
    if (uVar9 != 0) {
      iVar13 = *(int *)(DAT_00040618 + 0x4028a);
      if (*(int *)(iVar13 + 0x2c) != 0) {
        this = (QCamera3HardwareInterface *)(DAT_0004061c + 0x4029e);
        local_c8._0_4_ = uVar8;
        mm_camera_debug_log();
      }
      android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar16 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)&local_68,(_ListIterator *)&local_c8);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
      if (iVar16 != 0) {
        pQVar17 = (QCamera3HardwareInterface *)(DAT_00040624 + 0x402ee);
        pQVar18 = (QCamera3HardwareInterface *)(DAT_0004062c + 0x40300);
        do {
          if (*(int *)(iVar13 + 0x2c) != 0) {
            puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                            *)&local_68);
            local_c8._0_4_ = *puVar14;
            this = pQVar18;
            mm_camera_debug_log();
          }
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_68);
          if (((*(int *)(iVar16 + 0x30) == 0) &&
              (puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                               *)&local_68), *puVar14 < uVar8)) &&
             ((iVar16 = android::List<qcamera::ReprocessBuffer>::
                        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                      *)&local_68), *(int *)(iVar16 + 0x44) == 0 &&
              (*(int *)(iVar13 + 0x20) != 0)))) {
            puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                            *)&local_68);
            local_c8._0_4_ = *puVar14;
            this = pQVar17;
            mm_camera_debug_log();
          }
          puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_68);
          if ((*puVar14 == uVar8) &&
             (iVar16 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_68), *(char *)(iVar16 + 0x20) == '\0')) {
            local_b8 = 0;
            uStack176 = 0;
            local_a8 = local_a8 & 0xffffffff00000000;
            local_c8 = 0;
            local_c0 = 0;
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_68);
            *(int *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + 1;
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_68);
            *(undefined *)(iVar16 + 0x20) = 1;
            pQVar17 = (QCamera3HardwareInterface *)
                      android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)&local_68);
            uVar20 = translateCbUrgentMetadataToResultMetadata
                               (pQVar17,(metadata_buffer_t *)puVar28,(uchar)pQVar17[0x4c]);
            local_c0 = 0;
            local_c8 = CONCAT44(uVar20,uVar8);
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_68);
            local_b8 = local_b8 & 0xffffffff | (ulonglong)*(uint *)(iVar16 + 0x44) << 0x20;
            orchestrateResult((QCamera3HardwareInterface *)param_1,
                              (camera3_capture_result *)&local_c8);
            if (*(int *)(iVar13 + 0x2c) != 0) {
              this = (QCamera3HardwareInterface *)(DAT_00040634 + 0x4041c);
              mm_camera_debug_log();
            }
            free_camera_metadata();
            break;
          }
          android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
          _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
          ::operator__(a_Stack216,(int)&local_68);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack216)
          ;
          android::List<qcamera::ReprocessBuffer>::end();
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                 *)&local_68,(_ListIterator *)&local_c8);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
        } while (iVar16 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
    }
    local_100._0_4_ = (uint)local_c8;
    if (uVar11 == 0) {
      if (*(int *)(*(int *)(DAT_0004063c + 0x40450) + 0x2c) != 0) {
        this = (QCamera3HardwareInterface *)(DAT_00040e6c + 0x40e4a);
        mm_camera_debug_log();
        local_100._0_4_ = (uint)local_c8;
      }
      goto joined_r0x00040012;
    }
    iVar13 = *(int *)(DAT_0004063c + 0x40450);
    if (*(int *)(iVar13 + 0x28) != 0) {
      this = (QCamera3HardwareInterface *)(DAT_00040640 + 0x40462);
      local_100._0_4_ = uVar10;
      mm_camera_debug_log();
    }
    android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar16 = android::List<qcamera::ReprocessBuffer>::
             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                           *)&local_d4,(_ListIterator *)&local_c8);
    if (iVar16 != 0) {
      auVar36 = ZEXT816(0);
      do {
        puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                        *)&local_d4);
        uVar34 = *puVar14;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
        if (uVar10 < uVar34) goto LAB_00040e30;
        local_100 = SUB168(auVar36,0);
        local_f8 = SUB168(auVar36 >> 0x40,0);
        local_e0 = 0;
        local_f0 = local_100;
        uStack232 = local_f8;
        if (*(int *)(iVar13 + 0x2c) != 0) {
          puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_d4);
          local_100._0_4_ = *puVar14;
          this = (QCamera3HardwareInterface *)(DAT_00040648 + 0x40530);
          mm_camera_debug_log();
        }
        iVar16 = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)&local_d4);
        *(int *)(iVar16 + 0x44) = *(int *)(iVar16 + 0x44) + 1;
        iVar16 = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)&local_d4);
        local_f0 = local_f0 & 0xffffffff | (ulonglong)*(uint *)(iVar16 + 0x44) << 0x20;
        if (local_14c != (uint *)0x0) {
          local_c8 = SUB168(auVar36,0);
          local_c0 = SUB168(auVar36 >> 0x40,0);
          local_a8 = 0;
          local_b8 = local_c8;
          uStack176 = local_c0;
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
          while( true ) {
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_d4);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                   *)&local_104,(_ListIterator *)&local_68);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_68);
            if (iVar16 == 0) break;
            piVar15 = (int *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_104);
            piVar15 = *(int **)(*piVar15 + 0x18);
            uVar34 = (**(code **)(*piVar15 + 0x1c))(piVar15);
            uVar34 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar15,uVar34);
            if (*puVar24 != 0) {
              uVar8 = 0;
              do {
                if (uVar34 == puVar24[uVar8 * 2 + 1]) {
                  if (*(int *)(iVar13 + 0x20) != 0) {
                    puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                      ::operator__((
                                                  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                  *)&local_d4);
                    local_100._0_4_ = *puVar14;
                    this = (QCamera3HardwareInterface *)(DAT_00040650 + 0x40606);
LAB_0004067a:
                    mm_camera_debug_log();
                  }
                }
                else if (*(int *)(iVar13 + 0x28) != 0) {
                  puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                  *)&local_d4);
                  local_100._0_4_ = *puVar14;
                  this = (QCamera3HardwareInterface *)(DAT_000408e4 + 0x4066c);
                  goto LAB_0004067a;
                }
                local_c8 = CONCAT44(local_c8._4_4_,1);
                puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                *)&local_d4);
                local_b8 = CONCAT44(local_b8._4_4_,4);
                local_c0 = local_c0 & 0xffffffff00000000 | (ulonglong)*puVar14;
                puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                *)&local_104);
                local_c0 = local_c0 & 0xffffffff | (ulonglong)*puVar14 << 0x20;
                orchestrateNotify((QCamera3HardwareInterface *)param_1,
                                  (camera3_notify_msg *)&local_c8);
                if (*(int *)(iVar13 + 0x20) != 0) {
                  puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                  *)&local_d4);
                  local_100._0_4_ = *puVar14;
                  this = (QCamera3HardwareInterface *)(DAT_000408ec + 0x406b6);
                  mm_camera_debug_log();
                }
                puVar19 = (undefined4 *)
                          android::List<qcamera::ReprocessBuffer>::
                          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                        *)&local_d4);
                local_68 = CONCAT44(uVar34,*puVar19);
                android::List<qcamera::ReprocessBuffer>::push_back((uint *)(param_1 + 0x1a0));
                uVar8 = uVar8 + 1;
              } while (uVar8 < *puVar24);
            }
            android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
            _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
            ::operator__(a_Stack264,(int)&local_104);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack264);
          }
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_104)
          ;
        }
        puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                        *)&local_d4);
        if (*puVar14 < uVar10) {
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          if (*(int *)(iVar16 + 0x30) == 0) {
            *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
            android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                      ((CameraMetadata *)&local_c8);
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_d4);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::update
                      ((CameraMetadata *)&local_c8,0xc0001,iVar16 + 8,1,(uint)this);
            uVar34 = android::hardware::camera::common::V1_0::helper::CameraMetadata::release
                               ((CameraMetadata *)&local_c8);
            local_100 = local_100 & 0xffffffff | (ulonglong)uVar34 << 0x20;
            puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                            *)&local_d4);
            notifyError((QCamera3HardwareInterface *)param_1,*puVar14,3);
            android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                      ((CameraMetadata *)&local_c8);
            goto LAB_00040a3a;
          }
          android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
          _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
          ::operator__(a_Stack268,(int)&local_d4);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack268)
          ;
        }
        else {
          *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
          uStack88 = SUB168(auVar36,0);
          local_60 = SUB168(auVar36 >> 0x40,0);
          local_44 = 0;
          bVar35 = false;
          local_48 = 0;
          local_68 = CONCAT44(SUB164(auVar36 >> 0x20,0),2);
          uStack80 = local_60;
          puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_d4);
          local_60 = local_60 & 0xffffffff00000000 | (ulonglong)*puVar14;
          uStack88 = CONCAT44(iVar31,iVar12);
          orchestrateNotify((QCamera3HardwareInterface *)param_1,(camera3_notify_msg *)&local_68);
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          *(int *)(iVar16 + 0x28) = iVar12;
          *(int *)(iVar16 + 0x2c) = iVar31;
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          updateTimeStampInPendingBuffers((uint)param_1,CONCAT44((uint)local_100,this));
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                 *)&local_c8,(_ListIterator *)&local_104);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_104)
          ;
          if (iVar16 != 0) {
            do {
              iVar16 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_c8);
              if (*(char *)(iVar16 + 8) != '\0') {
                piVar15 = (int *)android::List<qcamera::ReprocessBuffer>::
                                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                               *)&local_c8);
                pQVar29 = *(QCamera3ProcessingChannel **)(*piVar15 + 0x18);
                puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                *)&local_d4);
                QCamera3ProcessingChannel::queueReprocMetadata(pQVar29,__ptr,*puVar14,false);
                bVar35 = true;
                goto LAB_00040868;
              }
              android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
              _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
              ::operator__(a_Stack272,(int)&local_c8);
              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)a_Stack272);
              android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_d4);
              android::List<qcamera::ReprocessBuffer>::end();
              iVar16 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                     *)&local_c8,(_ListIterator *)&local_104);
              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)&local_104);
            } while (iVar16 != 0);
            bVar35 = false;
          }
LAB_00040868:
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::ReprocessBuffer>::begin();
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                 *)&local_c8,(_ListIterator *)&local_104);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_104)
          ;
          if (iVar16 != 0) {
            do {
              iVar16 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_c8);
              if (*(char *)(iVar16 + 4) != '\0') {
                piVar15 = (int *)android::List<qcamera::ReprocessBuffer>::
                                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                               *)&local_c8);
                pQVar29 = *(QCamera3ProcessingChannel **)(*piVar15 + 0x18);
                puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                *)&local_d4);
                QCamera3ProcessingChannel::queueReprocMetadata(pQVar29,__ptr,*puVar14,false);
                bVar35 = true;
                break;
              }
              android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
              _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
              ::operator__(a_Stack276,(int)&local_c8);
              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)a_Stack276);
              android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_d4);
              android::List<qcamera::ReprocessBuffer>::end();
              iVar16 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                     *)&local_c8,(_ListIterator *)&local_104);
              libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                        ((AbstractUnwindCursor *)&local_104);
            } while (iVar16 != 0);
          }
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          pCVar26 = *(CameraMetadata **)(iVar16 + 0x28);
          uVar20 = *(undefined4 *)(iVar16 + 0x2c);
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          this = *(QCamera3HardwareInterface **)(iVar16 + 8);
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          iVar22 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          uVar1 = *(uchar *)(iVar22 + 0x40);
          iVar22 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          bVar2 = *(bool *)(iVar22 + 0x48);
          iVar22 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          local_100._0_4_ = iVar16 + 0x38;
          uVar34 = translateFromHalMetadata
                             ((metadata_buffer_t *)param_1,CONCAT44((uint)local_100,this),
                              (int)puVar28,pCVar26,(uchar)uVar20,uVar1,bVar2,bVar35,
                              *(bool *)(iVar22 + 0x49));
          local_100 = local_100 & 0xffffffff | (ulonglong)uVar34 << 0x20;
          pQVar17 = (QCamera3HardwareInterface *)
                    android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_d4);
          restoreHdrScene(pQVar17,(uchar)pQVar17[0x4b],local_100._4_4_);
          saveExifParams((QCamera3HardwareInterface *)param_1,(metadata_buffer_t *)puVar28);
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          if (*(int *)(iVar16 + 0x1c) != 0) {
            local_c8 = SUB168(auVar36,0);
            local_c0 = SUB168(auVar36 >> 0x40,0);
            uStack120 = SUB164(auVar36 >> 0x20,0);
            uStack128 = SUB164(auVar36 >> 0x40,0);
            local_7c = SUB164(auVar36 >> 0x60,0);
            local_b8 = local_c8;
            uStack176 = local_c0;
            local_a8 = local_c8;
            uStack160 = local_c0;
            local_98 = local_c8;
            uStack144 = local_c0;
            local_88 = local_c8;
            uStack116 = local_c0;
            property_get();
            iVar16 = atoi((char *)&local_c8);
            if ((iVar16 != 0) && (*(char *)(puVar28 + 0x1db2a) != '\0')) {
              this = (QCamera3HardwareInterface *)(DAT_00040d90 + 0x409f6);
              local_100._0_4_ = uVar10;
              dumpMetadataToFile(this,(tuning_params_t *)(puVar28 + 0x1db2b),
                                 (uint *)(param_1 + 0x3b0),true,(char *)this,uVar10);
            }
          }
          if (!bVar35) {
            if (*(int *)(iVar13 + 0x2c) != 0) {
              this = (QCamera3HardwareInterface *)(DAT_00040d94 + 0x40a16);
              mm_camera_debug_log();
            }
            if (param_3 != false) {
              QCamera3Channel::bufDone(*(QCamera3Channel **)(param_1 + 0x78),(uint)__ptr);
              free(__ptr);
            }
          }
LAB_00040a3a:
          if ((local_100._4_4_ == (camera_metadata *)0x0) && (*(int *)(iVar13 + 0x20) != 0)) {
            this = (QCamera3HardwareInterface *)(DAT_00040d9c + 0x40a4a);
            mm_camera_debug_log();
          }
          puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_d4);
          local_100 = local_100 & 0xffffffff00000000 | (ulonglong)*puVar14;
          iVar16 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_d4);
          local_f8 = 0;
          local_f0 = local_f0 & 0xffffffff00000000 | (ulonglong)*(uint *)(iVar16 + 0x30);
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_d4);
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
          while( true ) {
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_d4);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                   *)&local_c8,(_ListIterator *)&local_68);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_68);
            if (iVar16 == 0) break;
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                   *)&local_c8);
            if (*(int *)(iVar16 + 4) != 0) {
              local_f8 = local_f8 & 0xffffffff00000000 | (ulonglong)((int)local_f8 + 1);
            }
            android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
            _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
            ::operator__(a_Stack280,(int)&local_c8);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack280);
          }
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
          puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_d4);
          updateFpsInPreviewBuffer
                    ((QCamera3HardwareInterface *)param_1,(metadata_buffer_t *)puVar28,*puVar14);
          if ((int)local_f8 == 0) {
            orchestrateResult((QCamera3HardwareInterface *)param_1,
                              (camera3_capture_result *)&local_100);
            if (*(int *)(iVar13 + 0x2c) != 0) {
              android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_d4);
              this = (QCamera3HardwareInterface *)(DAT_00040e8c + 0x40dc4);
              mm_camera_debug_log();
            }
            free_camera_metadata();
          }
          else {
            lVar37 = (local_f8 & 0xffffffff) * 0x14;
            uVar34 = (uint)lVar37;
            iVar16 = (int)((ulonglong)lVar37 >> 0x20);
            if (iVar16 != 0) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              uVar34 = 0xffffffff;
            }
            pvVar21 = operator_new__(uVar34);
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_d4);
            android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_d4);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar16 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                   *)&local_68,(_ListIterator *)&local_c8);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_c8);
            if (iVar16 != 0) {
              local_13c = 0;
              do {
                iVar16 = android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_68);
                if (*(int *)(iVar16 + 4) != 0) {
                  android::List<qcamera::ReprocessBuffer>::begin();
                  while( true ) {
                    android::List<qcamera::ReprocessBuffer>::end();
                    iVar16 = android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                           *)&local_c8,(_ListIterator *)&local_104);
                    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                              ((AbstractUnwindCursor *)&local_104);
                    if (iVar16 == 0) break;
                    iVar16 = android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_68);
                    piVar15 = *(int **)(**(int **)(iVar16 + 4) + 0x18);
                    uVar34 = (**(code **)(*piVar15 + 0x1c))(piVar15);
                    iVar16 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar15,uVar34);
                    iVar22 = android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_c8);
                    if ((*(int *)(iVar22 + 4) == iVar16) &&
                       (puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                          ::operator__((
                                                  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                  *)&local_c8), *puVar14 == uVar10)) {
                      iVar16 = android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                             *)&local_68);
                      *(undefined4 *)(*(int *)(iVar16 + 4) + 8) = 1;
                      if (*(int *)(iVar13 + 0x20) != 0) {
                        this = (QCamera3HardwareInterface *)(DAT_00040e74 + 0x40bda);
                        local_100._0_4_ = uVar10;
                        mm_camera_debug_log();
                      }
                      android::List<unsigned_int>::_Node::_Node(a_Stack284,(uint *)&local_c8);
                      android::List<qcamera::ReprocessBuffer>::erase((_ListIterator)&local_104);
                      local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)local_104;
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)&local_104);
                      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                ((AbstractUnwindCursor *)a_Stack284);
                      break;
                    }
                    android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
                    _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
                    ::operator__(a_Stack288,(int)&local_c8);
                    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                              ((AbstractUnwindCursor *)a_Stack288);
                  }
                  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                            ((AbstractUnwindCursor *)&local_c8);
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  uVar34 = PendingBuffersMap::getBufErrStatus
                                     ((PendingBuffersMap *)(param_1 + 0x200),
                                      *(native_handle ***)(*(int *)(iVar16 + 4) + 4));
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  *(uint *)(*(int *)(iVar16 + 4) + 8) = *(uint *)(*(int *)(iVar16 + 4) + 8) | uVar34
                  ;
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  if ((*(byte *)(*(int *)(iVar16 + 4) + 8) & 1) != 0) {
                    if (*(int *)(iVar13 + 0x34) != 0) {
                      android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)&local_68);
                      this = (QCamera3HardwareInterface *)(DAT_00040e7c + 0x40c68);
                      local_100._0_4_ = uVar10;
                      mm_camera_debug_log();
                    }
                    uStack176 = SUB168(auVar36 >> 0x40,0);
                    local_a8 = 0;
                    local_c0 = uStack176 & 0xffffffff00000000 | (ulonglong)uVar10;
                    local_c8._4_4_ = SUB164(auVar36 >> 0x20,0);
                    local_c8 = CONCAT44(local_c8._4_4_,1);
                    local_b8 = CONCAT44(local_c8._4_4_,4);
                    puVar14 = (uint *)android::List<qcamera::ReprocessBuffer>::
                                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                                      ::operator__((
                                                  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                                  *)&local_68);
                    local_c0 = local_c0 & 0xffffffff | (ulonglong)*puVar14 << 0x20;
                    orchestrateNotify((QCamera3HardwareInterface *)param_1,
                                      (camera3_notify_msg *)&local_c8);
                  }
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  PendingBuffersMap::removeBuf
                            ((PendingBuffersMap *)(param_1 + 0x200),
                             *(native_handle ***)(*(int *)(iVar16 + 4) + 4));
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  pauVar23 = *(undefined (**) [16])(iVar16 + 4);
                  auVar3 = *pauVar23;
                  puVar27 = (undefined8 *)((int)pvVar21 + local_13c * 0x14);
                  *puVar27 = SUB168(auVar3,0);
                  puVar27[1] = SUB168(auVar3 >> 0x40,0);
                  *(undefined4 *)(puVar27 + 2) = *(undefined4 *)pauVar23[1];
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  free(*(void **)(iVar16 + 4));
                  iVar16 = android::List<qcamera::ReprocessBuffer>::
                           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                         *)&local_68);
                  *(undefined4 *)(iVar16 + 4) = 0;
                  local_13c = local_13c + 1;
                }
                android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
                _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
                ::operator__(a_Stack292,(int)&local_68);
                libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                          ((AbstractUnwindCursor *)a_Stack292);
                android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_d4);
                android::List<qcamera::ReprocessBuffer>::end();
                iVar16 = android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                       *)&local_68,(_ListIterator *)&local_c8);
                libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                          ((AbstractUnwindCursor *)&local_c8);
              } while (iVar16 != 0);
            }
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_68);
            local_f8 = local_f8 & 0xffffffff | ZEXT48(pvVar21) << 0x20;
            orchestrateResult((QCamera3HardwareInterface *)param_1,
                              (camera3_capture_result *)&local_100);
            if (*(int *)(iVar13 + 0x2c) != 0) {
              android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_d4);
              this = (QCamera3HardwareInterface *)(DAT_00040e84 + 0x40d62);
              mm_camera_debug_log();
            }
            free_camera_metadata();
            operator_delete__(pvVar21);
          }
          android::List<unsigned_int>::_Node::_Node(a_Stack296,&local_d4);
          erasePendingRequest((_ListIterator)&local_c8);
          local_d4 = (uint)local_c8;
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack296)
          ;
          iVar16 = android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::empty
                             ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)
                              (param_1 + 400));
          if (iVar16 == 0) {
            handlePendingReprocResults((QCamera3HardwareInterface *)param_1,uVar10 + 1);
          }
        }
        android::List<qcamera::ReprocessBuffer>::end();
        iVar16 = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                               *)&local_d4,(_ListIterator *)&local_c8);
      } while (iVar16 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
LAB_00040e30:
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_d4);
  }
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar31 = android::List<qcamera::ReprocessBuffer>::
           _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
           ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                         *)&local_c8,(_ListIterator *)&local_68);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
  if (iVar31 != 0) {
    do {
      iVar31 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                             *)&local_c8);
      *(char *)(iVar31 + 0x40) = *(char *)(iVar31 + 0x40) + '\x01';
      android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack300,(int)&local_c8);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack300);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar31 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)&local_c8,(_ListIterator *)&local_68);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_68);
    } while (iVar31 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_c8);
  if (*(int *)(*(int *)(DAT_00040228 + 0x4009c) + 0x2c) != 0) {
    local_100._0_4_ = *(uint *)(param_1 + 0x210);
    this = (QCamera3HardwareInterface *)(DAT_0004022c + 0x400ae);
    mm_camera_debug_log();
  }
  unblockRequestIfNecessary((QCamera3HardwareInterface *)param_1);
  pcVar25 = extraout_r1_02;
LAB_000400c6:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack208,CONCAT44((uint)local_100,this),pcVar25);
  if (*piVar32 == local_3c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

