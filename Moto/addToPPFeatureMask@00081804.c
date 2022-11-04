
/* qcamera::QCamera3HardwareInterface::addToPPFeatureMask(int, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::addToPPFeatureMask
          (QCamera3HardwareInterface *this,int param_1,uint param_2)

{
  int iVar1;
  char *__format;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_80;
  undefined4 uStack124;
  char local_78;
  char local_77;
  int local_1c;
  
  piVar5 = *(int **)(DAT_0008192c + 0x81816);
  local_1c = *piVar5;
  iVar1 = property_get(DAT_00081930 + 0x81824,&local_78,DAT_00081934 + 0x81826);
  if (((iVar1 < 3) || (local_78 != '0')) || (local_77 != 'x')) {
    __format = (char *)(DAT_0008193c + 0x81848);
  }
  else {
    __format = (char *)(DAT_00081938 + 0x81842);
  }
  iVar1 = sscanf(&local_78,__format,&local_80);
  if (iVar1 == 1) {
    if ((param_1 == 0x22) && (this[0x1c4] != (QCamera3HardwareInterface)0x0)) {
      if (local_80 << 1 < 0) {
        *(uint *)(this + param_2 * 8 + 0x2f0) = *(uint *)(this + param_2 * 8 + 0x2f0) | 0x40000000;
        if (*(int *)(*(int *)(DAT_0008194c + 0x818d4) + 0x28) != 0) {
          uVar3 = 0x673;
          iVar1 = DAT_00081950 + 0x818e4;
          iVar2 = DAT_00081954 + 0x818ec;
          goto LAB_000818ea;
        }
      }
      else if ((local_80 << 0xb < 0) &&
              (*(uint *)(this + param_2 * 8 + 0x2f0) =
                    *(uint *)(this + param_2 * 8 + 0x2f0) | 0x100000,
              *(int *)(*(int *)(DAT_00081958 + 0x81880) + 0x28) != 0)) {
        uVar3 = 0x677;
        iVar1 = DAT_0008195c + 0x81890;
        iVar2 = DAT_00081960 + 0x81898;
LAB_000818ea:
        mm_camera_debug_log(1,3,iVar2,uVar3,iVar1);
      }
    }
    if (*(int *)(*(int *)(DAT_00081964 + 0x818f4) + 0x2c) == 0) goto LAB_0008191a;
    uVar4 = 0x67f;
    uVar3 = 4;
    iVar1 = DAT_00081968 + 0x81910;
    iVar2 = DAT_0008196c + 0x81918;
  }
  else {
    local_80 = 0;
    uStack124 = 0;
    if (*(int *)(*(int *)(DAT_00081940 + 0x818a4) + 0x20) == 0) goto LAB_0008191a;
    uVar3 = 1;
    uVar4 = 0x669;
    iVar1 = DAT_00081944 + 0x818b4;
    iVar2 = DAT_00081948 + 0x818be;
  }
  mm_camera_debug_log(1,uVar3,iVar2,uVar4,iVar1);
LAB_0008191a:
  if (*piVar5 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

