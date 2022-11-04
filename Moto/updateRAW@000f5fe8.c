
/* qcamera::QCameraParameters::updateRAW(cam_dimension_t) */

undefined4 __thiscall
qcamera::QCameraParameters::updateRAW(QCameraParameters *this,cam_dimension_t param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 uStack28;
  
  piVar2 = *(int **)(DAT_000f601c + 0xf5ff6);
  iVar1 = *piVar2;
  getSensorOutputSize(SUB41(this,0),(cam_dimension_t *)(uint)(byte)param_1);
  *(undefined4 *)(this + 0x278) = local_20;
  *(undefined4 *)(this + 0x27c) = uStack28;
  if (*piVar2 == iVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

