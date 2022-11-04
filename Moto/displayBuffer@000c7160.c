
/* qcamera::QCameraGrallocMemory::displayBuffer(unsigned int) */

uint __thiscall
qcamera::QCameraGrallocMemory::displayBuffer(QCameraGrallocMemory *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  
  piVar8 = *(int **)(DAT_000c73f8 + 0xc7172);
  local_28 = *piVar8;
  if (*(int *)(this + param_1 * 4 + 0x718) == 0) {
    if (*(int *)(*(int *)(DAT_000c73fc + 0xc71b4) + 0x20) == 0) {
      uVar6 = 0xffffffda;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000c7404 + 0xc71d0,0x774,DAT_000c7400 + 0xc71c8);
      uVar6 = 0xffffffda;
    }
    goto LAB_000c73aa;
  }
  iVar1 = (**(code **)(*(int *)(this + 0x958) + 4))
                    (*(int *)(this + 0x958),*(undefined4 *)(this + param_1 * 4 + 0x618));
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000c7414 + 0xc71e2) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c741c + 0xc7204,0x77c,DAT_000c7418 + 0xc71f8,
                          **(undefined4 **)(this + param_1 * 4 + 0x618));
    }
    *(undefined4 *)(this + param_1 * 4 + 0x718) = 0;
  }
  else if (*(int *)(*(int *)(DAT_000c7408 + 0xc7190) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c7410 + 0xc71aa,0x77a,DAT_000c740c + 0xc719e,iVar1);
  }
  local_30 = 0;
  local_2c = (undefined4 *)0x0;
  iVar1 = (***(code ***)(this + 0x958))(*(code ***)(this + 0x958),&local_2c,&local_30);
  if ((iVar1 == 0) && (local_2c != (undefined4 *)0x0)) {
    iVar1 = *(int *)(DAT_000c7420 + 0xc7230);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c7428 + 0xc7250,0x785,DAT_000c7424 + 0xc7244,*local_2c);
    }
    uVar2 = (uint)(byte)this[0xa88];
    uVar6 = 0;
    uVar7 = uVar6;
    if (uVar2 != 0) {
      do {
        if (*(undefined4 **)(this + uVar6 * 4 + 0x618) == local_2c) {
          if (*(int *)(iVar1 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000c7430 + 0xc73a2,0x788,DAT_000c742c + 0xc7398,uVar6);
          }
          *(undefined4 *)(this + uVar6 * 4 + 0x718) = 1;
          goto LAB_000c73aa;
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar2;
      } while (uVar6 < uVar2);
    }
    if (uVar2 < (byte)this[5]) {
      if (*(int *)(iVar1 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000c7438 + 0xc7296,0x791,DAT_000c7434 + 0xc728c,uVar7);
      }
      *(undefined4 *)(this + uVar7 * 4 + 0x718) = 1;
      *(undefined4 **)(this + uVar7 * 4 + 0x618) = local_2c;
      *(undefined4 *)(this + uVar7 * 4 + 0x858) = *local_2c;
      iVar3 = __open_2(DAT_000c743c + 0xc72ba,0);
      *(int *)(this + uVar7 * 0x18 + 0xc) = iVar3;
      if (iVar3 < 0) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          uVar4 = 1;
          uVar5 = 0x799;
          iVar1 = DAT_000c7440 + 0xc73ce;
          iVar3 = DAT_000c7444 + 0xc73d6;
LAB_000c7376:
          mm_camera_debug_log(1,uVar4,iVar3,uVar5,iVar1);
        }
      }
      else {
        piVar9 = (int *)(this + uVar7 * 4 + 0x858);
        local_38 = 0;
        local_34 = *(undefined4 *)(*piVar9 + 0xc);
        iVar3 = ioctl(iVar3,0xc0084905,&local_38);
        if (-1 < iVar3) {
          uVar4 = (**(code **)(this + 0x978))
                            (*(undefined4 *)(*piVar9 + 0xc),*(undefined4 *)(*piVar9 + 0x34),1,
                             *(undefined4 *)(this + 0x97c));
          *(undefined4 *)(this + uVar7 * 4 + 0x980) = uVar4;
          if (*(int *)(iVar1 + 0x28) != 0) {
            iVar1 = *piVar9;
            mm_camera_debug_log(1,3,DAT_000c7454 + 0xc7336,0x7ae,DAT_000c7450 + 0xc7320,uVar7,
                                *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x34),
                                *(undefined4 *)(iVar1 + 0x38));
          }
          *(undefined4 *)(this + uVar7 * 0x18 + 8) = *(undefined4 *)(*piVar9 + 0xc);
          uVar4 = *(undefined4 *)(*piVar9 + 0x34);
          *(undefined4 *)(this + uVar7 * 0x18 + 0x10) = local_38;
          *(undefined4 *)(this + uVar7 * 0x18 + 0x14) = uVar4;
          this[0xa88] = (QCameraGrallocMemory)((char)this[0xa88] + '\x01');
          uVar6 = uVar7;
          goto LAB_000c73aa;
        }
        if (*(int *)(iVar1 + 0x20) != 0) {
          uVar4 = 1;
          uVar5 = 0x7a2;
          iVar1 = DAT_000c7448 + 0xc73ea;
          iVar3 = DAT_000c744c + 0xc73f2;
          goto LAB_000c7376;
        }
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000c7458 + 0xc7360) + 0x24) != 0) {
    uVar4 = 2;
    uVar5 = 0x7b7;
    iVar1 = DAT_000c745c + 0xc7370;
    iVar3 = DAT_000c7460 + 0xc7378;
    goto LAB_000c7376;
  }
  uVar6 = 0xffffffb5;
LAB_000c73aa:
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

