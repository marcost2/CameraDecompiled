
/* qcamera::QCamera3Stream::bufDone(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Stream::bufDone(QCamera3Stream *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint extraout_r1_03;
  int *piVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  Autolock aAStack40 [4];
  int local_24;
  
  piVar5 = *(int **)(DAT_00055f74 + 0x55d60);
  local_24 = *piVar5;
  android::Mutex::Autolock::Autolock(aAStack40,(Mutex *)(this + 0x27c));
  if (((byte)this[0x34] <= param_1) || (iVar4 = *(int *)(this + 0xd0), iVar4 == 0)) {
    iVar4 = *(int *)(*(int *)(DAT_00055f78 + 0x55dc6) + 0x3c);
    if (iVar4 != 0) {
      mm_camera_debug_log();
      iVar4 = extraout_r1;
    }
    uVar7 = CONCAT44(iVar4,0xffffffb5);
    goto LAB_00055de8;
  }
  if (*(QCamera3StreamMem **)(this + 0xcc) == (QCamera3StreamMem *)0x0) {
    iVar1 = *(int *)(*(int *)(DAT_00055f84 + 0x55e06) + 0x3c);
joined_r0x00055e08:
    if (iVar1 == 0) {
      uVar7 = CONCAT44(iVar4,0xffffffda);
    }
    else {
      mm_camera_debug_log();
      uVar7 = CONCAT44(extraout_r1_00,0xffffffda);
    }
  }
  else {
    if (*(int *)(iVar4 + param_1 * 0x218 + 0x210) == 0) {
      if (*(int *)(this + 0x30) == 0) {
        if (*(int *)(*(int *)(DAT_00055f90 + 0x55e60) + 0x3c) == 0) {
          uVar7 = 0xffffffed;
        }
        else {
          mm_camera_debug_log();
          uVar7 = CONCAT44(extraout_r1_01,0xffffffed);
        }
        goto LAB_00055de8;
      }
      uVar8 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0xcc),param_1);
      iVar4 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == -0x4b) {
        iVar1 = *(int *)(*(int *)(DAT_00055fb8 + 0x55e3c) + 0x3c);
        goto joined_r0x00055e08;
      }
      iVar4 = *(int *)(DAT_00055f9c + 0x55e88);
      if (*(int *)(iVar4 + 0x48) != 0) {
        mm_camera_debug_log();
      }
      pcVar6 = **(code ***)(this + 0x30);
      uVar2 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0xcc),param_1);
      iVar1 = QCamera3StreamMem::getPtr(*(uint *)(this + 0xcc));
      uVar7 = (*pcVar6)(param_1,0xffffffff,uVar2,(int)uVar8,iVar1,3,
                        *(undefined4 *)(*(int *)(this + 0x30) + 0xc));
      if ((int)uVar7 < 0) {
        if (*(int *)(iVar4 + 0x3c) != 0) {
          mm_camera_debug_log();
          uVar7 = uVar7 & 0xffffffff | (ulonglong)extraout_r1_03 << 0x20;
        }
        goto LAB_00055de8;
      }
      iVar3 = QCamera3StreamMem::getBufDef
                        (*(QCamera3StreamMem **)(this + 0xcc),
                         (cam_frame_len_offset_t *)(this + 0xd4),
                         (mm_camera_buf_def *)(param_1 * 0x218 + *(int *)(this + 0xd0)),param_1);
      if (iVar3 != 0) {
        if (*(int *)(iVar4 + 0x3c) != 0) {
          iVar1 = DAT_00055fb0 + 0x55f0c;
          mm_camera_debug_log();
        }
        (**(code **)(*(int *)(this + 0x30) + 8))
                  (param_1,0xffffffff,3,*(undefined4 *)(*(int *)(this + 0x30) + 0xc),iVar1);
        uVar7 = CONCAT44(extraout_r1_02,iVar3);
        goto LAB_00055de8;
      }
    }
    if (*(int *)(this + 0x284) == 0) {
      uVar7 = (**(code **)(*(int *)(this + 0x10) + 0x6c))
                        (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                         param_1 * 0x218 + *(int *)(this + 0xd0));
      if ((int)uVar7 < 0) {
        uVar7 = CONCAT44((int)(uVar7 >> 0x20),0x80000002);
      }
    }
    else {
      uVar7 = aggregateBufToBatch(this,(mm_camera_buf_def *)
                                       (param_1 * 0x218 + *(int *)(this + 0xd0)));
    }
  }
LAB_00055de8:
  android::Mutex::Autolock::_Autolock(aAStack40,(Mutex *)(uVar7 >> 0x20));
  if (*piVar5 == local_24) {
    return (int)uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

