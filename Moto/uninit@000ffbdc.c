
/* BokehImpl::uninit() */

undefined4 __thiscall BokehImpl::uninit(BokehImpl *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ffc44 + 0xffbe8);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ffc48 + 0xffbf8,0xab,DAT_000ffc50 + 0xffbfc,
                        DAT_000ffc4c + 0xffbfa,DAT_000ffc48 + 0xffbf8,*(undefined4 *)(this + 4));
  }
  if (this[0xc] != (BokehImpl)0x0) {
    dbe2Release(*(undefined4 *)(this + 8));
    this[0xc] = (BokehImpl)0x0;
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000ffc54 + 0xffc2a,0xb0,DAT_000ffc5c + 0xffc2e,
                        DAT_000ffc58 + 0xffc2c,DAT_000ffc54 + 0xffc2a,*(undefined4 *)(this + 4));
  }
  return 0;
}

