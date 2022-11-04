
/* BokehImpl::init() */

int __thiscall BokehImpl::init(BokehImpl *this,EVP_PKEY_CTX *ctx)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  BokehImpl *__src;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_a4;
  undefined4 local_a0;
  size_t local_88;
  char acStack132 [92];
  int local_28;
  
  piVar10 = *(int **)(DAT_000ffb50 + 0xff812);
  local_28 = *piVar10;
  iVar11 = *(int *)(DAT_000ffb54 + 0xff820);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ffb58 + 0xff834,0x47,DAT_000ffb60 + 0xff838,
                        DAT_000ffb5c + 0xff836,DAT_000ffb58 + 0xff834,*(undefined4 *)(this + 4));
  }
  this[0xc] = (BokehImpl)0x0;
  iVar8 = DAT_000ffb68 + 0xff85c;
  property_get(DAT_000ffb64 + 0xff85e,acStack132,iVar8);
  iVar3 = atoi(acStack132);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  this[0x418] = SUB41(iVar3,0);
  property_get(DAT_000ffb6c + 0xff87c,acStack132,iVar8);
  iVar3 = atoi(acStack132);
  property_get(DAT_000ffb70 + 0xff890,acStack132,DAT_000ffb74 + 0xff892);
  property_get(DAT_000ffb78 + 0xff89e,acStack132,iVar8);
  iVar8 = atoi(acStack132);
  if (iVar3 != 0) {
    this[0xc] = (BokehImpl)0x0;
    iVar3 = -1;
    goto LAB_000ffb38;
  }
  __src = this + 0xd;
  iVar3 = load_bokeh_otp_from_hardware((uchar *)__src,(int *)&local_88);
  if (iVar3 == -1) {
    if (*(int *)(iVar11 + 0x20) == 0) {
LAB_000ffa9e:
      iVar3 = -1;
      goto LAB_000ffb38;
    }
    iVar3 = *(int *)(this + 4);
    iVar8 = DAT_000ffb7c + 0xff92c;
    iVar11 = DAT_000ffb80 + 0xff92e;
    iVar7 = DAT_000ffb84 + 0xff930;
    uVar5 = 1;
    uVar6 = 0x62;
  }
  else {
    if (*(int *)(this + 4) == 0) {
      uVar2 = 0x1032;
      uVar1 = 0xc1d;
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000ffb8c + 0xff960,0x72,DAT_000ffb94 + 0xff964,
                            DAT_000ffb90 + 0xff962,DAT_000ffb8c + 0xff960,0x1032,0xc1d,0x640,0x4b0);
      }
      local_a0 = 1;
      local_a4 = 0;
      iVar3 = DAT_000ffb88 + 0xff99e;
    }
    else {
      uVar2 = 0x1040;
      uVar1 = 0xc30;
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000ffb98 + 0xff8f0,0x80,DAT_000ffba0 + 0xff8f4,
                            DAT_000ffb9c + 0xff8f2,DAT_000ffb98 + 0xff8f0,0x1040,0xc30,0x640,0x4b0);
      }
      local_a0 = 0;
      local_a4 = 1;
      iVar3 = DAT_000ffba4 + 0xff990;
    }
    uVar4 = (**(code **)(*(int *)this + 0xc))(this);
    if (*(int *)(iVar11 + 0x2c) != 0) {
      iVar9 = DAT_000ffba8 + 0xff9ca;
      iVar7 = DAT_000ffbac + 0xff9d2;
      mm_camera_debug_log(1,4,iVar9,0x85,DAT_000ffbb0 + 0xff9d8,iVar7,iVar9,uVar4 >> 0x18,
                          (uVar4 << 8) >> 0x18,(uVar4 << 0x10) >> 0x18,uVar4 & 0xff);
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,iVar9,0x86,DAT_000ffbb4 + 0xff9f0,iVar7,iVar9,
                            *(undefined4 *)(this + 4),local_88,this[0xd],iVar3);
      }
    }
    if (iVar8 != 0) {
      dbe2SetDebugFlag(0,1);
    }
    iVar3 = dbe2Init(iVar3,local_a4,__src,local_88,1,uVar2,uVar1,0x640,0x4b0,2,1,local_a0,this + 8);
    if (iVar3 == 0) {
      *(short *)(this + 0x448) = (short)local_88;
      *(undefined2 *)(this + 0x432) = 0x102;
      *(undefined4 *)(this + 0x42e) = 0x4b00640;
      *(undefined2 *)(this + 0x42c) = uVar1;
      iVar3 = 0;
      *(undefined2 *)(this + 0x42a) = uVar2;
      this[0x420] = (BokehImpl)0x1;
      this[0x419] = (BokehImpl)0x0;
      this[0xc] = (BokehImpl)0x1;
      __aeabi_memcpy8(this + 0x44a,__src,local_88);
      if (*(int *)(iVar11 + 0x2c) != 0) {
        uVar5 = dbe2GetCfgVersion(*(undefined4 *)(this + 8));
        iVar3 = DAT_000ffbcc + 0xffaf8;
        iVar8 = DAT_000ffbd0 + 0xffafa;
        mm_camera_debug_log(1,4,iVar3,0xa3,DAT_000ffbd4 + 0xffafc,iVar8,iVar3,uVar5);
        if (*(int *)(iVar11 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,iVar3,0xa4,DAT_000ffbd8 + 0xffb22,iVar8,iVar3,
                              *(undefined4 *)(this + 4));
        }
        iVar3 = 0;
      }
      goto LAB_000ffb38;
    }
    if (*(int *)(iVar11 + 0x2c) == 0) goto LAB_000ffa9e;
    iVar8 = DAT_000ffbb8 + 0xffa78;
    iVar11 = DAT_000ffbbc + 0xffa7a;
    iVar7 = DAT_000ffbc0 + 0xffa7c;
    uVar5 = 4;
    uVar6 = 0x92;
  }
  mm_camera_debug_log(1,uVar5,iVar8,uVar6,iVar7,iVar11,iVar8,iVar3);
  iVar3 = -1;
LAB_000ffb38:
  if (*piVar10 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

