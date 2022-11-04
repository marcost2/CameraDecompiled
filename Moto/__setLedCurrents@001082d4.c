
/* qcamera::MotCameraFactory::__setLedCurrents(mot_ctrl_cmd_t, unsigned int, unsigned int) */

void __thiscall
qcamera::MotCameraFactory::__setLedCurrents
          (MotCameraFactory *this,mot_ctrl_cmd_t param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint local_1c;
  uint uStack24;
  int local_14;
  
  piVar4 = *(int **)(DAT_00108338 + 0x1082de);
  local_14 = *piVar4;
  *(uint *)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  local_1c = param_2;
  uStack24 = param_3;
  iVar1 = MotCtrl::motCtrl(*(MotCtrl **)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),
                           param_1,&local_1c,8,(void *)0x0,(uint *)0x0);
  if (iVar1 < 0) {
    uVar2 = 6;
    iVar1 = DAT_00108340 + 0x108324;
    iVar3 = DAT_00108344 + 0x108326;
  }
  else {
    uVar2 = 4;
    iVar1 = DAT_00108348 + 0x108318;
    iVar3 = DAT_0010834c + 0x10831a;
  }
  __android_log_print(uVar2,DAT_0010833c + 0x10830e,iVar1,iVar3);
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

