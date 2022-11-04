
/* qcamera::QCamera3PicChannel::initialize(cam_is_type_t) */

int __thiscall
qcamera::QCamera3PicChannel::initialize(QCamera3PicChannel *this,cam_is_type_t param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  cam_is_type_t in_stack_ffffffd4;
  
  iVar1 = *(int *)(this + 0x14e0);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000a341c + 0xa33ca) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a3424 + 0xa33e2,0xf29,DAT_000a3420 + 0xa33da);
    }
    iVar4 = -0x13;
  }
  else {
    iVar4 = 0;
    if (*(int *)(this + 0x44) == 0) {
      *(cam_is_type_t *)(this + 0x74) = param_1;
      *(undefined4 *)(this + 0x317c) = *(undefined4 *)(iVar1 + 0x14);
      iVar4 = QCamera3Channel::addStream
                        ((cam_stream_type_t)this,*(cam_format_t *)(this + 0x14e8),
                         SUB41(*(undefined4 *)(this + 0x14ec),0),*(cam_rotation_t *)(this + 0x3180),
                         (uchar)*(undefined4 *)(this + 0x3184),
                         (ulonglong)CONCAT14(*(undefined *)(iVar1 + 0x14),1),in_stack_ffffffd4,
                         *(uint *)(this + 0x68));
      if (iVar4 == 0) {
        iVar4 = QCamera3ProcessingChannel::initialize((cam_is_type_t)this);
        if (iVar4 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000a3434 + 0xa33fa) + 0x20) == 0) {
          return iVar4;
        }
        uVar3 = 0xf46;
        iVar1 = DAT_000a3438 + 0xa340a;
        iVar2 = DAT_000a343c + 0xa3414;
      }
      else {
        if (*(int *)(*(int *)(DAT_000a3428 + 0xa33aa) + 0x20) == 0) {
          return iVar4;
        }
        uVar3 = 0xf3e;
        iVar1 = DAT_000a342c + 0xa33ba;
        iVar2 = DAT_000a3430 + 0xa33c4;
      }
      mm_camera_debug_log(1,1,iVar2,uVar3,iVar1,iVar4);
    }
  }
  return iVar4;
}

