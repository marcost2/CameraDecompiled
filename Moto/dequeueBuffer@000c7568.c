
/* qcamera::QCameraGrallocMemory::dequeueBuffer() */

uint __thiscall qcamera::QCameraGrallocMemory::dequeueBuffer(QCameraGrallocMemory *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  piVar8 = *(int **)(DAT_000c777c + 0xc7576);
  local_28 = *piVar8;
  local_30 = 0;
  local_2c = (undefined4 *)0x0;
  iVar1 = (***(code ***)(this + 0x958))(*(code ***)(this + 0x958),&local_2c,&local_30);
  if ((iVar1 == 0) && (local_2c != (undefined4 *)0x0)) {
    iVar1 = *(int *)(DAT_000c7780 + 0xc75a0);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c7788 + 0xc75c0,0x7f9,DAT_000c7784 + 0xc75b4,*local_2c);
    }
    uVar2 = (uint)(byte)this[0xa88];
    uVar6 = 0;
    uVar7 = uVar6;
    if (uVar2 != 0) {
      do {
        if (*(undefined4 **)(this + uVar6 * 4 + 0x618) == local_2c) {
          if (*(int *)(iVar1 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,DAT_000c7790 + 0xc7736,0x7fc,DAT_000c778c + 0xc772c,uVar6);
          }
          *(undefined4 *)(this + uVar6 * 4 + 0x718) = 1;
          goto LAB_000c770a;
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar2;
      } while (uVar6 < uVar2);
    }
    if (uVar2 < (byte)this[5]) {
      if (*(int *)(iVar1 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000c7798 + 0xc7606,0x806,DAT_000c7794 + 0xc75fc,uVar7);
      }
      *(undefined4 *)(this + uVar7 * 4 + 0x718) = 1;
      *(undefined4 **)(this + uVar7 * 4 + 0x618) = local_2c;
      uVar3 = *local_2c;
      *(undefined4 *)(this + uVar7 * 4 + 0x858) = uVar3;
      setMetaData(uVar3,0x100,this + 0x974);
      iVar4 = __open_2(DAT_000c779c + 0xc7636,0);
      *(int *)(this + uVar7 * 0x18 + 0xc) = iVar4;
      if (iVar4 < 0) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          uVar5 = 1;
          uVar3 = 0x810;
          iVar1 = DAT_000c77a0 + 0xc7754;
          iVar4 = DAT_000c77a4 + 0xc775c;
LAB_000c7702:
          mm_camera_debug_log(1,uVar5,iVar4,uVar3,iVar1);
        }
      }
      else {
        piVar9 = (int *)(this + uVar7 * 4 + 0x858);
        local_38 = 0;
        local_34 = *(undefined4 *)(*piVar9 + 0xc);
        iVar4 = ioctl(iVar4,0xc0084905,&local_38);
        if (-1 < iVar4) {
          setMetaData(*piVar9,0x200,this + 0xa84);
          uVar3 = (**(code **)(this + 0x978))
                            (*(undefined4 *)(*piVar9 + 0xc),*(undefined4 *)(*piVar9 + 0x34),1,
                             *(undefined4 *)(this + 0x97c));
          *(undefined4 *)(this + uVar7 * 4 + 0x980) = uVar3;
          if (*(int *)(iVar1 + 0x28) != 0) {
            iVar1 = *piVar9;
            mm_camera_debug_log(1,3,DAT_000c77b4 + 0xc76c2,0x827,DAT_000c77b0 + 0xc76ac,uVar7,
                                *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x34),
                                *(undefined4 *)(iVar1 + 0x38));
          }
          *(undefined4 *)(this + uVar7 * 0x18 + 8) = *(undefined4 *)(*piVar9 + 0xc);
          uVar3 = *(undefined4 *)(*piVar9 + 0x34);
          *(undefined4 *)(this + uVar7 * 0x18 + 0x10) = local_38;
          *(undefined4 *)(this + uVar7 * 0x18 + 0x14) = uVar3;
          this[0xa88] = (QCameraGrallocMemory)((char)this[0xa88] + '\x01');
          uVar6 = uVar7;
          goto LAB_000c770a;
        }
        if (*(int *)(iVar1 + 0x20) != 0) {
          uVar5 = 1;
          uVar3 = 0x819;
          iVar1 = DAT_000c77a8 + 0xc7770;
          iVar4 = DAT_000c77ac + 0xc7778;
          goto LAB_000c7702;
        }
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000c77b8 + 0xc76ec) + 0x24) != 0) {
    uVar5 = 2;
    uVar3 = 0x830;
    iVar1 = DAT_000c77bc + 0xc76fc;
    iVar4 = DAT_000c77c0 + 0xc7704;
    goto LAB_000c7702;
  }
  uVar6 = 0xffffffb5;
LAB_000c770a:
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

