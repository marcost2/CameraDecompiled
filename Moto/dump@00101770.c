
/* qcamera::BSTLiveBokeh::dump(qcamera::camera_stereo_buf_info*, qcamera::camera_stereo_buf_info*)
    */

void __thiscall
qcamera::BSTLiveBokeh::dump
          (BSTLiveBokeh *this,camera_stereo_buf_info *param_1,camera_stereo_buf_info *param_2)

{
  longlong lVar1;
  uint uVar2;
  key_value_pair_t_unsigned_int_unsigned_int_ *this_00;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_r1;
  int iVar5;
  timespec local_c0;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  char acStack168 [128];
  int local_28;
  
  piVar4 = *(int **)(DAT_001018fc + 0x101780);
  local_28 = *piVar4;
  if ((this[9] != (BSTLiveBokeh)0x0) && (*(int *)(this + 0xc) != 0)) {
    QCamera3Stream::getFrameDimension
              (*(QCamera3Stream **)(param_1 + 0xc),(cam_dimension_t *)&local_b0);
    this_00 = (key_value_pair_t_unsigned_int_unsigned_int_ *)BSTBokehParam::createInstance();
    android::key_value_pair_t<unsigned_int,unsigned_int>::key_value_pair_t
              (this_00,&local_b4,&local_b8);
    if ((local_b4 | local_b8) == 0) {
      local_b4 = local_b0 / 2;
      local_b8 = local_ac / 2;
    }
    clock_gettime(1,&local_c0);
    uVar2 = local_b8;
    lVar1 = (longlong)local_c0.tv_sec * 1000000000 + (longlong)local_c0.tv_nsec;
    BSTBokehParam::getDacVal((BSTBokehParam *)this_00);
    BSTBokehParam::getFNumber((BSTBokehParam *)this_00);
    uVar3 = __aeabi_ldivmod((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),(uint)&DAT_000f4240,0);
    iVar5 = DAT_00101900 + 0x10185e;
    FUN_00101a74(acStack168,uVar2,iVar5,uVar3);
    BaseBSTBokeh::dumpYUV
              ((BaseBSTBokeh *)this,acStack168,*(mm_camera_buf_def **)(*(int *)(param_1 + 8) + 0x10)
               ,*(QCamera3Stream **)(param_1 + 0xc));
    QCamera3Stream::getFrameDimension
              (*(QCamera3Stream **)(param_2 + 0xc),(cam_dimension_t *)&local_b0);
    BSTBokehParam::getDacVal((BSTBokehParam *)this_00);
    BSTBokehParam::getFNumber((BSTBokehParam *)this_00);
    FUN_00101a74(acStack168,extraout_r1,iVar5,uVar3);
    BaseBSTBokeh::dumpYUV
              ((BaseBSTBokeh *)this,acStack168,*(mm_camera_buf_def **)(*(int *)(param_2 + 8) + 0x10)
               ,*(QCamera3Stream **)(param_2 + 0xc));
    (**(code **)(*(int *)this + 0x18))(this,0);
  }
  if (*piVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

