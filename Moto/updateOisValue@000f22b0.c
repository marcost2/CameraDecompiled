
/* qcamera::QCameraParameters::updateOisValue(bool) */

int __thiscall qcamera::QCameraParameters::updateOisValue(QCameraParameters *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  pthread_t pVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  MotParamStateMachine *this_00;
  undefined auVar10 [16];
  undefined8 local_f0;
  undefined8 uStack232;
  undefined8 local_e0;
  undefined8 uStack216;
  undefined8 local_d0;
  undefined8 uStack200;
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined4 uStack168;
  undefined4 local_a4;
  undefined4 uStack160;
  undefined8 uStack156;
  undefined8 local_90;
  undefined8 uStack136;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined4 uStack72;
  undefined4 local_44;
  undefined4 uStack64;
  undefined8 uStack60;
  int local_34;
  
  auVar10 = ZEXT816(0);
  piVar9 = *(int **)(DAT_000f2580 + 0xf22cc);
  local_34 = *piVar9;
  local_b0 = 0;
  uStack168 = 0;
  local_c0 = 0;
  uStack184 = 0;
  local_d0 = 0;
  uStack200 = 0;
  local_e0 = 0;
  uStack216 = 0;
  local_f0 = 0;
  uStack232 = 0;
  local_a4 = 0;
  uStack160 = 0;
  uStack156 = 0;
  property_get(DAT_000f2588 + 0xf230e,&local_f0,*(undefined4 *)(DAT_000f2584 + 0xf2308));
  uVar1 = atoi((char *)&local_f0);
  if (this[0x213] == (QCameraParameters)0x0) {
LAB_000f2376:
    if (*(int *)(*(int *)(DAT_000f2598 + 0xf237c) + 0x28) == 0) {
      iVar2 = 1;
      goto joined_r0x000f23ac;
    }
    iVar2 = 1;
    mm_camera_debug_log(1,3,DAT_000f25a0 + 0xf2396,0x2447,DAT_000f259c + 0xf238e);
    if ((uVar1 & 0xff) == 0) goto LAB_000f239c;
LAB_000f23ae:
    if (*(int *)(*(int *)(DAT_000f25a4 + 0xf23b4) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f25ac + 0xf23d2,0x244e,DAT_000f25a8 + 0xf23c4,uVar1 & 0xff,
                          param_1);
    }
    iVar2 = 0;
  }
  else {
    local_90 = SUB168(auVar10,0);
    uStack136 = SUB168(auVar10 >> 0x40,0);
    uStack64 = SUB164(auVar10 >> 0x20,0);
    uStack72 = SUB164(auVar10 >> 0x40,0);
    local_44 = SUB164(auVar10 >> 0x60,0);
    local_80 = local_90;
    uStack120 = uStack136;
    local_70 = local_90;
    uStack104 = uStack136;
    local_60 = local_90;
    uStack88 = uStack136;
    local_50 = local_90;
    uStack60 = uStack136;
    iVar2 = property_get(DAT_000f258c + 0xf2352,&local_90,0);
    if (iVar2 != 0) {
      iVar3 = atoi((char *)&local_90);
      iVar2 = iVar3;
      if (iVar3 != 0) {
        iVar2 = 1;
      }
      __android_log_print(3,DAT_000f2590 + 0xf2370,DAT_000f2594 + 0xf2372,iVar2);
      if (iVar3 != 0) goto LAB_000f2376;
    }
    iVar2 = 0;
joined_r0x000f23ac:
    if ((uVar1 & 0xff) != 0) goto LAB_000f23ae;
LAB_000f239c:
    if (param_1 == false) goto LAB_000f23ae;
  }
  pvVar8 = *(void **)(this + 0x1e0);
  if (pvVar8 == (void *)0x0) {
    __android_log_print(6,DAT_000f25e4 + 0xf2488,DAT_000f25e8 + 0xf248a,DAT_000f25ec + 0xf248c);
    iVar2 = -0x7fffffff;
  }
  else {
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar3 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar3 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar8,0x10f);
      *(undefined *)((int)pvVar8 + 0x117aec) = 0;
      *(undefined *)((int)pvVar8 + 0x106974) = 0;
      *(undefined *)((int)pvVar8 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar8 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar8 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar8 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar8 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar8 + 0xb7340) = 0;
      *(undefined *)((int)pvVar8 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar8 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    this[0x28c] = SUB41(iVar2,0);
    if (iVar2 == 0) {
      ppcVar4 = (char **)(DAT_000f25b8 + 0xf249c);
    }
    else {
      ppcVar4 = (char **)(DAT_000f25b4 + 0xf247c);
    }
    updateParamEntry(this,*(char **)(DAT_000f25b0 + 0xf2474),*ppcVar4);
    iVar3 = *(int *)(DAT_000f25bc + 0xf24a8);
    if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f25c4 + 0xf24c2,0x2466,DAT_000f25c0 + 0xf24b8,iVar2);
    }
    iVar7 = *(int *)(this + 0x1e0);
    if (iVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar5 = pthread_self(), pVar5 == *(pthread_t *)(this + 0xd34))) {
        *(int *)(iVar7 + 0xc6e8) = iVar2;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x12) = 1;
        iVar2 = commitSetBatch(this);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else if (*(int *)(iVar3 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f25e0 + 0xf2510,0x246e,DAT_000f25dc + 0xf2508);
        }
        goto LAB_000f255e;
      }
      MotParamStateMachine::paramWriteError(this_00);
      uVar6 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f25c8 + 0xf253a,DAT_000f25cc + 0xf253c,DAT_000f25d0 + 0xf253e,
                        0x2467,uVar6,0x12);
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f25d8 + 0xf2558,0x2468,DAT_000f25d4 + 0xf2550);
    }
    iVar2 = -0x16;
  }
LAB_000f255e:
  if (*piVar9 == local_34) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

