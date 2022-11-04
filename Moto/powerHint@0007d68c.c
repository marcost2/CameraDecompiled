
/* qcamera::QCameraPerfLock::powerHint(power_hint_t, bool) */

void __thiscall
qcamera::QCameraPerfLock::powerHint(QCameraPerfLock *this,power_hint_t param_1,bool param_2)

{
  uint uVar1;
  power_hint_t *ppVar2;
  int iVar3;
  power_hint_t *ppVar4;
  power_hint_t pVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  power_hint_t *ppVar7;
  power_hint_t pVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    ppVar4 = *(power_hint_t **)(this + 0x3c);
    ppVar2 = (power_hint_t *)ppVar4[2];
    if (ppVar4 != ppVar2) {
      pVar8 = *ppVar2;
      ppVar7 = ppVar2;
      while (pVar8 != param_1) {
        ppVar7 = (power_hint_t *)ppVar7[2];
        if (ppVar4 == ppVar7) goto LAB_0007d742;
        pVar8 = *ppVar7;
      }
      if ((ppVar7 != ppVar2) && (*(int *)(*(int *)(DAT_0007d794 + 0x7d714) + 0x24) != 0)) {
        mm_camera_debug_log(1,2,DAT_0007d79c + 0x7d732,0x20a,DAT_0007d798 + 0x7d724,param_1,
                            *(undefined4 *)(this + 0x20));
      }
      pVar8 = ppVar7[1];
      pVar5 = ppVar7[2];
      *(power_hint_t *)(pVar8 + 8) = pVar5;
      *(power_hint_t *)(pVar5 + 4) = pVar8;
      operator_delete(ppVar7);
    }
LAB_0007d742:
    if (*(power_hint_t *)(this + 0x20) == param_1) {
      iVar3 = *(int *)(this + 0x1c);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0x88))(iVar3,param_1,DAT_0007d7a0 + 0x7d758);
      }
      ppVar2 = (power_hint_t *)(*(power_hint_t **)(this + 0x3c))[2];
      if (ppVar2 == *(power_hint_t **)(this + 0x3c)) {
        this[0x24] = (QCameraPerfLock)0x0;
        *(undefined4 *)(this + 0x20) = 0;
      }
      else {
        param_1 = *ppVar2;
        this[0x24] = (QCameraPerfLock)0x1;
        *(power_hint_t *)(this + 0x20) = param_1;
        iVar3 = *(int *)(this + 0x1c);
        if (iVar3 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x88);
          iVar6 = DAT_0007d7a4 + 0x7d778;
          goto LAB_0007d776;
        }
      }
    }
  }
  else {
    uVar1 = (uint)(byte)this[0x24];
    if (*(power_hint_t *)(this + 0x20) != param_1 || param_2 != uVar1) {
      bVar9 = uVar1 != 0;
      if (bVar9) {
        uVar1 = *(uint *)(this + 0x1c);
      }
      if (bVar9 && uVar1 != 0) {
        (**(code **)(uVar1 + 0x88))(uVar1,*(power_hint_t *)(this + 0x20),DAT_0007d78c + 0x7d6bc);
      }
      pVar8 = *(power_hint_t *)(*(int *)(this + 0x3c) + 8);
      ppVar2 = (power_hint_t *)operator_new(0xc);
      ppVar2[2] = pVar8;
      *ppVar2 = param_1;
      ppVar2[1] = *(power_hint_t *)(pVar8 + 4);
      *(power_hint_t **)(*(int *)(pVar8 + 4) + 8) = ppVar2;
      *(power_hint_t **)(pVar8 + 4) = ppVar2;
      this[0x24] = (QCameraPerfLock)param_2;
      *(power_hint_t *)(this + 0x20) = param_1;
      iVar3 = *(int *)(this + 0x1c);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x88);
        iVar6 = DAT_0007d790 + 0x7d6ec;
LAB_0007d776:
                    /* WARNING: Could not recover jumptable at 0x0007d77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,param_1,iVar6);
        return;
      }
    }
  }
  return;
}

