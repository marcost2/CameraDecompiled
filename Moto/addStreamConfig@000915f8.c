
/* qcamera::QCamera3HardwareInterface::addStreamConfig(android::Vector<int>&, int, cam_dimension_t
   const&, int) */

void qcamera::QCamera3HardwareInterface::addStreamConfig
               (Vector *param_1,int param_2,cam_dimension_t *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_00091640 + 0x9160a);
  iVar1 = *piVar2;
  android::VectorImpl::add(param_1);
  android::VectorImpl::add(param_1);
  android::VectorImpl::add(param_1);
  android::VectorImpl::add(param_1);
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

