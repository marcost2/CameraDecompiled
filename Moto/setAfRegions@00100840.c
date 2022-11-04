
/* BSTBokehParam::setAfRegions(int*) */

void __thiscall BSTBokehParam::setAfRegions(BSTBokehParam *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(int *)(this + 0x1c) = *param_1 + param_1[2] / 2;
  *(int *)(this + 0x20) = param_1[1] + param_1[3] / 2;
  iVar5 = *(int *)(DAT_001008c4 + 0x100868);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    iVar3 = param_1[2];
    iVar2 = param_1[3];
    iVar4 = DAT_001008c8 + 0x100884;
    iVar1 = DAT_001008cc + 0x100886;
    mm_camera_debug_log(1,4,iVar4,0x3f,DAT_001008d0 + 0x100882,iVar1,iVar4,*param_1,param_1[1],iVar3
                        ,iVar2);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,iVar4,0x40,DAT_001008d4 + 0x1008ae,iVar1,iVar4,
                          *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),iVar3,iVar2);
    }
  }
  return;
}

