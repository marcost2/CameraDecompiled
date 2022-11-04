
/* BokehImpl::setDepthMap(unsigned char*, unsigned int) */

undefined4 __thiscall BokehImpl::setDepthMap(BokehImpl *this,uchar *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == (uchar *)0x0 || param_2 == 0) {
    return 0xffffffff;
  }
  iVar1 = dbe2SetDisparityData(*(undefined4 *)(this + 8),param_1,param_1 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(DAT_001000fc + 0x1000c8) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_00100100 + 0x1000d6,0x14e,DAT_00100108 + 0x1000da,
                          DAT_00100104 + 0x1000d8,DAT_00100100 + 0x1000d6,iVar1);
    }
    return 0xffffffff;
  }
  return 0;
}

