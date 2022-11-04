
/* qcamera::QCameraVideoMemory::allocateMeta(unsigned char, int, int) */

undefined4 __thiscall
qcamera::QCameraVideoMemory::allocateMeta
          (QCameraVideoMemory *this,uchar param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    piVar5 = (int *)(this + 0x71c);
    uVar4 = 0;
    do {
      puVar1 = (undefined4 *)
               (**(code **)(this + 0x618))(0xffffffff,8,1,*(undefined4 *)(this + 0x71c));
      piVar5[1] = (int)puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        if (*(int *)(*(int *)(DAT_000c6968 + 0xc68e4) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c6970 + 0xc68fc,0x5da,DAT_000c696c + 0xc68f4);
        }
        if (uVar4 == 0) {
          return 0xfffffff4;
        }
        do {
          uVar4 = uVar4 - 1;
          if (piVar5[0x43] != 0) {
            native_handle_delete();
          }
          (**(code **)(*piVar5 + 0xc))();
          piVar5 = piVar5 + -1;
        } while (0 < (int)uVar4);
        return 0xfffffff4;
      }
      puVar1 = (undefined4 *)*puVar1;
      iVar2 = native_handle_create(param_2,param_3 * param_2 + 1);
      piVar5[0x44] = iVar2;
      if (iVar2 == 0) {
        if (*(int *)(*(int *)(DAT_000c6974 + 0xc6920) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c697c + 0xc6938,0x5e9,DAT_000c6978 + 0xc6930);
        }
        piVar3 = piVar5;
        if (uVar4 != 0) {
          do {
            (**(code **)(piVar5[1] + 0xc))();
            uVar4 = uVar4 - 1;
            if (piVar3[0x43] != 0) {
              native_handle_delete();
            }
            (**(code **)(*piVar3 + 0xc))();
            piVar3 = piVar3 + -1;
          } while (0 < (int)uVar4);
        }
        return 0xfffffff4;
      }
      piVar5 = piVar5 + 1;
      *(uint *)(iVar2 + (param_3 * param_2 + param_2) * 4 + 0xc) = uVar4;
      uVar4 = uVar4 + 1;
      *puVar1 = 3;
      puVar1[1] = 0;
    } while (uVar4 < param_1);
  }
  this[0x820] = (QCameraVideoMemory)param_1;
  return 0;
}

