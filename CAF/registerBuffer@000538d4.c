
/* qcamera::QCamera3GrallocMemory::registerBuffer(native_handle const**, cam_stream_type_t) */

undefined4
qcamera::QCamera3GrallocMemory::registerBuffer(native_handle **param_1,cam_stream_type_t param_2)

{
  int iVar1;
  int iVar2;
  native_handle *pnVar3;
  native_handle *pnVar4;
  native_handle *extraout_r1;
  native_handle *extraout_r1_00;
  native_handle *extraout_r1_01;
  Mutex *extraout_r1_02;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  native_handle **ppnVar8;
  undefined8 uVar9;
  Autolock aAStack56 [4];
  undefined4 local_34;
  native_handle *local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar7 = *(int **)(DAT_00053ae4 + 0x538e4);
  local_28 = *piVar7;
  local_34 = 1;
  iVar6 = *(int *)(DAT_00053ae8 + 0x538f2);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  local_30 = (native_handle *)0x0;
  local_2c = 0;
  iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2);
  if (-1 < iVar1) {
    if (*(int *)(iVar6 + 0x30) == 0) {
      uVar5 = 0xffffffef;
    }
    else {
      mm_camera_debug_log();
      uVar5 = 0xffffffef;
    }
    goto LAB_00053ace;
  }
  android::Mutex::Autolock::Autolock(aAStack56,(Mutex *)(param_1 + 0x182));
  pnVar3 = param_1[0x203];
  if (param_1[1] < (native_handle *)(0x3f - (int)pnVar3)) {
    uVar9 = getFreeIndexLocked((QCamera3GrallocMemory *)param_1);
    pnVar3 = (native_handle *)((ulonglong)uVar9 >> 0x20);
    iVar1 = (int)uVar9;
    if (iVar1 < 0) {
      iVar6 = *(int *)(iVar6 + 0x20);
      goto joined_r0x00053a2a;
    }
    param_1[iVar1 + 0x183] = (native_handle *)param_2;
    param_1[iVar1 + 0x1c3] = *(native_handle **)param_2;
    setMetaData();
    uVar9 = __open_2();
    pnVar3 = (native_handle *)((ulonglong)uVar9 >> 0x20);
    pnVar4 = (native_handle *)uVar9;
    param_1[iVar1 * 4 + 3] = pnVar4;
    if ((int)pnVar4 < 0) {
      if (*(int *)(iVar6 + 0x20) != 0) {
        mm_camera_debug_log();
        pnVar3 = extraout_r1_00;
      }
LAB_00053aaa:
      uVar5 = 0xfffffff4;
    }
    else {
      ppnVar8 = param_1 + iVar1 + 0x1c3;
      local_2c = *(undefined4 *)(*ppnVar8 + 0xc);
      iVar2 = ioctl((int)pnVar4,0xc0084905,&local_30);
      if (iVar2 < 0) {
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        close((int)param_1[iVar1 * 4 + 3]);
        pnVar3 = extraout_r1_01;
        goto LAB_00053aaa;
      }
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      pnVar3 = *(native_handle **)(*ppnVar8 + 0xc);
      param_1[iVar1 * 4 + 2] = pnVar3;
      pnVar4 = *(native_handle **)(*ppnVar8 + 0x34);
      param_1[iVar1 * 4 + 5] = pnVar4;
      param_1[iVar1 * 4 + 4] = local_30;
      pnVar4 = (native_handle *)mmap((void *)0x0,(size_t)pnVar4,3,1,(int)pnVar3,0);
      pnVar3 = pnVar4 + 1;
      if (pnVar3 == (native_handle *)0x0) {
        param_1[iVar1 * 4 + 4] = (native_handle *)0x0;
        goto LAB_00053aaa;
      }
      param_1[iVar1 + 0x102] = pnVar4;
      param_1[1] = param_1[1] + 1;
      uVar5 = 0;
    }
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log();
      pnVar3 = (native_handle *)extraout_r1_02;
    }
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x20);
joined_r0x00053a2a:
    if (iVar6 != 0) {
      mm_camera_debug_log();
      pnVar3 = extraout_r1;
    }
    uVar5 = 0xffffffb5;
  }
  android::Mutex::Autolock::_Autolock(aAStack56,(Mutex *)pnVar3);
LAB_00053ace:
  if (*piVar7 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

