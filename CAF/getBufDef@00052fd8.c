
/* qcamera::QCamera3Memory::getBufDef(cam_frame_len_offset_t const&, mm_camera_buf_def&, unsigned
   int) */

undefined4 __thiscall
qcamera::QCamera3Memory::getBufDef
          (QCamera3Memory *this,cam_frame_len_offset_t *param_1,mm_camera_buf_def *param_2,
          uint param_3)

{
  mm_camera_buf_def mVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *extraout_r1_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  Autolock aAStack36 [4];
  int local_20;
  
  piVar7 = *(int **)(DAT_000530c4 + 0x52fec);
  local_20 = *piVar7;
  android::Mutex::Autolock::Autolock(aAStack36,(Mutex *)(this + 0x608));
  if (*(int *)(this + 4) == 0) {
    puVar4 = extraout_r1;
    if (*(int *)(*(int *)(DAT_000530c8 + 0x5308a) + 0x20) != 0) {
      mm_camera_debug_log();
      puVar4 = extraout_r1_00;
    }
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(this + param_3 * 0x10 + 8);
    *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(this + param_3 * 0x10 + 0x14);
    *(QCamera3Memory **)(param_2 + 0x210) = this;
    uVar2 = (**(code **)(*(int *)this + 0x24))(this,param_3);
    *(undefined4 *)(param_2 + 0x208) = uVar2;
    iVar3 = *(int *)param_1;
    *(uint *)(param_2 + 0xc) = param_3 & 0xff;
    mVar1 = SUB41(iVar3,0);
    param_2[0x20] = mVar1;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + param_3 * 0x10 + 8);
    uVar2 = 0;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0x34) = 0;
    puVar4 = (undefined4 *)(iVar3 * 0x1000000);
    if (0x1000000 < (int)puVar4) {
      puVar4 = (undefined4 *)(param_1 + 0x38);
      puVar6 = (undefined4 *)(param_2 + 100);
      iVar3 = 1;
      puVar5 = (undefined4 *)(this + 0x18);
      do {
        *puVar6 = puVar4[-1];
        puVar6[1] = *puVar5;
        puVar6[2] = *puVar4;
        puVar6[3] = puVar6[-0xf] + puVar6[-0xc];
        puVar4 = puVar4 + 0xc;
        puVar6 = puVar6 + 0xf;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar3 < (char)mVar1);
      uVar2 = 0;
    }
  }
  android::Mutex::Autolock::_Autolock(aAStack36,(Mutex *)puVar4);
  if (*piVar7 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

