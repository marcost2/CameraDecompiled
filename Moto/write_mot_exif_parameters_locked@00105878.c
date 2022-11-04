
/* qcamera::MotExif::write_mot_exif_parameters_locked() */

void __thiscall qcamera::MotExif::write_mot_exif_parameters_locked(MotExif *this)

{
  int *piVar1;
  undefined auStack60 [10];
  undefined auStack50 [2];
  undefined auStack48 [2];
  undefined auStack46 [2];
  undefined auStack44 [2];
  undefined auStack42 [2];
  int local_28;
  int local_24;
  
  piVar1 = *(int **)(DAT_001059d0 + 0x10589e);
  local_24 = *piVar1;
  local_28 = 0;
  (**(code **)(*(int *)this + 8))(this,0xc1a40a,&local_28,auStack42);
  if (local_28 != 0) {
    (**(code **)(*(int *)this + 0xc))(this,0xc1a40a,3,1,auStack42);
    local_28 = 0;
  }
  (**(code **)(*(int *)this + 8))(this,0xbfa408,&local_28,auStack44);
  if (local_28 != 0) {
    (**(code **)(*(int *)this + 0xc))(this,0xbfa408,3,1,auStack44);
    local_28 = 0;
  }
  (**(code **)(*(int *)this + 8))(this,0xc0a409,&local_28,auStack46);
  if (local_28 != 0) {
    (**(code **)(*(int *)this + 0xc))(this,0xc0a409,3,1,auStack46);
    local_28 = 0;
  }
  (**(code **)(*(int *)this + 8))(this,0xbda406,&local_28,auStack48);
  if (local_28 == 0) {
    __android_log_print(4,0,DAT_001059d4 + 0x105960,DAT_001059d8 + 0x105962);
  }
  else {
    (**(code **)(*(int *)this + 0xc))(this,0xbda406,3,1,auStack48);
    local_28 = 0;
  }
  (**(code **)(*(int *)this + 8))(this,0xbaa403,&local_28,auStack50);
  if (local_28 != 0) {
    (**(code **)(*(int *)this + 0xc))(this,0xbaa403,3,1,auStack50);
    local_28 = 0;
  }
  (**(code **)(*(int *)this + 8))(this,0xbba404,&local_28,auStack60);
  if (local_28 != 0) {
    (**(code **)(*(int *)this + 0xc))(this,0xbba404,5,1,auStack60);
    local_28 = 0;
  }
  if (*piVar1 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

