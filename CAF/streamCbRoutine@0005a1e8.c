
/* qcamera::QCamera3YUVChannel::streamCbRoutine(mm_camera_super_buf_t*, qcamera::QCamera3Stream*) */

void qcamera::QCamera3YUVChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2,void *param_3)

{
  int iVar1;
  QCamera3ProcessingChannel *this;
  int iVar2;
  mm_camera_super_buf_t *pmVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  Mutex *extraout_r1;
  Mutex *pMVar12;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  Mutex *extraout_r1_05;
  Mutex *extraout_r1_06;
  Mutex *extraout_r1_07;
  uint uVar13;
  Mutex *extraout_r1_08;
  char *extraout_r1_09;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint in_stack_ffffff74;
  native_handle **local_6c;
  _Node a_Stack96 [4];
  AbstractUnwindCursor aAStack92 [4];
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack88 [4];
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack84 [4];
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack80 [4];
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack76 [4];
  uint local_48;
  Autolock aAStack68 [4];
  AbstractUnwindCursor aAStack64 [4];
  uint local_3c;
  uint local_38;
  Autolock aAStack52 [4];
  ScopedTraceDbg aSStack48 [8];
  int local_28;
  
  piVar14 = *(int **)(DAT_0005a4dc + 0x5a1fa);
  local_28 = *piVar14;
  iVar1 = DAT_0005a4e0 + 0x5a204;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffff74,iVar1),(char *)param_2);
  android::Mutex::Autolock::Autolock(aAStack52,(Mutex *)(param_1 + 0x2f10));
  this = (QCamera3ProcessingChannel *)
         libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
  iVar2 = QCamera3ProcessingChannel::checkStreamCbErrors
                    (this,(mm_camera_super_buf_t *)param_2,(QCamera3Stream *)param_3);
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(DAT_0005a4e4 + 0x5a234) + 0x20) != 0) {
      iVar1 = DAT_0005a4e8 + 0x5a242;
      mm_camera_debug_log();
    }
    goto LAB_0005a958;
  }
  uVar15 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(uint *)(param_1 + 0x123c) <= uVar15) {
    if (*(int *)(*(int *)(DAT_0005a4f0 + 0x5a2a8) + 0x20) != 0) {
      iVar1 = DAT_0005a4f4 + 0x5a2b2;
      mm_camera_debug_log();
    }
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*param_3 + 0xc))(param_3,uVar15);
    goto LAB_0005a958;
  }
  pmVar3 = param_1 + 0x2ed5;
  if (*pmVar3 != (mm_camera_super_buf_t)0x0) {
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_3c);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
    local_6c = (native_handle **)(param_1 + 0x408);
    uVar4 = QCamera3StreamMem::getFrameNumber((QCamera3StreamMem *)local_6c,uVar15);
    bVar17 = (int)((uint)*(byte *)(*(int *)(param_2 + 0x10) + 0x214) << 0x19) < 0;
    if (bVar17) {
      (**(code **)(param_1 + 100))(param_1,uVar4,1,*(undefined4 *)(param_1 + 4));
    }
    android::Mutex::Autolock::Autolock(aAStack68,(Mutex *)(param_1 + 0x2ef8));
    iVar2 = *(int *)(DAT_0005a4fc + 0x5a2fa);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      android::List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)&local_48);
      iVar1 = DAT_0005a500 + 0x5a31e;
      in_stack_ffffff74 = uVar4;
      mm_camera_debug_log();
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
    }
    android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
    local_38 = local_48;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar5 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&local_38,(_ListIterator *)&local_48);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
    if (iVar5 != 0) {
      do {
        puVar6 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_38);
        if (*puVar6 == uVar4) break;
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::
        _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack76,(int)&local_38);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack76);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_38,(_ListIterator *)&local_48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
      } while (iVar5 != 0);
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      iVar1 = DAT_0005a508 + 0x5a3ba;
      in_stack_ffffff74 = uVar15;
      mm_camera_debug_log();
    }
    android::List<qcamera::ReprocessBuffer>::end();
    iVar5 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_38,(_ListIterator *)&local_48);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x2f04) == 0) {
        *(uint *)(param_1 + 0x2f04) = uVar4;
      }
      if ((int)((uint)*(byte *)(*(int *)(param_2 + 0x10) + 0x214) << 0x19) < 0) {
        if (*(int *)(iVar2 + 0x2c) != 0) {
          iVar1 = DAT_0005a518 + 0x5a450;
          mm_camera_debug_log();
        }
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)&local_38);
        if (*(char *)(iVar5 + 4) != '\0') {
          iVar5 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_38);
          *(undefined *)(iVar5 + 5) = 1;
          uVar16 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)local_6c,uVar4);
          if (uVar16 != 0xffffffff) {
            QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)local_6c,uVar16,0xffffffff);
            local_48 = uVar16;
            android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2f08));
            free(param_2);
            android::Mutex::Autolock::Autolock((Autolock *)&local_48,(Mutex *)(param_1 + 0x2ec0));
            iVar5 = QCamera3PostProcessor::releaseReprocMetaBuffer
                              ((QCamera3PostProcessor *)(param_1 + 0x90),uVar4);
            pMVar12 = *(Mutex **)(iVar2 + 0x2c);
            if (iVar5 == 0) {
              if (pMVar12 != (Mutex *)0x0) {
                iVar1 = DAT_0005a874 + 0x5a530;
                mm_camera_debug_log();
              }
              android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_38);
              android::List<unsigned_int>::push_back((uint *)(param_1 + 0x2ecc));
              pMVar12 = extraout_r1_01;
            }
            else if (pMVar12 != (Mutex *)0x0) {
              iVar1 = DAT_0005a520 + 0x5a4c8;
              mm_camera_debug_log();
              pMVar12 = extraout_r1_00;
            }
            android::Mutex::Autolock::_Autolock((Autolock *)&local_48,pMVar12);
          }
        }
      }
      uVar16 = *(uint *)(param_1 + 0x2f04);
      if (uVar16 + 1 < uVar4) {
        if (*(int *)(iVar2 + 0x2c) != 0) {
          iVar1 = DAT_0005a87c + 0x5a576;
          mm_camera_debug_log();
          in_stack_ffffff74 = uVar16;
        }
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
        local_3c = local_48;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_3c,(_ListIterator *)&local_48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
        if (iVar5 != 0) {
          do {
            piVar7 = (int *)android::List<qcamera::ReprocessBuffer>::
                            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                          *)&local_3c);
            if (*piVar7 == *(int *)(param_1 + 0x2f04)) break;
            android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__(a_Stack80,(int)&local_3c);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack80);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar5 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                  *)&local_3c,(_ListIterator *)&local_48);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_48);
          } while (iVar5 != 0);
        }
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::
        _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack84,(int)&local_3c);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack84);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_3c,(_ListIterator *)&local_48);
        if (iVar5 != 0) {
          iVar5 = DAT_0005a97c + 0x5a638;
          do {
            puVar6 = (uint *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_3c);
            uVar16 = *puVar6;
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)&local_48);
            if (uVar4 <= uVar16) goto LAB_0005a6b8;
            if (*(int *)(iVar2 + 0x28) != 0) {
              puVar6 = (uint *)android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                             *)&local_3c);
              in_stack_ffffff74 = *puVar6;
              iVar1 = iVar5;
              mm_camera_debug_log();
            }
            puVar6 = (uint *)android::List<qcamera::ReprocessBuffer>::
                             _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                             ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                           *)&local_3c);
            uVar8 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)local_6c,*puVar6);
            (**(code **)(**(int **)(param_1 + 0x24) + 0x10))(*(int **)(param_1 + 0x24),uVar8);
            android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__(a_Stack88,(int)&local_3c);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack88);
            android::List<qcamera::ReprocessBuffer>::end();
            iVar9 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                  *)&local_3c,(_ListIterator *)&local_48);
          } while (iVar9 != 0);
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
      }
LAB_0005a6b8:
      if (*(uint *)(param_1 + 0x2f04) < uVar4) {
        *(uint *)(param_1 + 0x2f04) = uVar4;
      }
      iVar5 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&local_38);
      uVar16 = count_leading_zeroes((uint)*(byte *)(iVar5 + 4));
      if ((uVar16 >> 5 | (uint)bVar17) == 0) {
        puVar10 = (undefined8 *)malloc(0x30);
        if (puVar10 != (undefined8 *)0x0) {
          uVar23 = *(undefined8 *)param_2;
          uVar19 = *(undefined8 *)(param_2 + 8);
          uVar20 = *(undefined8 *)(param_2 + 0x18);
          uVar21 = *(undefined8 *)(param_2 + 0x20);
          uVar22 = *(undefined8 *)(param_2 + 0x28);
          puVar10[2] = *(undefined8 *)(param_2 + 0x10);
          puVar10[3] = uVar20;
          *puVar10 = uVar23;
          puVar10[1] = uVar19;
          puVar10[4] = uVar21;
          puVar10[5] = uVar22;
          if (*(int *)(iVar2 + 0x2c) != 0) {
            iVar1 = DAT_0005a98c + 0x5a7aa;
            in_stack_ffffff74 = uVar4;
            mm_camera_debug_log();
          }
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)&local_38);
          QCamera3PostProcessor::processData
                    ((QCamera3PostProcessor *)(param_1 + 0x90),(mm_camera_super_buf_t *)puVar10);
          free(param_2);
          pMVar12 = extraout_r1_03;
          goto LAB_0005a7da;
        }
        pMVar12 = extraout_r1_02;
        if (*(int *)(iVar2 + 0x20) != 0) {
          iVar1 = DAT_0005a984 + 0x5a83c;
          mm_camera_debug_log();
          pMVar12 = extraout_r1_05;
        }
        if (param_3 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*param_3 + 0xc))(param_3,uVar15);
          pMVar12 = extraout_r1_06;
        }
        uVar16 = 1;
        bVar18 = false;
        bVar17 = false;
      }
      else {
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_38,(_ListIterator *)&local_48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
        if (iVar5 == 0) {
          android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
          iVar5 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
                  _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                                *)&local_38,(_ListIterator *)&local_48);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_48);
          if (iVar5 == 0) {
            bVar18 = false;
            uVar16 = 1;
            pMVar12 = extraout_r1_04;
          }
          else {
            iVar5 = android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&local_38);
            bVar18 = *(char *)(iVar5 + 4) != '\0';
            if (bVar18) {
              iVar5 = android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)&local_38);
              local_6c = *(native_handle ***)(iVar5 + 8);
              puVar6 = (uint *)android::List<qcamera::ReprocessBuffer>::
                               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                             *)&local_38);
              uVar4 = *puVar6;
            }
            android::List<unsigned_int>::_Node::_Node(a_Stack96,&local_38);
            android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase((_ListIterator)aAStack92);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack92);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack96);
            uVar16 = 0;
            pMVar12 = extraout_r1_07;
          }
          bVar17 = true;
        }
        else {
          iVar5 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_38);
          iVar5 = *(int *)(iVar5 + 0xc);
          bVar17 = iVar5 != 0;
          if (bVar17) {
            iVar5 = *(int *)(iVar2 + 0x20);
          }
          if (bVar17 && iVar5 != 0) {
            iVar1 = DAT_0005a994 + 0x5a71a;
            mm_camera_debug_log();
          }
          if (*(int *)(iVar2 + 0x2c) != 0) {
            iVar1 = DAT_0005a99c + 0x5a73a;
            in_stack_ffffff74 = uVar4;
            mm_camera_debug_log();
          }
          iVar5 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_38);
          *(undefined *)(iVar5 + 5) = 1;
          uVar23 = android::List<qcamera::ReprocessBuffer>::
                   _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                   ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                 *)&local_38);
          pMVar12 = (Mutex *)((ulonglong)uVar23 >> 0x20);
          *(QCamera3Stream **)((int)uVar23 + 0xc) = param_2;
LAB_0005a7da:
          uVar16 = 1;
          bVar18 = false;
          bVar17 = false;
        }
      }
    }
    else {
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar1 = DAT_0005a510 + 0x5a3f8;
        mm_camera_debug_log();
      }
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*param_3 + 0xc))(param_3,uVar15);
      uVar16 = 1;
      bVar18 = false;
      bVar17 = false;
      pMVar12 = extraout_r1;
    }
    android::Mutex::Autolock::_Autolock(aAStack68,pMVar12);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_3c);
    if (!bVar17) goto LAB_0005a958;
    uVar11 = (uint)(byte)*pmVar3;
    uVar13 = count_leading_zeroes(uVar11);
    if ((uVar13 >> 5 | uVar16) == 0) {
      if (*(int *)(iVar2 + 0x2c) != 0) {
        iVar1 = DAT_0005a9a4 + 0x5a8e8;
        mm_camera_debug_log();
      }
      if (bVar18) {
        QCamera3ProcessingChannel::issueChannelCb
                  ((QCamera3ProcessingChannel *)param_1,local_6c,uVar4);
      }
      else {
        QCamera3ProcessingChannel::streamCbRoutine(param_1,param_2,param_3);
      }
      do {
        iVar2 = getNextPendingCbBuffer((QCamera3YUVChannel *)param_1);
      } while (iVar2 != 0);
      uVar11 = (uint)(byte)*pmVar3;
    }
    if (uVar11 != 0) goto LAB_0005a958;
  }
  uVar15 = QCamera3StreamMem::getFrameNumber((QCamera3StreamMem *)(param_1 + 0x408),uVar15);
  if (*(int *)(*(int *)(DAT_0005a9ac + 0x5a932) + 0x2c) != 0) {
    iVar1 = DAT_0005a9b0 + 0x5a93c;
    mm_camera_debug_log();
    in_stack_ffffff74 = uVar15;
  }
  QCamera3ProcessingChannel::streamCbRoutine(param_1,param_2,param_3);
LAB_0005a958:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
  android::Mutex::Autolock::_Autolock(aAStack52,extraout_r1_08);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffff74,iVar1),extraout_r1_09);
  if (*piVar14 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

