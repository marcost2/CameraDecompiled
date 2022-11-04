
/* BSTRefocusParam::dump() */

void __thiscall BSTRefocusParam::dump(BSTRefocusParam *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_00101ed0 + 0x101d94);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    iVar1 = DAT_00101ed4 + 0x101dac;
    iVar3 = DAT_00101ed8 + 0x101dae;
    mm_camera_debug_log(1,4,iVar1,0x104,DAT_00101edc + 0x101db0,iVar3,iVar1,this[4]);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,iVar1,0x105,DAT_00101ee0 + 0x101dd6,iVar3,iVar1,
                          *(undefined4 *)(this + 0x28));
      if (*(int *)(iVar2 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,iVar1,0x106,DAT_00101ee4 + 0x101df8,iVar3,iVar1,
                            *(undefined2 *)(this + 0xe));
        if (*(int *)(iVar2 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,iVar1,0x107,DAT_00101ee8 + 0x101e1a,iVar3,iVar1,
                              *(undefined2 *)(this + 0x10));
          if (*(int *)(iVar2 + 0x2c) != 0) {
            mm_camera_debug_log(1,4,iVar1,0x108,DAT_00101eec + 0x101e3c,iVar3,iVar1,
                                *(undefined2 *)(this + 10));
            if (*(int *)(iVar2 + 0x2c) != 0) {
              mm_camera_debug_log(1,4,iVar1,0x109,DAT_00101ef0 + 0x101e5c,iVar3,iVar1,
                                  *(undefined2 *)(this + 0xc));
              if (*(int *)(iVar2 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,iVar1,0x10a,DAT_00101ef4 + 0x101e7c,iVar3,iVar1,
                                    *(undefined4 *)(this + 0x24));
                if (*(int *)(iVar2 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,iVar1,0x10b,DAT_00101ef8 + 0x101e9c,iVar3,iVar1,
                                      *(undefined2 *)(this + 8));
                  if (*(int *)(iVar2 + 0x2c) != 0) {
                    mm_camera_debug_log(1,4,iVar1,0x10c,DAT_00101efc + 0x101ebc,iVar3,iVar1,
                                        *(undefined2 *)(this + 6));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

