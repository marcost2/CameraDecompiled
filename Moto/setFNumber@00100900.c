
/* BSTBokehParam::setFNumber(float) */

void __thiscall BSTBokehParam::setFNumber(BSTBokehParam *this,float param_1)

{
  float in_r1;
  undefined4 in_s1;
  undefined8 uVar1;
  undefined4 in_s5;
  
  uVar1 = FloatVectorMin(CONCAT44(in_s1,(uint)(DAT_00100960 != (double)in_r1) * DAT_00100968 +
                                        (uint)(DAT_00100960 == (double)in_r1) * (int)in_r1),
                         CONCAT44(in_s5,0x41800000),2,0x20);
  *(int *)(this + 8) = (int)uVar1;
  if (*(int *)(*(int *)(DAT_0010096c + 0x10092e) + 0x2c) != 0) {
    mm_camera_debug_log((int)uVar1,1,4,DAT_00100970 + 0x10094e,0x54,DAT_00100978 + 0x10094c,
                        DAT_00100974 + 0x10094a,DAT_00100970 + 0x10094e);
    return;
  }
  return;
}

