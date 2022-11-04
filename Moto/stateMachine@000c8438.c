
/* qcamera::QCameraStateMachine::stateMachine(qcamera::qcamera_sm_evt_enum_t, void*) */

undefined4 __thiscall
qcamera::QCameraStateMachine::stateMachine
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(DAT_000c8500 + 0xc8448) + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000c8508 + 0xc8466,0x12e,DAT_000c8504 + 0xc8458,
                        *(undefined4 *)(this + 8),param_1);
  }
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    uVar1 = (*(code *)PTR_procEvtPreviewStoppedState_0011a008)(this,param_1,param_2);
    return uVar1;
  case 1:
    uVar1 = (*(code *)PTR_procEvtPreviewReadyState_0011a00c)(this,param_1,param_2);
    return uVar1;
  case 2:
    uVar1 = (*(code *)PTR_procEvtPreviewingState_0011a010)(this,param_1,param_2);
    return uVar1;
  case 3:
    uVar1 = (*(code *)PTR_procEvtPrepareSnapshotState_0011a014)(this,param_1,param_2);
    return uVar1;
  case 4:
    uVar1 = (*(code *)PTR_procEvtPicTakingState_0011a018)(this,param_1,param_2);
    return uVar1;
  case 5:
    uVar1 = (*(code *)PTR_procEvtRecordingState_0011a01c)(this,param_1,param_2);
    return uVar1;
  case 6:
    uVar1 = (*(code *)PTR_procEvtVideoPicTakingState_0011a020)(this,param_1,param_2);
    return uVar1;
  case 7:
    uVar1 = (*(code *)PTR_procEvtPreviewPicTakingState_0011a024)(this,param_1,param_2);
    return uVar1;
  default:
    return 0;
  }
}

