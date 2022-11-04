
/* qcamera::QCamera3QCfaRawChannel::initialize(cam_is_type_t) */

uint __thiscall
qcamera::QCamera3QCfaRawChannel::initialize(QCamera3QCfaRawChannel *this,cam_is_type_t param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  cam_is_type_t in_stack_ffffffdc;
  
  *(cam_is_type_t *)(this + 0x74) = param_1;
  uVar1 = QCamera3Channel::addStream
                    ((cam_stream_type_t)this,8,
                     SUB41(*(undefined4 *)
                            (QCameraParameters::FOCUS_MODES_MAP + *(int *)(this + 4) + 0x18),0),
                     *(cam_rotation_t *)(this + 0x94),(uchar)*(undefined4 *)(this + 0x98),
                     (ulonglong)CONCAT14(this[0x78],1),in_stack_ffffffdc,*(uint *)(this + 0x68));
  iVar3 = *(int *)(DAT_000a188c + 0xa183e);
  if ((0x7fffffff < uVar1) && (*(int *)(iVar3 + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000a1894 + 0xa1858,0xb81,DAT_000a1890 + 0xa1850);
  }
  uVar2 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
  *(undefined4 *)(this + 0x118048) = uVar2;
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a189c + 0xa1884,0xb85,DAT_000a1898 + 0xa1878,uVar2);
  }
  return uVar1;
}

