
/* qcamera::QCamera3HardwareInterface::configureStreams(camera3_stream_configuration*) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::configureStreams
          (QCamera3HardwareInterface *this,camera3_stream_configuration *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *extraout_r1;
  int *piVar3;
  undefined4 in_stack_ffffffd4;
  ScopedTraceDbg aSStack40 [12];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0003cae0 + 0x3ca90);
  local_1c = *piVar3;
  iVar1 = DAT_0003cae4 + 0x3ca9a;
  ScopedTraceDbg::ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffd4,iVar1),(char *)param_1);
  QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x98));
  uVar2 = configureStreamsPerfLocked(this,param_1);
  QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0x98));
  ScopedTraceDbg::_ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffd4,iVar1),extraout_r1);
  if (*piVar3 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

