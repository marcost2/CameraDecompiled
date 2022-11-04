
/* qcamera::QCameraChannel::addStream(qcamera::QCameraAllocator&, qcamera::QCameraHeapMemory*,
   qcamera::QCameraHeapMemory*, unsigned char, cam_padding_info_t*, void (*)(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*), void*, bool, bool, cam_rotation_t) */

int __thiscall
qcamera::QCameraChannel::addStream
          (QCameraChannel *this,QCameraAllocator *param_1,QCameraHeapMemory *param_2,
          QCameraHeapMemory *param_3,uchar param_4,cam_padding_info_t *param_5,FuncDef105 *param_6,
          void *param_7,bool param_8,bool param_9,cam_rotation_t param_10)

{
  int iVar1;
  int *this_00;
  int iVar2;
  int *piVar3;
  undefined3 in_stack_00000001;
  undefined3 in_stack_00000011;
  
  piVar3 = *(int **)(DAT_000cc620 + 0xcc544);
  iVar1 = *piVar3;
  if (*(uint *)(this + 0x1c) < 8) {
    this_00 = (int *)operator_new(0x100a0);
    QCameraStream::QCameraStream
              ((QCameraStream *)this_00,param_1,*(uint *)(this + 4),*(uint *)(this + 0x10),
               *(mm_camera_ops_t **)(this + 8),param_5,param_9,param_10);
    iVar2 = (**(code **)(*this_00 + 8))(this_00,param_2,param_3,_param_4,param_6,param_7,_param_8);
    if (iVar2 == 0) {
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x30));
      android::VectorImpl::add(this + 0x14);
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x30));
    }
    else {
      (**(code **)(*this_00 + 4))(this_00);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000cc624 + 0xcc558) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cc62c + 0xcc574,0xdb,DAT_000cc628 + 0xcc566,
                          *(uint *)(this + 0x1c),8);
    }
    if (param_2 == (QCameraHeapMemory *)0x0) {
      iVar2 = -0x16;
    }
    else {
      (**(code **)(*(int *)param_2 + 0xc))(param_2);
      (**(code **)(*(int *)param_2 + 0x2c))(param_2);
      iVar2 = -0x16;
    }
  }
  if (*piVar3 == iVar1) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

