
/* WARNING: Removing unreachable block (ram,0x0005db02) */
/* qcamera::QCamera3ReprocessChannel::doReprocessOffline(qcamera::qcamera_fwk_input_pp_data_t*,
   bool) */

uint __thiscall
qcamera::QCamera3ReprocessChannel::doReprocessOffline
          (QCamera3ReprocessChannel *this,qcamera_fwk_input_pp_data_t *param_1,bool param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Autolock *this_00;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  Mutex *extraout_r1_03;
  Mutex *extraout_r1_04;
  Mutex *pMVar6;
  Mutex *extraout_r1_05;
  uint uVar7;
  int *piVar8;
  QCamera3StreamMem *this_01;
  uint uVar9;
  int *this_02;
  undefined8 uVar10;
  ulonglong uVar11;
  Autolock aAStack32504 [4];
  AbstractUnwindCursor aAStack32500 [4];
  AbstractUnwindCursor aAStack32496 [4];
  int *local_7eec;
  undefined4 local_7ee8;
  uint local_7ee4;
  undefined4 local_7ee0;
  uint local_7edc;
  undefined4 local_7ed8;
  undefined auStack32468 [4];
  undefined local_7ed0;
  uint local_7ec8;
  int local_28;
  
  piVar8 = *(int **)(DAT_0005da38 + 0x5d6da);
  local_28 = *piVar8;
  if (*(int *)(this + 0x44) == 0) {
    if (*(int *)(*(int *)(DAT_0005da48 + 0x5d77c) + 0x20) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      mm_camera_debug_log();
      uVar3 = 0xffffffff;
    }
    goto LAB_0005d802;
  }
  if (param_1 == (qcamera_fwk_input_pp_data_t *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_0005da54 + 0x5d7a2) + 0x20);
  }
  else if (*(int *)(param_1 + 0x21c) == 0) {
    iVar1 = *(int *)(*(int *)(DAT_0005da60 + 0x5d7c0) + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x434) != 0) {
      this_02 = *(int **)(this + 0x24);
      if (this_02 == (int *)0x0) {
        if (*(int *)(*(int *)(DAT_0005da78 + 0x5d826) + 0x20) == 0) {
          uVar3 = 0xffffffed;
        }
        else {
          mm_camera_debug_log();
          uVar3 = 0xffffffed;
        }
        goto LAB_0005d802;
      }
      if (*(int *)(this + 0xc4) == 1) {
        android::Mutex::Autolock::Autolock((Autolock *)&local_7ee0,(Mutex *)(this + 0xb8));
        iVar1 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(this + 0xbc));
        if (iVar1 == 0) {
          android::List<unsigned_int>::begin();
          puVar2 = (uint *)android::List<unsigned_int>::
                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                           ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                        *)&local_7eec);
          uVar3 = *puVar2;
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                    ((AbstractUnwindCursor *)&local_7eec);
          android::List<unsigned_int>::begin();
          android::List<unsigned_int>::erase((_ListIterator)aAStack32496);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32496);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack32500);
LAB_0005d8f0:
          QCamera3StreamMem::markFrameNumber
                    (*(QCamera3StreamMem **)(this + 0xf0),uVar3,*(uint *)(param_1 + 0x600));
          uVar11 = (**(code **)(*this_02 + 0xc))(this_02,uVar3);
          if ((int)uVar11 == 0) {
            android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,(Mutex *)(uVar11 >> 0x20));
            goto LAB_0005d942;
          }
          if (*(int *)(*(int *)(DAT_0005da90 + 0x5d914) + 0x20) != 0) {
            mm_camera_debug_log();
            uVar11 = uVar11 & 0xffffffff | (ulonglong)extraout_r1_00 << 0x20;
          }
        }
        else {
          uVar10 = QCamera3StreamMem::allocateOne
                             (*(QCamera3StreamMem **)(this + 0xf0),*(uint *)(this + 0xb4));
          uVar3 = (uint)uVar10;
          if (uVar3 < 0x80000000) goto LAB_0005d8f0;
          if (*(int *)(*(int *)(DAT_0005da3c + 0x5d752) + 0x20) == 0) {
            uVar11 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xffffffea);
          }
          else {
            mm_camera_debug_log();
            uVar11 = CONCAT44(extraout_r1,0xffffffea);
          }
        }
        uVar3 = (uint)uVar11;
        android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,(Mutex *)(uVar11 >> 0x20));
        goto LAB_0005d802;
      }
      if (*(int *)(param_1 + 0x5fc) == 0) {
LAB_0005d942:
        if (*(int *)(this + 0xac) == *(int *)(this + 0x78) + -1) {
          *(undefined4 *)(this + 0xac) = 0xffffffff;
        }
        uVar7 = *(int *)(this + 0xac) + 1;
        uVar3 = QCamera3Stream::mapBuf
                          ((QCamera3Stream *)this_02,'\x05',uVar7,-1,*(int *)(param_1 + 0x430),
                           *(void **)(param_1 + 0x434),*(uint *)(param_1 + 0x438));
        if (uVar3 == 0) {
          local_7ee8 = 5;
          local_7eec = this_02;
          local_7ee4 = uVar7;
          android::Mutex::Autolock::Autolock((Autolock *)&local_7ee0,(Mutex *)(this + 0xa4));
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::push_back
                    ((uint *)(this + 0x94));
          *(uint *)(this + 0xac) = uVar7;
          pMVar6 = extraout_r1_01;
          if (*(int *)(*(int *)(DAT_0005dd4c + 0x5d9b2) + 0x2c) != 0) {
            mm_camera_debug_log();
            pMVar6 = extraout_r1_02;
          }
          android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,pMVar6);
        }
        if (*(int *)(this + 0xb0) == *(int *)(this + 0x78) * 2 + -1) {
          *(int *)(this + 0xb0) = *(int *)(this + 0x78) + -1;
        }
        uVar9 = *(int *)(this + 0xb0) + 1;
        uVar4 = QCamera3Stream::mapBuf
                          ((QCamera3Stream *)this_02,'\x06',uVar9,-1,*(int *)(param_1 + 0x218),
                           *(void **)(param_1 + 0x21c),*(uint *)(param_1 + 0x220));
        uVar3 = uVar3 | uVar4;
        if (uVar3 == 0) {
          local_7ee8 = 6;
          local_7eec = this_02;
          local_7ee4 = uVar9;
          android::Mutex::Autolock::Autolock((Autolock *)&local_7ee0,(Mutex *)(this + 0xa8));
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::push_back
                    ((uint *)(this + 0x9c));
          *(uint *)(this + 0xb0) = uVar9;
          iVar1 = *(int *)(DAT_0005dd58 + 0x5dac2);
          pMVar6 = extraout_r1_03;
          if (*(int *)(iVar1 + 0x2c) != 0) {
            mm_camera_debug_log();
            pMVar6 = extraout_r1_04;
          }
          android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,pMVar6);
          if (param_2 != false) {
            if (*(int *)(this + 0xc4) != 1) {
              android::Mutex::Autolock::Autolock((Autolock *)&local_7ee0,(Mutex *)(this + 0xf38));
              iVar5 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)(this + 0xf24));
              android::Vector<unsigned_int>::push((uint *)(this + 0xf24));
              android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,extraout_r1_05);
              if (iVar5 != 0) {
                iVar5 = 1;
              }
              if (iVar5 != 0) goto LAB_0005dc5e;
            }
            if ((param_2 != false) && (*(int *)(this + 0xc4) != 1)) {
              __aeabi_memclr4(&local_7ed8,0x7eac);
              local_7edc = 2;
              local_7ee0 = 0xca;
              iVar5 = QCamera3Stream::setParameter
                                ((QCamera3Stream *)this_02,(cam_stream_parm_buffer_t *)&local_7ee0);
              if ((iVar5 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
                mm_camera_debug_log();
              }
              this_00 = (Autolock *)
                        android::Mutex::Autolock::Autolock(aAStack32504,(Mutex *)(this + 0xf38));
              this[0xf3c] = (QCamera3ReprocessChannel)0x1;
              android::Mutex::Autolock::_Autolock(this_00,(Mutex *)0x1);
            }
          }
LAB_0005dc5e:
          __aeabi_memclr4(auStack32468,0x7ea8);
          local_7ee0 = 0x60;
          local_7ed8 = *(undefined4 *)(param_1 + 0x248);
          local_7ed0 = 1;
          local_7edc = uVar7;
          local_7ec8 = uVar9;
          if (*(int *)(iVar1 + 0x34) != 0) {
            mm_camera_debug_log();
          }
          uVar3 = QCamera3Stream::setParameter
                            ((QCamera3Stream *)this_02,(cam_stream_parm_buffer_t *)&local_7ee0);
          if (uVar3 != 0) {
            if (*(int *)(iVar1 + 0x20) != 0) {
              mm_camera_debug_log();
            }
            resetToCamPerfNormal(this,*(uint *)(param_1 + 0x600));
          }
          goto LAB_0005d802;
        }
        iVar1 = *(int *)(*(int *)(DAT_0005dd7c + 0x5da1a) + 0x20);
      }
      else if (this[0x50] == (QCamera3ReprocessChannel)0x0) {
        uVar3 = (**(code **)(*(int *)this + 0x30))
                          (this,*(int *)(param_1 + 0x5fc),*(undefined4 *)(this + 0x74));
        if (uVar3 == 0) {
          uVar3 = (**(code **)(*(int *)this + 8))(this);
          if (uVar3 != 0) goto LAB_0005d802;
          goto LAB_0005d85c;
        }
        iVar1 = *(int *)(*(int *)(DAT_0005dd1c + 0x5db1a) + 0x20);
      }
      else {
LAB_0005d85c:
        this_01 = (QCamera3StreamMem *)(this + 0xf4);
        uVar7 = QCamera3StreamMem::getMatchBufIndex(this_01);
        if ((int)uVar7 < 0) {
          uVar3 = (**(code **)(*(int *)this + 0x30))
                            (this,*(undefined4 *)(param_1 + 0x5fc),*(undefined4 *)(this + 0x74));
          if (uVar3 != 0) {
            iVar1 = *(int *)(*(int *)(DAT_0005dd28 + 0x5db54) + 0x20);
            goto joined_r0x0005da1e;
          }
          uVar7 = QCamera3StreamMem::getMatchBufIndex(this_01);
          if (0x7fffffff < uVar7) {
            if (*(int *)(*(int *)(DAT_0005dd34 + 0x5dcf6) + 0x20) != 0) {
              mm_camera_debug_log();
            }
            uVar3 = 0xffffffe0;
            goto LAB_0005d802;
          }
        }
        uVar3 = QCamera3StreamMem::markFrameNumber(this_01,uVar7,*(uint *)(param_1 + 0x600));
        if (uVar3 == 0) {
          uVar3 = (**(code **)(*this_02 + 0xc))(this_02,uVar7);
          if (uVar3 != 0) {
            if (*(int *)(*(int *)(DAT_0005dd40 + 0x5db90) + 0x20) != 0) {
              mm_camera_debug_log();
            }
            QCamera3StreamMem::markFrameNumber(this_01,uVar7,0xffffffff);
            goto LAB_0005d802;
          }
          goto LAB_0005d942;
        }
        iVar1 = *(int *)(*(int *)(DAT_0005da84 + 0x5d88e) + 0x20);
      }
joined_r0x0005da1e:
      if (iVar1 != 0) {
        mm_camera_debug_log();
      }
      goto LAB_0005d802;
    }
    iVar1 = *(int *)(*(int *)(DAT_0005da6c + 0x5d7e4) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  uVar3 = 0xffffffea;
LAB_0005d802:
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

