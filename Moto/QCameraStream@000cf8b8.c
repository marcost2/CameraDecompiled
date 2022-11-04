
/* qcamera::QCameraStream::QCameraStream(qcamera::QCameraAllocator&, unsigned int, unsigned int,
   mm_camera_ops_t*, cam_padding_info_t*, bool, cam_rotation_t) */

QCameraStream * __thiscall
qcamera::QCameraStream::QCameraStream
          (QCameraStream *this,QCameraAllocator *param_1,uint param_2,uint param_3,
          mm_camera_ops_t *param_4,cam_padding_info_t *param_5,bool param_6,cam_rotation_t param_7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined3 in_stack_00000009;
  pthread_condattr_t pStack52;
  pthread_condattr_t pStack48;
  int local_2c;
  
  auVar3 = ZEXT816(0);
  piVar2 = *(int **)(DAT_000cfad8 + 0xcf8d2);
  local_2c = *piVar2;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(int *)this = *(int *)(DAT_000cfadc + 0xcf8e8) + 8;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0x8e] = (QCameraStream)0x0;
  *(undefined2 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(mm_camera_ops_t **)(this + 0x6c) = param_4;
  *(uint *)(this + 0x60) = param_2;
  *(uint *)(this + 100) = param_3;
  *(undefined4 *)(this + 0x68) = 0;
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0xa0),*(FuncDef58 **)(DAT_000cfae0 + 0xcf910),this);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0xc4));
  *(undefined2 *)(this + 0x10084) = 0;
  *(undefined4 *)(this + 0x10080) = 0;
  *(undefined4 *)(this + 0x10074) = 0;
  this[0x10061] = (QCameraStream)0x0;
  this[0x10060] = (QCameraStream)param_6;
  *(undefined4 *)(this + 0x2e4) = 0;
  this[0x2e2] = (QCameraStream)0x0;
  *(undefined2 *)(this + 0x2e0) = 0;
  *(cam_rotation_t *)(this + 0x2d4) = param_7;
  *(QCameraAllocator **)(this + 0x114) = param_1;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(longlong *)(this + 0x104) = SUB168(auVar3,0);
  *(longlong *)(this + 0x10c) = SUB168(auVar3 >> 0x40,0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10094),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init(&pStack48);
  pthread_condattr_setclock(&pStack48,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x10098),&pStack48);
  pthread_condattr_destroy(&pStack48);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(DAT_000cfae4 + 0xcf9a2);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(DAT_000cfae8 + 0xcf9ac);
  uVar1 = *(undefined4 *)(DAT_000cfaf0 + 0xcf9b8);
  if (_param_6 != 0) {
    uVar1 = *(undefined4 *)(DAT_000cfaec + 0xcf9ba);
  }
  *(undefined4 *)(this + 0x80) = uVar1;
  uVar1 = *(undefined4 *)(DAT_000cfaf8 + 0xcf9cc);
  if (_param_6 != 0) {
    uVar1 = *(undefined4 *)(DAT_000cfaf4 + 0xcf9ce);
  }
  *(undefined4 *)(this + 0x7c) = uVar1;
  uVar1 = *(undefined4 *)(DAT_000cfafc + 0xcf9de);
  *(QCameraStream **)(this + 0x74) = this;
  *(undefined4 *)(this + 0x78) = uVar1;
  __aeabi_memclr8(this + 0x120,0x188);
  uVar4 = *(undefined8 *)(param_5 + 8);
  uVar5 = *(undefined8 *)(param_5 + 0xc);
  uVar6 = *(undefined8 *)(param_5 + 0x14);
  *(undefined8 *)(this + 0x2a8) = *(undefined8 *)param_5;
  *(undefined8 *)(this + 0x2b0) = uVar4;
  *(longlong *)(this + 0x2e8) = SUB168(auVar3,0);
  uVar4 = SUB168(auVar3 >> 0x40,0);
  *(undefined8 *)(this + 0x2f0) = uVar4;
  *(longlong *)(this + 0x2c4) = SUB168(auVar3,0);
  *(undefined8 *)(this + 0x2cc) = uVar4;
  *(undefined8 *)(this + 0x2b4) = uVar5;
  *(undefined8 *)(this + 700) = uVar6;
  __aeabi_memclr8(this + 0x2f8,0x7eb4);
  __aeabi_memclr8(this + 0x81ac,0x7eb4);
  *(undefined4 *)(this + 0x10070) = 0;
  *(undefined4 *)(this + 0x1006c) = 0;
  *(undefined4 *)(this + 0x1007c) = 0;
  *(undefined4 *)(this + 0x10078) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x2d8),(pthread_mutexattr_t *)0x0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x2dc),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined2 *)(this + 0x1c) = 0xffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x5a) = 0;
  uVar4 = SUB168(auVar3,0);
  *(undefined8 *)(this + 0x48) = uVar4;
  uVar5 = SUB168(auVar3 >> 0x40,0);
  *(undefined8 *)(this + 0x50) = uVar5;
  *(undefined4 *)(this + 0x56) = 0;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x30) = uVar5;
  pthread_condattr_init(&pStack52);
  pthread_condattr_setclock(&pStack52,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10064),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x10068),&pStack52);
  pthread_condattr_destroy(&pStack52);
  if (*piVar2 == local_2c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

