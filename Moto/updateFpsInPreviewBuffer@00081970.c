
/* qcamera::QCamera3HardwareInterface::updateFpsInPreviewBuffer(metadata_buffer_t*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::updateFpsInPreviewBuffer
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1,uint param_2)

{
  byte bVar1;
  metadata_buffer_t mVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_2c;
  int local_28;
  
  piVar6 = *(int **)(DAT_00081a04 + 0x8197e);
  local_28 = *piVar6;
  puVar3 = *(uint **)(this + 0x270);
  puVar4 = (uint *)puVar3[7];
  if (puVar4 != puVar3) {
    do {
      piVar5 = (int *)((int *)puVar4[5])[4];
      if (piVar5 != (int *)puVar4[5]) {
        do {
          if ((*puVar4 == param_2) &&
             (bVar1 = (**(code **)(**(int **)(*piVar5 + 0x18) + 0x20))(),
             param_1 != (metadata_buffer_t *)0x0)) {
            mVar2 = (metadata_buffer_t)(bVar1 & 2);
            bVar7 = mVar2 != (metadata_buffer_t)0x0;
            if (bVar7) {
              mVar2 = param_1[10];
            }
            if (bVar7 && mVar2 != (metadata_buffer_t)0x0) {
              local_2c = *(undefined4 *)(param_1 + 0x72ea0);
              setMetaData(*(undefined4 *)piVar5[1],0x100,&local_2c);
            }
          }
          piVar5 = (int *)piVar5[4];
        } while (piVar5 != (int *)puVar4[5]);
        puVar3 = *(uint **)(this + 0x270);
      }
      puVar4 = (uint *)puVar4[7];
    } while (puVar4 != puVar3);
  }
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

