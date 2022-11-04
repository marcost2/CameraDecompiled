
/* qcamera::QCamera3HardwareInterface::getMotCustomMetadata(unsigned char**, unsigned int*) */

void __thiscall
qcamera::QCamera3HardwareInterface::getMotCustomMetadata
          (QCamera3HardwareInterface *this,uchar **param_1,uint *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  MotCtrl **ppMVar9;
  int *piVar10;
  uint local_44;
  uint local_40;
  uint local_3c;
  timespec local_38;
  timespec tStack48;
  int local_28;
  
  piVar10 = *(int **)(DAT_000813f8 + 0x81216);
  local_28 = *piVar10;
  local_40 = 0;
  local_3c = 0;
  *param_2 = 0;
  clock_gettime(7,&tStack48);
  local_44 = 4;
  iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(this + 0x117fdc),7,(void *)0x0,0,&local_3c,&local_44);
  uVar7 = local_3c;
  if (iVar1 == 0 && local_44 == 4) {
    ppMVar9 = (MotCtrl **)(this + 0x117fdc);
    local_44 = 4;
    iVar1 = MotCtrl::motCtrl(*ppMVar9,8,(void *)0x0,0,&local_40,&local_44);
    uVar8 = local_40;
    if (iVar1 == 0 && local_44 == 4) {
      iVar1 = local_40 + uVar7;
      puVar2 = (ushort *)malloc(iVar1 * 0xffff);
      *param_1 = (uchar *)puVar2;
      if (puVar2 == (ushort *)0x0) {
        __android_log_print(6,DAT_0008141c + 0x813ec,DAT_00081420 + 0x813ee);
      }
      else {
        if (local_3c != 0) {
          uVar7 = 1;
          iVar5 = DAT_00081410 + 0x812de;
          iVar6 = DAT_00081414 + 0x812e4;
          iVar3 = DAT_00081418 + 0x812ea;
          do {
            *puVar2 = (ushort)uVar7;
            local_44 = 0xffff;
            iVar4 = MotCtrl::motCtrl(*ppMVar9,2,puVar2,2,puVar2,&local_44);
            if (((iVar4 == 0) && (2 < *puVar2)) && (local_44 != 0)) {
              puVar2 = (ushort *)((int)puVar2 + local_44);
              *param_2 = *param_2 + local_44;
            }
            else {
              __android_log_print(6,iVar5,iVar6,iVar3,iVar4,local_44,uVar7);
            }
            uVar7 = uVar7 + 1;
            uVar8 = local_40;
          } while (uVar7 <= local_3c);
        }
        if (uVar8 != 0) {
          uVar7 = 1;
          iVar5 = DAT_00081424 + 0x8133c;
          iVar6 = DAT_00081428 + 0x81342;
          iVar3 = DAT_0008142c + 0x81348;
          do {
            *puVar2 = (ushort)uVar7;
            local_44 = 0xffff;
            iVar4 = MotCtrl::motCtrl(*ppMVar9,3,puVar2,2,puVar2,&local_44);
            if (((iVar4 == 0) && (2 < *puVar2)) && (local_44 != 0)) {
              puVar2 = (ushort *)((int)puVar2 + local_44);
              *param_2 = *param_2 + local_44;
            }
            else {
              __android_log_print(6,iVar5,iVar6,iVar3,uVar7);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 <= local_40);
        }
        clock_gettime(7,&local_38);
        __android_log_print(3,DAT_00081430 + 0x813d8,DAT_00081434 + 0x813da,iVar1,0,local_3c,
                            local_40);
      }
      goto LAB_000812a4;
    }
    iVar5 = DAT_00081408 + 0x8129a;
    iVar6 = DAT_0008140c + 0x8129c;
    uVar7 = local_40;
  }
  else {
    iVar5 = DAT_000813fc + 0x81268;
    iVar6 = DAT_00081400 + 0x8126a;
  }
  __android_log_print(6,iVar5,iVar6,DAT_00081404 + 0x812a2,iVar1,local_44,uVar7);
LAB_000812a4:
  if (*piVar10 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

