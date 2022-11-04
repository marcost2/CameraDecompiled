
/* qcamera::QCamera3Channel::getStreamDefaultFormat(cam_stream_type_t) */

int __thiscall
qcamera::QCamera3Channel::getStreamDefaultFormat(QCamera3Channel *this,cam_stream_type_t param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  iVar2 = *(int *)(this + 4);
  switch(param_1) {
  case 1:
  case 4:
    return 7;
  case 8:
    return *(int *)(QCameraParameters::FOCUS_MODES_MAP + iVar2 + 0x18);
  case 9:
    if ((QCameraParameters::SCENE_MODES_MAP[iVar2 + 0x57] == '\0') ||
       ((char)QCameraParameters::SCENE_MODES_MAP[iVar2 + 0x5a] < '\x02')) {
      return 2;
    }
    if ((*(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar2 + 0x18) & 0xfffffffc) != 0x1c) {
      if (*(int *)(*(int *)(DAT_0009dbdc + 0x9dbb4) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_0009dbe4 + 0x9dbd0,0x2d3,DAT_0009dbe0 + 0x9dbc8);
        return 0x47;
      }
      return 0x47;
    }
    iVar1 = *(uint *)(QCameraParameters::FOCUS_MODES_MAP + iVar2 + 0x18) + 0x28;
  }
  return iVar1;
}

