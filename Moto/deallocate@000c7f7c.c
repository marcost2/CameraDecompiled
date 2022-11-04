
/* qcamera::QCameraGrallocMemory::deallocate() */

void __thiscall qcamera::QCameraGrallocMemory::deallocate(QCameraGrallocMemory *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_2c;
  int local_28;
  
  piVar1 = *(int **)(DAT_000c80dc + 0xc7f8a);
  local_28 = *piVar1;
  iVar10 = *(int *)(DAT_000c80e0 + 0xc7f96);
  if (*(int *)(iVar10 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000c80e4 + 0xc7fa8,0x91c,DAT_000c80e8 + 0xc7faa,
                        DAT_000c80e4 + 0xc7fa8);
  }
  if (this[0xa88] != (QCameraGrallocMemory)0x0) {
    iVar13 = 0;
    uVar14 = 0;
    iVar2 = DAT_000c80ec + 0xc7fc8;
    iVar3 = DAT_000c80f8 + 0xc7fd2;
    iVar12 = DAT_000c80f0 + 0xc7fd4;
    iVar11 = DAT_000c80f4 + 0xc7fd6;
    do {
      if (*(int *)(this + uVar14 * 4 + 0x980) != 0) {
        (**(code **)(*(int *)(this + uVar14 * 4 + 0x980) + 0xc))();
      }
      local_2c = *(undefined4 *)(this + iVar13 + 0x10);
      uVar4 = ioctl(*(int *)(this + iVar13 + 0xc),0xc0044901,&local_2c);
      if ((0x7fffffff < uVar4) && (*(int *)(iVar10 + 0x20) != 0)) {
        mm_camera_debug_log(1,1,iVar12,0x92a,iVar2);
      }
      close(*(int *)(this + iVar13 + 0xc));
      if (*(int *)(this + uVar14 * 4 + 0x718) != 0) {
        iVar5 = *(int *)(this + 0x958);
        if (iVar5 == 0) {
          if (*(int *)(iVar10 + 0x20) != 0) {
            uVar9 = 0x933;
            uVar6 = **(undefined4 **)(this + uVar14 * 4 + 0x618);
            uVar7 = 1;
            iVar8 = DAT_000c8104 + 0xc8076;
            iVar5 = iVar3;
            goto LAB_000c8074;
          }
        }
        else {
          (**(code **)(iVar5 + 8))(iVar5,*(undefined4 *)(this + uVar14 * 4 + 0x618));
          if (*(int *)(iVar10 + 0x28) != 0) {
            uVar9 = 0x930;
            uVar6 = **(undefined4 **)(this + uVar14 * 4 + 0x618);
            uVar7 = 3;
            iVar8 = DAT_000c8100 + 0xc8058;
            iVar5 = DAT_000c80fc + 0xc804c;
LAB_000c8074:
            mm_camera_debug_log(1,uVar7,iVar8,uVar9,iVar5,uVar6);
          }
        }
      }
      *(undefined4 *)(this + uVar14 * 4 + 0x718) = 0;
      if (*(int *)(iVar10 + 0x28) != 0) {
        mm_camera_debug_log(1,3,iVar12,0x937,iVar11,uVar14);
      }
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + 0x18;
    } while (uVar14 < (byte)this[0xa88]);
  }
  this[0xa88] = (QCameraGrallocMemory)0x0;
  this[5] = (QCameraGrallocMemory)0x0;
  if (*(int *)(iVar10 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000c8108 + 0xc80be,0x93b,DAT_000c810c + 0xc80c0,
                        DAT_000c8108 + 0xc80be);
  }
  if (*piVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

