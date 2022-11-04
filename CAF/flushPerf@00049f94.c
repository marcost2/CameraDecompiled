
/* qcamera::QCamera3HardwareInterface::flushPerf() */

char * qcamera::QCamera3HardwareInterface::flushPerf(void)

{
  bool bVar1;
  QCamera3HardwareInterface *in_r0;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *in_r1;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *extraout_r1_02;
  char *extraout_r1_03;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  pthread_mutex_t *__mutex;
  int iVar9;
  char *in_stack_ffffffac;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack68 [4];
  AbstractUnwindCursor aAStack64 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack60 [4];
  timespec local_38;
  ScopedTraceDbg aSStack48 [8];
  int local_28;
  
  piVar7 = *(int **)(DAT_0004a288 + 0x49fa2);
  local_28 = *piVar7;
  iVar2 = DAT_0004a28c + 0x49fac;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffac,iVar2),in_r1);
  __mutex = (pthread_mutex_t *)(in_r0 + 0x388);
  pthread_mutex_lock(__mutex);
  in_r0[0x142] = (QCamera3HardwareInterface)0x1;
  piVar8 = (int *)(in_r0 + 0x200);
  pcVar3 = (char *)PendingBuffersMap::get_num_overall_buffers();
  *(char **)(in_r0 + 0x200) = pcVar3;
  iVar9 = *(int *)(DAT_0004a290 + 0x49fdc);
  if (*(int *)(iVar9 + 0x2c) != 0) {
    iVar2 = DAT_0004a294 + 0x49fea;
    mm_camera_debug_log();
    in_stack_ffffffac = pcVar3;
  }
  pcVar3 = (char *)(**(code **)((*(undefined4 **)(in_r0 + 0x50))[1] + 0x94))
                             (**(undefined4 **)(in_r0 + 0x50));
  if ((int)pcVar3 < 0) {
    if (*(int *)(iVar9 + 0x20) != 0) {
      iVar2 = DAT_0004a29c + 0x4a03e;
      mm_camera_debug_log();
    }
    in_r0[0x142] = (QCamera3HardwareInterface)0x0;
    pthread_mutex_unlock(__mutex);
    pcVar3 = (char *)0xffffffed;
    pcVar6 = extraout_r1;
  }
  else {
    if (*piVar8 == 0) {
      if (*(int *)(iVar9 + 0x2c) != 0) {
        iVar2 = DAT_0004a2a4 + 0x4a06c;
        mm_camera_debug_log();
      }
      in_r0[0x142] = (QCamera3HardwareInterface)0x0;
    }
    else {
      iVar4 = clock_gettime(1,&local_38);
      if (iVar4 < 0) {
        if (*(int *)(iVar9 + 0x20) != 0) {
          iVar2 = DAT_0004a2ac + 0x4a096;
          mm_camera_debug_log();
        }
        bVar1 = false;
      }
      else {
        local_38.tv_sec = local_38.tv_sec + 3;
        bVar1 = true;
      }
      if (*piVar8 == 0) {
        if (iVar4 != 0) {
LAB_0004a25c:
          in_r0[0x142] = (QCamera3HardwareInterface)0x0;
          pthread_mutex_unlock(__mutex);
          pcVar3 = (char *)0xffffffed;
          pcVar6 = extraout_r1_03;
          goto LAB_0004a26e;
        }
      }
      else {
        iVar4 = DAT_0004a2b4 + 0x4a0b6;
        do {
          if (*(int *)(iVar9 + 0x2c) != 0) {
            iVar2 = iVar4;
            mm_camera_debug_log();
          }
          if (bVar1) {
            iVar5 = pthread_cond_timedwait((pthread_cond_t *)(in_r0 + 0x38c),__mutex,&local_38);
            if (iVar5 != 0) {
              if (*(int *)(iVar9 + 0x20) != 0) {
                in_stack_ffffffac = strerror(iVar5);
                iVar2 = DAT_0004a2c4 + 0x4a22a;
LAB_0004a258:
                mm_camera_debug_log();
              }
              goto LAB_0004a25c;
            }
          }
          else {
            iVar5 = pthread_cond_wait((pthread_cond_t *)(in_r0 + 0x38c),__mutex);
            if (iVar5 != 0) {
              if (*(int *)(iVar9 + 0x20) != 0) {
                in_stack_ffffffac = strerror(iVar5);
                iVar2 = DAT_0004a2bc + 0x4a24a;
                goto LAB_0004a258;
              }
              goto LAB_0004a25c;
            }
          }
        } while (*piVar8 != 0);
      }
      if (*(int *)(iVar9 + 0x2c) != 0) {
        iVar2 = DAT_0004a2cc + 0x4a106;
        mm_camera_debug_log();
      }
      android::List<unsigned_int>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar4 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__(a_Stack60,(_ListIterator *)aAStack64);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
      if (iVar4 != 0) {
        iVar4 = DAT_0004a2d4 + 0x4a14c;
        do {
          piVar8 = (int *)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack60);
          if (((*(int **)(*piVar8 + 0x18) != (int *)0x0) &&
              (pcVar3 = (char *)(**(code **)(**(int **)(*piVar8 + 0x18) + 0x3c))(),
              pcVar3 != (char *)0x0)) && (*(int *)(iVar9 + 0x20) != 0)) {
            iVar2 = iVar4;
            mm_camera_debug_log();
            in_stack_ffffffac = pcVar3;
          }
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                    (a_Stack68,
                     (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)a_Stack60);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack68);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar5 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                   *)a_Stack60,(_ListIterator *)aAStack64);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
        } while (iVar5 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
      pcVar3 = (char *)notifyErrorForPendingRequests(in_r0);
      if (-1 < (int)pcVar3) {
        *(undefined4 *)(in_r0 + 0x210) = 0;
        unblockRequestIfNecessary(in_r0);
        in_r0[0x142] = (QCamera3HardwareInterface)0x0;
        pthread_mutex_unlock(__mutex);
        pcVar6 = extraout_r1_01;
        if (*(int *)(iVar9 + 0x2c) != 0) {
          iVar2 = DAT_0004a2e4 + 0x4a1e2;
          in_stack_ffffffac = pcVar3;
          mm_camera_debug_log();
          pcVar6 = extraout_r1_02;
        }
        goto LAB_0004a26e;
      }
      if (*(int *)(iVar9 + 0x20) != 0) {
        iVar2 = DAT_0004a2dc + 0x4a208;
        mm_camera_debug_log();
      }
    }
    pthread_mutex_unlock(__mutex);
    pcVar6 = extraout_r1_00;
  }
LAB_0004a26e:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffac,iVar2),pcVar6);
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}

