
/* qcamera::QCamera2HardwareInterface::dumpJpegToFile(void const*, unsigned int, unsigned int) */

void __thiscall
qcamera::QCamera2HardwareInterface::dumpJpegToFile
          (QCamera2HardwareInterface *this,void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int __fd;
  ssize_t sVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined8 uStack168;
  undefined8 local_a0;
  undefined8 uStack152;
  undefined8 local_90;
  undefined8 uStack136;
  char acStack124 [92];
  int local_20;
  
  piVar5 = *(int **)(DAT_000dd4fc + 0xdd384);
  local_20 = *piVar5;
  property_get(DAT_000dd500 + 0xdd394,acStack124,DAT_000dd504 + 0xdd396);
  uVar1 = atoi(acStack124);
  local_a0 = 0;
  uStack152 = 0;
  local_b0 = 0;
  uStack168 = 0;
  local_c0 = 0;
  uStack184 = 0;
  local_90 = 0;
  uStack136 = 0;
  if (((param_1 == (void *)0x0) || ((uVar1 & 0x20) == 0)) &&
     ((param_1 == (void *)0x0 || (this[0x1c22] == (QCamera2HardwareInterface)0x0))))
  goto LAB_000dd4e8;
  uVar4 = uVar1 >> 0x10;
  if (uVar1 >> 0x10 == 0) {
    uVar4 = 10;
  }
  uVar3 = uVar4;
  if (0xff < uVar4) {
    uVar3 = 0x100;
  }
  uVar1 = (uVar1 << 0x10) >> 0x18;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (*(uint *)(this + 0x9e4) == (*(uint *)(this + 0x9e4) / uVar1) * uVar1) {
    uVar1 = *(uint *)(this + 0x9e0);
    if ((uVar4 < 0x100) || (uVar1 < 0x100)) {
      if (uVar3 < uVar1) goto LAB_000dd4de;
    }
    else {
      uVar1 = 0;
      *(undefined4 *)(this + 0x9e0) = 0;
    }
    FUN_000d6e38(&local_c0,0x40,0x40,DAT_000dd508 + 0xdd438);
    if (this[0x1c22] != (QCamera2HardwareInterface)0x0) {
      __strlcpy_chk(this + 0x1c24,&local_c0,0x40,0x40,uVar1,param_3);
      *(uint *)(this + 0x1c64) = param_2;
    }
    __fd = open((char *)&local_c0,0x42,0x1ff);
    if (__fd < 0) {
      if (*(int *)(*(int *)(DAT_000dd518 + 0xdd4b4) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000dd520 + 0xdd4cc,0xbe0,DAT_000dd51c + 0xdd4c4);
      }
    }
    else {
      sVar2 = write(__fd,param_1,param_2);
      fchmod(__fd,0x1a4);
      if (*(int *)(*(int *)(DAT_000dd50c + 0xdd48a) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000dd514 + 0xdd4a4,0xbdd,DAT_000dd510 + 0xdd49a,sVar2);
      }
      close(__fd);
    }
    if (this[0x1c22] == (QCamera2HardwareInterface)0x0) {
      *(int *)(this + 0x9e0) = *(int *)(this + 0x9e0) + 1;
    }
  }
LAB_000dd4de:
  *(int *)(this + 0x9e4) = *(int *)(this + 0x9e4) + 1;
LAB_000dd4e8:
  if (*piVar5 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

