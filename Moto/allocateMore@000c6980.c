
/* qcamera::QCameraVideoMemory::allocateMore(unsigned char, unsigned int) */

int __thiscall
qcamera::QCameraVideoMemory::allocateMore(QCameraVideoMemory *this,uchar param_1,uint param_2)

{
  QCameraVideoMemory QVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 local_48 [8];
  int local_28;
  
  uVar11 = (uint)param_1;
  piVar9 = *(int **)(DAT_000c6c3c + 0xc6992);
  local_28 = *piVar9;
  puVar10 = *(uint **)(DAT_000c6c40 + 0xc699c);
  if ((1 < *puVar10) && (FUN_000c51f4(local_48,uVar11,param_2,DAT_000c6c48 + 0xc69b2), 1 < *puVar10)
     ) {
    if ((**(byte **)(DAT_000c6c4c + 0xc69c0) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000c6c50 + 0xc69d0) + 1) << 0x1d) < 0) {
      atrace_begin_body(local_48);
    }
  }
  iVar2 = QCameraStreamMemory::allocateMore((QCameraStreamMemory *)this,param_1,param_2);
  if (iVar2 < 0) {
    if (1 < *puVar10) {
      if ((**(byte **)(DAT_000c6c54 + 0xc6acc) & 1) == 0) {
        atrace_setup();
      }
      if ((int)((uint)*(byte *)(*(int *)(DAT_000c6c58 + 0xc6adc) + 1) << 0x1d) < 0) {
        atrace_end_body();
      }
    }
  }
  else {
    QVar1 = this[5];
    uVar3 = (uint)(byte)QVar1;
    if (((int)((uint)(byte)this[0x610] << 0x1e) < 0) || (uVar11 == 0)) {
LAB_000c6a8a:
      this[0x820] = (QCameraVideoMemory)((char)QVar1 + param_1);
      this[5] = (QCameraVideoMemory)((char)QVar1 + param_1);
      if (1 < *puVar10) {
        if ((**(byte **)(DAT_000c6c84 + 0xc6aa0) & 1) == 0) {
          atrace_setup();
        }
        if ((int)((uint)*(byte *)(*(int *)(DAT_000c6c88 + 0xc6ab0) + 1) << 0x1d) < 0) {
          atrace_end_body();
        }
      }
      iVar2 = 0;
    }
    else {
      iVar12 = uVar3 + 0x1c8;
      iVar13 = uVar3 * 4 + 0x82c;
      iVar2 = uVar3 * 0x18;
      while( true ) {
        puVar4 = (undefined4 *)
                 (**(code **)(this + 0x618))(0xffffffff,8,1,*(undefined4 *)(this + 0x71c));
        uVar3 = iVar12 - 0x1c8;
        *(undefined4 **)(this + iVar12 * 4) = puVar4;
        if (puVar4 == (undefined4 *)0x0) break;
        puVar4 = (undefined4 *)*puVar4;
        uVar5 = native_handle_create(1,6);
        *(undefined4 *)(this + iVar13) = uVar5;
        *puVar4 = 3;
        puVar4[1] = 0;
        iVar6 = *(int *)(this + iVar13);
        if (iVar6 == 0) {
          if (*(int *)(*(int *)(DAT_000c6c70 + 0xc6ba8) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000c6c78 + 0xc6bc0,0x5b2,DAT_000c6c74 + 0xc6bb8);
          }
          if (*puVar10 < 2) goto LAB_000c6be4;
          if ((**(byte **)(DAT_000c6c7c + 0xc6bd0) & 1) == 0) {
            atrace_setup();
          }
          piVar7 = (int *)(DAT_000c6c80 + 0xc6bde);
          goto LAB_000c6bdc;
        }
        iVar13 = iVar13 + 4;
        uVar8 = iVar12 - 0x1c7;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(this + iVar2 + 8);
        *(undefined4 *)(iVar6 + 0x10) = 0;
        iVar12 = iVar12 + 1;
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(this + iVar2 + 0x14);
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(this + 0x824);
        *(undefined4 *)(iVar6 + 0x1c) = 0;
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(this + 0x828);
        *(uint *)(iVar6 + 0x24) = uVar3;
        QVar1 = this[5];
        iVar2 = iVar2 + 0x18;
        if ((byte)QVar1 + uVar11 <= uVar8) goto LAB_000c6a8a;
      }
      if (*(int *)(*(int *)(DAT_000c6c5c + 0xc6af0) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c6c64 + 0xc6b08,0x599,DAT_000c6c60 + 0xc6b00);
      }
      uVar11 = (uint)(byte)this[5];
      if (uVar11 < uVar3) {
        iVar2 = uVar11 * 4 + 0x61c;
        iVar12 = uVar11 * 6;
        do {
          (**(code **)(*(int *)(this + uVar11 * 4 + 0x720) + 0xc))();
          (**(code **)(*(int *)(this + iVar2) + 0xc))();
          *(undefined4 *)(this + iVar2) = 0;
          if (-1 < *(int *)(this + iVar12 * 4 + 8)) {
            close(*(int *)(this + iVar12 * 4 + 8));
            *(undefined4 *)(this + iVar12 * 4 + 8) = 0xffffffff;
          }
          if (-1 < *(int *)(this + iVar12 * 4 + 0xc)) {
            local_48[0] = *(undefined4 *)(this + iVar12 * 4 + 0x10);
            ioctl(*(int *)(this + iVar12 * 4 + 0xc),0xc0044901,local_48);
            close(*(int *)(this + iVar12 * 4 + 0xc));
            *(undefined4 *)(this + iVar12 * 4 + 0xc) = 0xffffffff;
          }
          iVar2 = iVar2 + 4;
          uVar11 = uVar11 + 1;
          *(undefined4 *)(this + iVar12 * 4 + 0x10) = 0;
          *(undefined4 *)(this + iVar12 * 4 + 0x14) = 0;
          iVar12 = iVar12 + 6;
        } while (uVar3 != uVar11);
      }
      if (*puVar10 < 2) {
        iVar2 = -0xc;
      }
      else {
        if ((**(byte **)(DAT_000c6c68 + 0xc6b90) & 1) == 0) {
          atrace_setup();
        }
        piVar7 = (int *)(DAT_000c6c6c + 0xc6ba0);
LAB_000c6bdc:
        if ((int)((uint)*(byte *)(*piVar7 + 1) << 0x1d) < 0) {
          atrace_end_body();
          iVar2 = -0xc;
          goto LAB_000c6bf0;
        }
LAB_000c6be4:
        iVar2 = -0xc;
      }
    }
  }
LAB_000c6bf0:
  if (*piVar9 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

