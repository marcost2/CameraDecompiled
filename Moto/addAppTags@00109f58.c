
/* qcamera::MotMakernote::addAppTags(unsigned char*, unsigned int) */

int __thiscall qcamera::MotMakernote::addAppTags(MotMakernote *this,uchar *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  if (param_1 == (uchar *)0x0) {
    iVar3 = -0x16;
  }
  else {
    if (0 < (int)param_2) {
      pbVar6 = param_1;
      do {
        uVar2 = (int)(param_1 + param_2) - (int)pbVar6;
        if (uVar2 < 7) {
          uVar4 = (int)pbVar6 - (int)param_1;
          iVar3 = DAT_0010a034 + 0x109fd0;
          iVar5 = DAT_0010a038 + 0x109fd2;
          goto LAB_0010a006;
        }
        uVar4 = (uint)*pbVar6;
        if (uVar4 != 0x45) {
LAB_00109fd4:
          iVar3 = DAT_0010a040 + 0x109fe6;
          iVar5 = DAT_0010a044 + 0x109fe8;
LAB_0010a006:
          __android_log_print(6,iVar3,iVar5,DAT_0010a03c + 0x10a00e,uVar4);
          return -0x80000000;
        }
        if (pbVar6[1] != 0x4d) {
          uVar4 = 0x45;
          goto LAB_00109fd4;
        }
        bVar1 = pbVar6[4] - 1;
        if (0xb < bVar1) {
          uVar4 = (int)pbVar6 - (int)param_1;
          iVar3 = DAT_0010a048 + 0x109ff6;
          iVar5 = DAT_0010a04c + 0x109ff8;
          goto LAB_0010a006;
        }
        uVar4 = (uint)*(ushort *)(pbVar6 + 5) * *(int *)(DAT_0010a050 + 0x109f94 + (char)bVar1 * 4)
                + 7;
        if (uVar2 < uVar4) {
          uVar4 = (int)pbVar6 - (int)param_1;
          iVar3 = DAT_0010a054 + 0x10a006;
          iVar5 = DAT_0010a058 + 0x10a008;
          goto LAB_0010a006;
        }
        iVar3 = addTag(this,*(ushort *)(pbVar6 + 2),(ushort)pbVar6[4],(uint)*(ushort *)(pbVar6 + 5),
                       pbVar6 + 7);
        if (iVar3 != 0) {
          __android_log_print(6,DAT_0010a05c + 0x10a02c,DAT_0010a060 + 0x10a02e,
                              DAT_0010a064 + 0x10a030,iVar3);
          return iVar3;
        }
        pbVar6 = pbVar6 + uVar4;
      } while (pbVar6 < param_1 + param_2);
    }
    iVar3 = 0;
  }
  return iVar3;
}

