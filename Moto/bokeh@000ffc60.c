
/* BokehImpl::bokeh(BokehOneData*, BokehOneData*, BokehOneData*) */

void __thiscall
BokehImpl::bokeh(BokehImpl *this,BokehOneData *param_1,BokehOneData *param_2,BokehOneData *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_ac;
  undefined4 uStack168;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack148;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack120;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack100;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack88;
  undefined4 local_54;
  undefined4 uStack80;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 local_38;
  int local_34;
  
  fVar1 = DAT_000ffebc;
  piVar7 = *(int **)(DAT_000ffec0 + 0xffc76);
  local_34 = *piVar7;
  if (param_1 == (BokehOneData *)0x0 || param_2 == (BokehOneData *)0x0) {
    if (*(int *)(*(int *)(DAT_000ffec4 + 0xffc86) + 0x20) == 0) {
LAB_000ffdde:
      uVar5 = 0xffffffff;
      goto LAB_000ffea2;
    }
    uVar5 = 0xbc;
    iVar2 = DAT_000ffecc + 0xffc9a;
    iVar3 = DAT_000ffed0 + 0xffc9c;
    iVar4 = DAT_000ffec8 + 0xffc9e;
  }
  else {
    if (this[0xc] != (BokehImpl)0x0) {
      *(short *)(this + 0x426) = (short)*(undefined4 *)(param_1 + 8);
      *(short *)(this + 0x428) = (short)*(undefined4 *)(param_1 + 0xc);
      *(short *)(this + 0x434) = (short)*(undefined4 *)(param_1 + 0x44);
      *(short *)(this + 0x436) = (short)*(undefined4 *)(param_1 + 0x48);
      *(short *)(this + 0x438) = (short)*(undefined4 *)(param_1 + 0x40);
      *(short *)(this + 0x43a) = (short)*(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(this + 0x43c) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(this + 0x440) = *(undefined4 *)(param_1 + 0x60);
      *(short *)(this + 0x424) = (short)*(undefined4 *)(param_1 + 0x50);
      *(float *)(this + 0x444) = ROUND(*(float *)(param_1 + 0x4c) * fVar1);
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      local_9c = *(undefined4 *)(param_1 + 0x3c);
      local_88 = *(undefined4 *)(param_1 + 0x40);
      iVar3 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x48);
      uStack168 = *(undefined4 *)(param_1 + 0x14);
      local_5c = *(undefined4 *)(param_1 + 0x18);
      local_a4 = *(undefined4 *)(param_1 + 8);
      local_a0 = *(undefined4 *)(param_1 + 0xc);
      local_98 = *(undefined4 *)(param_1 + 0x24);
      uStack148 = *(undefined4 *)(param_1 + 0x30);
      local_68 = *(undefined4 *)(param_1 + 0x60);
      uStack100 = *(undefined4 *)(param_1 + 100);
      local_84 = *(undefined4 *)(param_2 + 0x18);
      local_80 = *(undefined4 *)(param_2 + 0x14);
      local_7c = *(undefined4 *)(param_2 + 8);
      uStack120 = *(undefined4 *)(param_2 + 0xc);
      local_70 = *(undefined4 *)(param_2 + 0x24);
      local_6c = *(undefined4 *)(param_2 + 0x30);
      local_74 = *(undefined4 *)(param_2 + 0x3c);
      local_ac = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(this + 0x414) = 1;
      if (this[0x418] != (BokehImpl)0x0) {
        iVar2 = -iVar2;
        iVar3 = -iVar3;
      }
      if (*(int *)(this + 4) == 0) {
        iVar6 = *(int *)(this + 0x410);
        iVar4 = iVar6 + 1;
        if (0x1d < iVar6) {
          iVar4 = 0;
        }
        *(int *)(this + 0x410) = iVar4;
        if (iVar6 != 0) {
          iVar6 = 1;
        }
        uVar8 = 0x20;
      }
      else {
        iVar6 = 0;
        uVar8 = 0x80;
      }
      local_60 = local_88;
      uStack88 = uStack168;
      local_54 = local_a4;
      uStack80 = local_a0;
      local_4c = local_9c;
      local_48 = local_98;
      local_44 = uStack148;
      local_40 = local_68;
      uStack60 = uStack100;
      local_38 = local_88;
      iVar4 = dbe2PrepareComputation
                        (*(undefined4 *)(this + 8),&local_5c,&local_84,0x3f800000,local_88,iVar6,1);
      iVar6 = *(int *)(DAT_000ffee4 + 0xffe18);
      if ((iVar4 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000ffee8 + 0xffe2e,0x10a,DAT_000ffef0 + 0xffe32,
                            DAT_000ffeec + 0xffe30,DAT_000ffee8 + 0xffe2e,*(undefined4 *)(this + 4),
                            iVar4);
      }
      if (*(int *)(this + 4) == 1) {
        *(short *)(this + 0x422) = (short)*(undefined4 *)(this + 0x414);
        iVar4 = (**(code **)(*(int *)this + 0x20))
                          (this,*(undefined4 *)(param_2 + 0x18),param_2 + 0x14);
        if ((iVar4 == -1) && (*(int *)(iVar6 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000ffef4 + 0xffe80,0x10f,DAT_000ffefc + 0xffe7e,
                              DAT_000ffef8 + 0xffe7c,DAT_000ffef4 + 0xffe80);
        }
      }
      dbe2BokehImage(*(undefined4 *)(this + 8),iVar3,iVar2,uVar8,uVar5,&local_ac);
      uVar5 = 0;
      goto LAB_000ffea2;
    }
    if (*(int *)(*(int *)(DAT_000ffed4 + 0xffdb8) + 0x20) == 0) goto LAB_000ffdde;
    uVar5 = 0xc0;
    iVar4 = DAT_000ffed8 + 0xffdc8;
    iVar2 = DAT_000ffedc + 0xffdca;
    iVar3 = DAT_000ffee0 + 0xffdcc;
  }
  mm_camera_debug_log(1,1,iVar4,uVar5,iVar3,iVar2,iVar4);
  uVar5 = 0xffffffff;
LAB_000ffea2:
  if (*piVar7 != local_34) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

