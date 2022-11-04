
/* qcamera::QCamera3HardwareInterface::addStreamConfig(android::Vector<int>&, int, cam_dimension_t
   const&, int) */

void qcamera::QCamera3HardwareInterface::addStreamConfig
               (Vector *param_1,int param_2,cam_dimension_t *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint local_1c;
  uint uStack24;
  int local_14;
  
  piVar2 = *(int **)(DAT_0004b078 + 0x4b042);
  local_14 = *piVar2;
  puVar1 = (uint *)param_3;
  local_1c = param_4;
  uStack24 = param_2;
  android::Vector<long_long>::add((Vector_long_long_ *)param_1,&uStack24,(uint *)param_3);
  android::Vector<long_long>::add((Vector_long_long_ *)param_1,(uint *)param_3,puVar1);
  android::Vector<long_long>::add((Vector_long_long_ *)param_1,(uint *)(param_3 + 4),puVar1);
  android::Vector<long_long>::add((Vector_long_long_ *)param_1,&local_1c,puVar1);
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

