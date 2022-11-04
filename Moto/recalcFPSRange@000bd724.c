
/* non-virtual thunk to qcamera::QCamera2HardwareInterface::recalcFPSRange(int&, int&, float const&,
   float const&, cam_fps_range_t&, bool) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::recalcFPSRange
          (QCamera2HardwareInterface *this,int *param_1,int *param_2,float *param_3,float *param_4,
          cam_fps_range_t *param_5,bool param_6)

{
  int *piVar1;
  msm_vfe_frame_skip_pattern amStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_000bd768 + 0xbd72e);
  local_14 = *piVar1;
  calcThermalLevel(this + -0xc,SUB41(*(undefined4 *)(this + 0xa8c),0),*param_1,*param_2,param_3,
                   param_4,param_5,amStack24,param_6);
  if (*piVar1 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

