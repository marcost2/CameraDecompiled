
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3YUVChannel::request(native_handle const**, unsigned int, camera3_stream_buffer*,
   metadata_buffer_t*, bool&, int&, bool, bool) */

undefined4
qcamera::QCamera3YUVChannel::request
          (native_handle **param_1,uint param_2,camera3_stream_buffer *param_3,
          metadata_buffer_t *param_4,int *param_5,bool param_6,bool param_7)

{
  undefined uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  undefined4 extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined3 in_stack_00000005;
  undefined3 in_stack_00000009;
  undefined4 local_208;
  undefined4 uStack516;
  AbstractUnwindCursor aAStack512 [4];
  AbstractUnwindCursor aAStack508 [4];
  undefined8 local_1f8;
  ulonglong local_1f0;
  Autolock aAStack484 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack480 [440];
  int local_28;
  
  piVar8 = *(int **)(DAT_0005a0b8 + 0x59e88);
  local_28 = *piVar8;
  android::Mutex::Autolock::Autolock(aAStack484,(Mutex *)(param_1 + 0xbbe));
  iVar7 = *(int *)(DAT_0005a0bc + 0x59ea2);
  uVar4 = extraout_r1;
  if (*(int *)(iVar7 + 0x2c) != 0) {
    mm_camera_debug_log();
    uVar4 = extraout_r1_00;
  }
  if ((param_2 == 0) || (param_5 == (int *)0x0)) {
    iVar7 = *(int *)(iVar7 + 0x20);
joined_r0x00059f5e:
    if (iVar7 != 0) {
      mm_camera_debug_log();
      uVar4 = extraout_r1_01;
    }
    uVar9 = CONCAT44(uVar4,0xffffffea);
  }
  else {
    local_1f0 = 0;
    local_1f8 = ZEXT48(param_3);
    if ((param_4 == (metadata_buffer_t *)0x0) && (*(char *)((int)param_1 + 0x2ed5) != '\0')) {
      uVar1 = needsFramePostprocessing((QCamera3YUVChannel *)param_1,(metadata_buffer_t *)param_5);
      local_1f0 = local_1f0 & 0xffffffff00000000 | (ulonglong)param_2;
      local_1f8._0_5_ = CONCAT14(uVar1,(undefined4)local_1f8);
      local_1f8 = local_1f8 & 0xffffff0000000000 | (ulonglong)(uint5)local_1f8;
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::push_back((uint *)(param_1 + 0xbbf));
    }
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    *_param_6 = local_1f8._4_1_;
    if (local_1f8._4_1_ == '\0') {
      uVar9 = QCamera3ProcessingChannel::request
                        (param_1,param_2,param_3,param_4,param_5,param_7,false);
      goto LAB_0005a09c;
    }
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar9 = (**(code **)(*param_1 + 8))(param_1);
      if ((int)uVar9 != 0) goto LAB_0005a09c;
    }
    else if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    iVar2 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(param_1 + 0xbc2));
    if (iVar2 == 0) {
      android::List<unsigned_int>::begin();
      puVar3 = (uint *)android::List<unsigned_int>::
                       _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                       operator_(a_Stack480);
      uVar5 = *puVar3;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack480);
      android::List<unsigned_int>::begin();
      android::List<unsigned_int>::erase((_ListIterator)aAStack508);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack508);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack512);
      uVar6 = 0;
    }
    else {
      uVar9 = QCamera3StreamMem::allocateOne
                        ((QCamera3StreamMem *)(param_1 + 0x102),(uint)param_1[0xbb6]);
      uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar5 = (uint)uVar9;
      uVar6 = uVar5;
      if (0x7fffffff < uVar5) {
        iVar7 = *(int *)(iVar7 + 0x20);
        goto joined_r0x00059f5e;
      }
    }
    __aeabi_memclr4((camera3_stream_buffer *)a_Stack480,0x1b8);
    local_208 = 0;
    uStack516 = 0;
    QCamera3Stream::getFrameDimension((QCamera3Stream *)param_1[9],(cam_dimension_t *)&local_208);
    QCamera3ProcessingChannel::setReprocConfig
              ((reprocess_config_t *)param_1,(camera3_stream_buffer *)a_Stack480,
               (metadata_buffer_t *)0x0,(cam_format_t)param_5,SUB41(param_1[0x491],0));
    QCamera3ProcessingChannel::startPostProc
              ((QCamera3ProcessingChannel *)param_1,
               (reprocess_config_t *)(camera3_stream_buffer *)a_Stack480);
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(param_1 + 0x102),uVar5,(uint)param_3);
    *_param_7 = uVar5;
    (**(code **)(*(int *)param_1[9] + 0xc))(param_1[9],uVar5);
    uVar9 = CONCAT44(extraout_r1_02,uVar6);
  }
LAB_0005a09c:
  android::Mutex::Autolock::_Autolock(aAStack484,(Mutex *)((ulonglong)uVar9 >> 0x20));
  if (*piVar8 == local_28) {
    return (int)uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

