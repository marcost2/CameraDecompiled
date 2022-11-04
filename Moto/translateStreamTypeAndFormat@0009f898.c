
/* qcamera::QCamera3ProcessingChannel::translateStreamTypeAndFormat(camera3_stream*,
   cam_stream_type_t&, cam_format_t&) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::translateStreamTypeAndFormat
          (QCamera3ProcessingChannel *this,camera3_stream *param_1,cam_stream_type_t *param_2,
          cam_format_t *param_3)

{
  undefined4 uVar1;
  cam_format_t cVar2;
  cam_stream_type_t cVar3;
  
  uVar1 = 0xffffffea;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0x20:
  case 0x24:
  case 0x25:
    *param_2 = 8;
    cVar2 = *(cam_format_t *)(QCameraParameters::FOCUS_MODES_MAP + *(int *)(this + 4) + 0x18);
    break;
  default:
    goto switchD_0009f8ae_caseD_21;
  case 0x22:
    if ((int)(*(uint *)(param_1 + 0x10) << 0xf) < 0) {
      cVar3 = 4;
    }
    else {
      if (((*(uint *)(param_1 + 0x10) & 0x60000) == 0x60000) || (*(int *)param_1 - 1U < 2))
      goto LAB_0009f8ee;
      cVar3 = 1;
    }
    *param_2 = cVar3;
    cVar2 = 7;
    break;
  case 0x23:
    if (*(int *)param_1 == 1) {
LAB_0009f8ee:
      cVar3 = 3;
    }
    else {
      cVar3 = 5;
    }
    *param_2 = cVar3;
    cVar2 = 2;
  }
  *param_3 = cVar2;
  if (*(int *)(*(int *)(DAT_0009f934 + 0x9f908) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009f93c + 0x9f92a,0x691,DAT_0009f938 + 0x9f916,
                        *(undefined4 *)(param_1 + 0xc),*param_2,cVar2);
  }
  uVar1 = 0;
switchD_0009f8ae_caseD_21:
  return uVar1;
}

