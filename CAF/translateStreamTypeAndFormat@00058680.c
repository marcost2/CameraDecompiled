
/* qcamera::QCamera3ProcessingChannel::translateStreamTypeAndFormat(camera3_stream*,
   cam_stream_type_t&, cam_format_t&) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::translateStreamTypeAndFormat
          (QCamera3ProcessingChannel *this,camera3_stream *param_1,cam_stream_type_t *param_2,
          cam_format_t *param_3)

{
  undefined4 uVar1;
  cam_format_t cVar2;
  QCamera3Channel *this_00;
  cam_stream_type_t cVar3;
  
  uVar1 = 0xffffffea;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0x20:
  case 0x24:
  case 0x25:
    *param_2 = 8;
    cVar2 = 0x1c;
    goto LAB_000586ea;
  default:
    goto switchD_00058698_caseD_21;
  case 0x22:
    if ((int)(*(uint *)(param_1 + 0x10) << 0xf) < 0) {
      this_00 = (QCamera3Channel *)0x4;
      *param_2 = 4;
      cVar3 = 4;
    }
    else {
      if (((*(uint *)(param_1 + 0x10) & 0x60000) == 0x60000) || (*(int *)param_1 - 1U < 2))
      goto LAB_000586d0;
      this_00 = (QCamera3Channel *)0x1;
      *param_2 = 1;
      cVar3 = 1;
    }
    break;
  case 0x23:
    if (*(int *)param_1 == 1) {
LAB_000586d0:
      this_00 = (QCamera3Channel *)0x3;
      *param_2 = 3;
      cVar3 = 3;
    }
    else {
      this_00 = (QCamera3Channel *)0x5;
      *param_2 = 5;
      cVar3 = 5;
    }
  }
  cVar2 = QCamera3Channel::getStreamDefaultFormat(this_00,cVar3);
LAB_000586ea:
  *param_3 = cVar2;
  if (*(int *)(*(int *)(DAT_00058720 + 0x586f2) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  uVar1 = 0;
switchD_00058698_caseD_21:
  return uVar1;
}

