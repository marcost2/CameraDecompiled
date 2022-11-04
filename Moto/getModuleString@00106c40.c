
/* qcamera::QCamera2HardwareInterface::getModuleString() */

void __thiscall qcamera::QCamera2HardwareInterface::getModuleString(QCamera2HardwareInterface *this)

{
  MotCtrl *this_00;
  int iVar1;
  tm *__tp;
  undefined4 uVar2;
  int *piVar3;
  uint local_284;
  char acStack640 [512];
  undefined4 local_80;
  undefined4 uStack124;
  undefined2 local_78;
  undefined auStack116 [3];
  undefined auStack113 [3];
  ushort local_6e;
  ushort local_6a;
  ushort local_68;
  ushort local_66;
  ushort local_64;
  undefined4 local_60;
  undefined4 uStack92;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined auStack72 [32];
  int local_28;
  
  piVar3 = *(int **)(DAT_00106d48 + 0x106c54);
  local_28 = *piVar3;
  local_284 = 0x4c;
  this_00 = (MotCtrl *)QCameraParametersIntf::getMotCtrl((QCameraParametersIntf *)(this + 0x4ac));
  iVar1 = MotCtrl::motCtrl(this_00,0x10,(void *)0x0,0,auStack116,&local_284);
  if (iVar1 < 0) {
    __android_log_print(6,DAT_00106d4c + 0x106d28,DAT_00106d50 + 0x106d2a,DAT_00106d54 + 0x106d2c);
    uVar2 = 0x80000000;
  }
  else {
    local_80 = 0;
    uStack124 = 0;
    local_78 = 0;
    if (local_54 != 0) {
      __tp = localtime(&local_54);
      strftime((char *)&local_80,10,(char *)(DAT_00106d58 + 0x106ca0),__tp);
    }
    snprintf(acStack640,0x200,(char *)0x200,DAT_00106d5c + 0x106cfa,local_50,local_4c,local_60,
             (uint)local_6a,auStack116,auStack113,&local_80,(uint)local_6e,uStack92,(uint)local_66,
             (uint)local_68,(uint)local_64,auStack72,local_58);
    __android_log_print(4,DAT_00106d60 + 0x106d0a,DAT_00106d64 + 0x106d0c,DAT_00106d68 + 0x106d0e,
                        acStack640);
    QCameraParametersIntf::setFactoryRet((QCameraParametersIntf *)(this + 0x4ac),acStack640);
    uVar2 = 0;
  }
  if (*piVar3 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

