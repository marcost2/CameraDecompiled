
/* qcamera::QCameraStream::calcOffset(cam_stream_info_t*) */

void __thiscall qcamera::QCameraStream::calcOffset(QCameraStream *this,cam_stream_info_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 uStack28;
  int local_14;
  
  piVar3 = *(int **)(DAT_000d05c0 + 0xd04a6);
  local_14 = *piVar3;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uStack28 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  local_20 = uVar2;
  if ((int)((uint)(byte)param_1[0x1b8] << 0x1c) < 0) {
    if (iVar1 != 4) {
      if (*(int *)(param_1 + 0x1f0) == 8 || *(int *)(param_1 + 0x1f0) == 2) {
        local_20 = *(undefined4 *)(param_1 + 0x10);
        uStack28 = uVar2;
      }
      goto LAB_000d04d2;
    }
switchD_000d04d8_caseD_4:
    uVar2 = mm_stream_calc_offset_video(*(undefined4 *)(param_1 + 8),&local_20,param_1 + 0x14);
  }
  else {
LAB_000d04d2:
    switch(iVar1) {
    case 1:
    case 5:
      uVar2 = mm_stream_calc_offset_preview(param_1,&local_20,this + 0x2a8,param_1 + 0x14);
      break;
    case 2:
      uVar2 = mm_stream_calc_offset_post_view(param_1,&local_20,this + 0x2a8,param_1 + 0x14);
      break;
    case 3:
      uVar2 = mm_stream_calc_offset_snapshot
                        (*(undefined4 *)(param_1 + 8),&local_20,this + 0x2a8,param_1 + 0x14);
      break;
    case 4:
      goto switchD_000d04d8_caseD_4;
    default:
      if (*(int *)(*(int *)(DAT_000d05c4 + 0xd0548) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d05cc + 0xd0562,0x358,DAT_000d05c8 + 0xd0558,iVar1);
      }
      uVar2 = 0xffffffff;
      break;
    case 7:
      uVar2 = mm_stream_calc_offset_metadata(&local_20,this + 0x2a8,param_1 + 0x14);
      break;
    case 8:
      uVar2 = mm_stream_calc_offset_raw
                        (*(undefined4 *)(param_1 + 8),&local_20,this + 0x2a8,param_1 + 0x14);
      break;
    case 9:
      uVar2 = mm_stream_calc_offset_postproc(param_1,this + 0x2a8,param_1 + 0x14);
      break;
    case 0xb:
      uVar2 = mm_stream_calc_offset_analysis
                        (*(undefined4 *)(param_1 + 8),&local_20,this + 0x2a8,param_1 + 0x14);
    }
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

