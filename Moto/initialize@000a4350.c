
/* qcamera::QCamera3ReprocessChannel::initialize(cam_is_type_t) */

void __thiscall
qcamera::QCamera3ReprocessChannel::initialize(QCamera3ReprocessChannel *this,cam_is_type_t param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack32;
  int local_18;
  
  piVar3 = *(int **)(DAT_000a43c4 + 0xa4364);
  local_18 = *piVar3;
  uStack32 = 0;
  local_2c = 1;
  local_28 = 0x1000000;
  iVar1 = (**(code **)(*(int *)(this + 0x4c) + 0x34))(*(undefined4 *)(this + 0x48),&local_2c,0,this)
  ;
  *(int *)(this + 0x54) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000a43c8 + 0xa4394) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a43d0 + 0xa43ac,0x1150,DAT_000a43cc + 0xa43a4);
    }
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = 0;
    *(cam_is_type_t *)(this + 0x74) = param_1;
  }
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

