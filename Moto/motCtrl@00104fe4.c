
/* qcamera::MotCtrl::motCtrl(mot_ctrl_cmd_t, void*, unsigned short, void*, unsigned int*) */

undefined4 __thiscall
qcamera::MotCtrl::motCtrl
          (MotCtrl *this,mot_ctrl_cmd_t param_1,void *param_2,ushort param_3,void *param_4,
          uint *param_5)

{
  int iVar1;
  mot_ctrl_cmd_t *pmVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(DAT_0010511c + 0x104ff8);
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_00105120 + 0x105008) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_00105124 + 0x105016) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_00105128 + 0x10510a);
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 8));
  **(mot_ctrl_cmd_t **)(this + 4) = param_1;
  *(ushort *)(*(int *)(this + 4) + 4) = param_3;
  uVar3 = (uint)*(ushort *)(*(int *)(this + 4) + 4);
  if ((param_2 == (void *)0x0) && (uVar3 != 0)) {
    iVar1 = DAT_0010512c + 0x105048;
    iVar4 = DAT_00105130 + 0x10504a;
  }
  else {
    if (uVar3 != 0) {
      __aeabi_memcpy8((void *)(*(int *)(this + 4) + 8),param_2,uVar3);
    }
    iVar1 = (**(code **)((*(undefined4 **)(this + 0xc))[1] + 0x90))(**(undefined4 **)(this + 0xc));
    if (iVar1 < 0) {
      iVar1 = DAT_00105134 + 0x10508c;
      iVar4 = DAT_00105138 + 0x10508e;
    }
    else {
      pmVar2 = *(mot_ctrl_cmd_t **)(this + 4);
      if (*pmVar2 == param_1) {
        uVar3 = (uint)*(ushort *)(pmVar2 + 1);
        if ((param_4 != (void *)0x0) || (uVar3 == 0)) {
          if (param_5 != (uint *)0x0) {
            if ((param_4 == (void *)0x0) || (*param_5 < uVar3)) {
              iVar1 = DAT_00105150 + 0x1050fc;
              iVar4 = DAT_00105154 + 0x1050fe;
              goto LAB_00105096;
            }
            if (uVar3 != 0) {
              __aeabi_memcpy8(param_4,pmVar2 + 2,uVar3);
              *param_5 = (uint)*(ushort *)(*(int *)(this + 4) + 4);
            }
          }
          uVar5 = 0;
          goto LAB_001050a6;
        }
        iVar1 = DAT_00105148 + 0x105080;
        iVar4 = DAT_0010514c + 0x105082;
      }
      else {
        iVar1 = DAT_0010513c + 0x105096;
        iVar4 = DAT_00105140 + 0x105098;
      }
    }
  }
LAB_00105096:
  __android_log_print(6,iVar1,iVar4,DAT_00105144 + 0x10509e);
  uVar5 = 0x80000002;
LAB_001050a6:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  if (1 < *puVar6) {
    if ((**(byte **)(DAT_00105158 + 0x1050ba) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0010515c + 0x1050c8) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  return uVar5;
}

