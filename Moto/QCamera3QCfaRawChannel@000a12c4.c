
/* qcamera::QCamera3QCfaRawChannel::QCamera3QCfaRawChannel(unsigned int, unsigned int,
   mm_camera_ops_t*, cam_dimension_t, cam_padding_info_t*, void*, unsigned long long, unsigned int)
    */

QCamera3QCfaRawChannel * __thiscall
qcamera::QCamera3QCfaRawChannel::QCamera3QCfaRawChannel
          (QCamera3QCfaRawChannel *this,uint param_1,uint param_2,mm_camera_ops_t *param_3,
          cam_dimension_t param_4,cam_padding_info_t *param_5,void *param_6,ulonglong param_7,
          uint param_8)

{
  undefined4 uVar1;
  int *piVar2;
  undefined auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined3 in_stack_00000001;
  undefined4 in_stack_00000018;
  pthread_condattr_t pStack48;
  int local_2c;
  
  auVar3 = ZEXT816(0);
  piVar2 = *(int **)(DAT_000a1418 + 0xa12dc);
  local_2c = *piVar2;
  *(uint *)(this + 0x54) = param_2;
  *(int *)this = *(int *)(DAT_000a141c + 0xa12e8) + 8;
  this[0x50] = (QCamera3QCfaRawChannel)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(uint *)(this + 0x48) = param_1;
  *(mm_camera_ops_t **)(this + 0x4c) = param_3;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 4) = (undefined4)param_7;
                    /* WARNING: Load size is inaccurate */
  uVar4 = *param_6;
  uVar5 = *(undefined8 *)((int)param_6 + 8);
  uVar6 = *(undefined8 *)((int)param_6 + 0x14);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)((int)param_6 + 0xc);
  *(undefined8 *)(this + 0x1c) = uVar6;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(uint *)(this + 0x6c) = param_8;
  *(undefined4 *)(this + 0x68) = param_7._4_4_;
  this[0x7c] = (QCamera3QCfaRawChannel)0x1;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = in_stack_00000018;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  uVar1 = BSTLiveBokeh::createInstance();
  *(undefined4 *)(this + 0x118048) = 0;
  *(undefined4 *)(this + 0x118044) = 0;
  *(undefined4 *)(this + 0x118034) = 0;
  *(undefined4 *)(this + 0x118030) = 0;
  *(undefined4 *)(this + 0x90) = uVar1;
  *(cam_padding_info_t **)(this + 0x98) = param_5;
  *(undefined4 *)(this + 0x94) = _param_4;
  *(int *)this = *(int *)(DAT_000a1420 + 0xa138c) + 8;
  this[0x2e4] = (QCamera3QCfaRawChannel)0x0;
  uVar4 = SUB168(auVar3,0);
  *(undefined8 *)(this + 0x2d4) = uVar4;
  uVar5 = SUB168(auVar3 >> 0x40,0);
  *(undefined8 *)(this + 0x2dc) = uVar5;
  *(undefined8 *)(this + 0x2c4) = uVar4;
  *(undefined8 *)(this + 0x2cc) = uVar5;
  *(undefined8 *)(this + 0x2b4) = uVar4;
  *(undefined8 *)(this + 700) = uVar5;
  this[0x530] = (QCamera3QCfaRawChannel)0x0;
  *(undefined8 *)(this + 0x308) = uVar4;
  *(undefined8 *)(this + 0x310) = uVar5;
  *(undefined8 *)(this + 0x2f8) = uVar4;
  *(undefined8 *)(this + 0x300) = uVar5;
  *(undefined8 *)(this + 0x2e8) = uVar4;
  *(undefined8 *)(this + 0x2f0) = uVar5;
  pthread_condattr_init(&pStack48);
  pthread_condattr_setclock(&pStack48,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x11803c),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x118040),&pStack48);
  pthread_condattr_destroy(&pStack48);
  *(undefined4 *)(this + 0x118038) = 0;
  if (*piVar2 == local_2c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

