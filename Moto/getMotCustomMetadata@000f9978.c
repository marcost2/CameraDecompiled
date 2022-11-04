
/* qcamera::QCameraParameters::getMotCustomMetadata(unsigned char**, unsigned int*) */

void __thiscall
qcamera::QCameraParameters::getMotCustomMetadata
          (QCameraParameters *this,uchar **param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  timespec local_38;
  timespec tStack48;
  int local_28;
  
  piVar10 = *(int **)(DAT_000f9bf8 + 0xf998a);
  local_28 = *piVar10;
  local_3c = 0;
  local_44 = 0;
  local_40 = 0;
  *param_2 = 0;
  clock_gettime(7,&tStack48);
  local_48 = 4;
  iVar3 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),7,(void *)0x0,0,&local_3c,&local_48);
  uVar9 = local_3c;
  if (iVar3 == 0 && local_48 == 4) {
    local_48 = 4;
    iVar3 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),8,(void *)0x0,0,&local_40,&local_48);
    uVar2 = local_40;
    if (iVar3 == 0 && local_48 == 4) {
      local_48 = 4;
      iVar3 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),6,(void *)0x0,0,&local_44,&local_48);
      if (iVar3 == 0 && local_48 == 4) {
        iVar3 = uVar2 + uVar9 + local_44;
        puVar4 = (ushort *)malloc(iVar3 * 0xffff);
        *param_1 = (uchar *)puVar4;
        if (puVar4 == (ushort *)0x0) {
          __android_log_print(6,DAT_000f9c24 + 0xf9bec,DAT_000f9c28 + 0xf9bee);
        }
        else {
          if (local_3c != 0) {
            uVar9 = 1;
            iVar7 = DAT_000f9c18 + 0xf9a82;
            iVar8 = DAT_000f9c1c + 0xf9a88;
            iVar5 = DAT_000f9c20 + 0xf9a8e;
            do {
              *puVar4 = (ushort)uVar9;
              local_48 = 0xffff;
              iVar6 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),2,puVar4,2,puVar4,&local_48);
              if (((iVar6 == 0) && (2 < *puVar4)) && (local_48 != 0)) {
                puVar4 = (ushort *)((int)puVar4 + local_48);
                *param_2 = *param_2 + local_48;
              }
              else {
                __android_log_print(6,iVar7,iVar8,iVar5,iVar6,local_48,uVar9);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 <= local_3c);
          }
          if (local_40 != 0) {
            uVar9 = 1;
            iVar7 = DAT_000f9c2c + 0xf9ae2;
            iVar8 = DAT_000f9c30 + 0xf9ae8;
            iVar5 = DAT_000f9c34 + 0xf9aee;
            do {
              *puVar4 = (ushort)uVar9;
              local_48 = 0xffff;
              MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),3,puVar4,2,puVar4,&local_48);
              if (*puVar4 < 3) {
                __android_log_print(6,iVar7,iVar8,iVar5,uVar9);
              }
              else {
                *param_2 = (uint)*puVar4 + *param_2;
                puVar4 = (ushort *)((int)puVar4 + (uint)*puVar4);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 <= local_40);
          }
          if (local_44 != 0) {
            uVar9 = 1;
            iVar7 = DAT_000f9c38 + 0xf9b3c;
            iVar8 = DAT_000f9c3c + 0xf9b42;
            iVar5 = DAT_000f9c40 + 0xf9b48;
            do {
              *puVar4 = (ushort)uVar9;
              local_48 = 0xffff;
              MotCtrl::motCtrl(*(MotCtrl **)(this + 0xd1c),1,puVar4,2,puVar4,&local_48);
              if (*puVar4 < 3) {
                __android_log_print(6,iVar7,iVar8,iVar5,uVar9);
              }
              else {
                *param_2 = (uint)*puVar4 + *param_2;
                puVar4 = (ushort *)((int)puVar4 + (uint)*puVar4);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 <= local_44);
          }
          clock_gettime(7,&local_38);
          lVar1 = (longlong)(local_38.tv_sec - tStack48.tv_sec) * 1000000 +
                  (longlong)((local_38.tv_nsec - tStack48.tv_nsec) / 1000);
          __android_log_print(3,DAT_000f9c44 + 0xf9bd8,DAT_000f9c48 + 0xf9bda,iVar3,0,local_3c,
                              local_40,local_44,(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
        }
        goto LAB_000f9a46;
      }
      iVar7 = DAT_000f9c10 + 0xf9a3c;
      iVar8 = DAT_000f9c14 + 0xf9a3e;
      uVar9 = local_44;
    }
    else {
      iVar7 = DAT_000f9c08 + 0xf9a0a;
      iVar8 = DAT_000f9c0c + 0xf9a0c;
      uVar9 = local_40;
    }
  }
  else {
    iVar7 = DAT_000f9bfc + 0xf99d8;
    iVar8 = DAT_000f9c00 + 0xf99da;
  }
  __android_log_print(6,iVar7,iVar8,DAT_000f9c04 + 0xf9a44,iVar3,local_48,uVar9);
LAB_000f9a46:
  if (*piVar10 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

