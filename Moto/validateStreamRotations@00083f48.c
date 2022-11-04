
/* qcamera::QCamera3HardwareInterface::validateStreamRotations(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::validateStreamRotations
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(uint *)param_1 != 0) {
    uVar6 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 4) + uVar6 * 4);
      iVar4 = piVar1[8];
      if (iVar4 != 0) {
        iVar3 = *piVar1;
        iVar2 = piVar1[3];
        if (iVar4 == -1) {
          if (*(int *)(*(int *)(DAT_00083fd0 + 0x83f86) + 0x20) == 0) {
            return 0xffffffea;
          }
          uVar8 = 0x3342;
          iVar7 = DAT_00083fd4 + 0x83f94;
          iVar5 = DAT_00083fd8 + 0x83fa2;
          iVar4 = iVar3;
LAB_00083fc4:
          mm_camera_debug_log(1,1,iVar5,uVar8,iVar7,iVar4,iVar2);
          return 0xffffffea;
        }
        if ((iVar2 != 0x22) || (iVar3 == 2)) {
          if (*(int *)(*(int *)(DAT_00083fdc + 0x83fa8) + 0x20) == 0) {
            return 0xffffffea;
          }
          iVar7 = DAT_00083fe0 + 0x83fb2;
          uVar8 = 0x334b;
          iVar5 = DAT_00083fe4 + 0x83fc6;
          iVar2 = iVar3;
          goto LAB_00083fc4;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)param_1);
  }
  return 0;
}

