
/* qcamera::MotExif::writeAppExif(unsigned char*, unsigned int) */

void __thiscall qcamera::MotExif::writeAppExif(MotExif *this,uchar *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint local_2c;
  int local_28;
  
  piVar5 = *(int **)(DAT_00105ad8 + 0x1059ec);
  local_28 = *piVar5;
  if ((param_1 != (uchar *)0x0) && (0 < (int)param_2)) {
    pbVar9 = param_1;
    do {
      uVar6 = (int)(param_1 + param_2) - (int)pbVar9;
      if (uVar6 < 7) {
        uVar8 = (int)pbVar9 - (int)param_1;
        iVar7 = DAT_00105adc + 0x105a9c;
        goto LAB_00105ab8;
      }
      uVar8 = (uint)*pbVar9;
      if (uVar8 != 0x45) {
LAB_00105a9e:
        iVar7 = DAT_00105ae4 + 0x105aae;
LAB_00105ab8:
        __android_log_print(6,0,iVar7,DAT_00105ae0 + 0x105ac2,uVar8);
        break;
      }
      if (pbVar9[1] != 0x4d) {
        uVar8 = 0x45;
        goto LAB_00105a9e;
      }
      bVar1 = pbVar9[4];
      bVar3 = bVar1 - 1;
      if ((9 < bVar3) || ((0x35fU >> (uint)bVar3 & 1) == 0)) {
        uVar8 = (int)pbVar9 - (int)param_1;
        iVar7 = DAT_00105ae8 + 0x105a90;
        goto LAB_00105ab8;
      }
      uVar4 = *(ushort *)(pbVar9 + 5);
      uVar8 = (uint)uVar4 * *(int *)(DAT_00105aec + 0x105a3a + (char)bVar3 * 4) + 7;
      if (uVar6 < uVar8) {
        uVar8 = (int)pbVar9 - (int)param_1;
        iVar7 = DAT_00105af0 + 0x105aba;
        goto LAB_00105ab8;
      }
      uVar2 = *(ushort *)(pbVar9 + 2);
      iVar7 = convertTagId((MotExif *)(uint)uVar2,uVar2,&local_2c);
      if (iVar7 == 0) {
        __android_log_print(6,0,DAT_00105af4 + 0x105a78,DAT_00105af8 + 0x105a7a,uVar2);
      }
      else {
        (**(code **)(*(int *)this + 0xc))(this,local_2c,bVar1,(uint)uVar4,pbVar9 + 7);
      }
      pbVar9 = pbVar9 + uVar8;
    } while (pbVar9 < param_1 + param_2);
  }
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

