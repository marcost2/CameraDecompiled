
/* qcamera::QCamera2HardwareInterface::QCamera2HardwareInterface(unsigned int) */

QCamera2HardwareInterface * __thiscall
qcamera::QCamera2HardwareInterface::QCamera2HardwareInterface
          (QCamera2HardwareInterface *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint *puVar7;
  QCameraCmdThread *this_00;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 uVar13;
  pthread_condattr_t pStack156;
  undefined8 local_98;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined4 uStack80;
  undefined4 local_4c;
  undefined4 uStack72;
  undefined8 uStack68;
  int local_3c;
  
  piVar1 = *(int **)(DAT_000b0ec4 + 0xb0c58);
  local_3c = *piVar1;
  *(undefined4 *)(this + 0x4a8) = 0;
  this[0x4a4] = (QCamera2HardwareInterface)0x0;
  this[100] = (QCamera2HardwareInterface)0x0;
  *(uint *)(this + 0x5c) = param_1;
  *(undefined4 *)(this + 0x60) = 0;
  iVar2 = *(int *)(DAT_000b0ec8 + 0xb0c74);
  *(int *)(this + 0xc) = iVar2 + 0x54;
  *(int *)this = iVar2 + 8;
  *(int *)(this + 4) = iVar2 + 0x40;
  QCameraParametersIntf::QCameraParametersIntf((QCameraParametersIntf *)(this + 0x4ac));
  this[0x4d8] = (QCamera2HardwareInterface)0x1;
  *(undefined4 *)(this + 0x4cc) = 0;
  *(undefined4 *)(this + 0x4d0) = 0;
  *(undefined4 *)(this + 0x4d4) = 0;
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  QCameraStateMachine::QCameraStateMachine((QCameraStateMachine *)(this + 0x4dc),this);
  this[0x54c] = (QCamera2HardwareInterface)0x1;
  QCameraPostProcessor::QCameraPostProcessor((QCameraPostProcessor *)(this + 0x550),this);
  auVar12 = ZEXT816(0);
  uVar3 = QCameraThermalAdapter::getInstance();
  *(longlong *)(this + 0x858) = SUB168(auVar12,0);
  *(longlong *)(this + 0x860) = SUB168(auVar12 >> 0x40,0);
  iVar2 = DAT_000b0ecc;
  *(undefined4 *)(this + 0x850) = uVar3;
  *(int *)(this + 0x854) = *(int *)(iVar2 + 0xb0cde) + 8;
  *(undefined4 *)(this + 0x868) = 0;
  *(undefined4 *)(this + 0x86c) = 0;
  *(QCamera2HardwareInterface **)(this + 0x870) = this;
  QCameraQueue::QCameraQueue
            ((QCameraQueue *)(this + 0x874),*(FuncDef58 **)(DAT_000b0ed0 + 0xb0cf6),this + 0x854);
  QCameraCmdThread::QCameraCmdThread((QCameraCmdThread *)(this + 0x898));
  this[0x8d8] = (QCamera2HardwareInterface)0x0;
  QCameraPerfLock::QCameraPerfLock((QCameraPerfLock *)(this + 0x8e0));
  QCameraMemoryPool::QCameraMemoryPool((QCameraMemoryPool *)(this + 0x934));
  *(undefined4 *)(this + 0x1bf0) = 0;
  *(undefined4 *)(this + 0x1bec) = 0;
  this[0x1be8] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x1bdc) = 0;
  this[0x1bd8] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x9dc) = 0;
  *(undefined4 *)(this + 0x9e0) = 0;
  *(undefined4 *)(this + 0x9e4) = 0;
  *(undefined2 *)(this + 0x9d8) = 0;
  *(undefined4 *)(this + 0xa9b) = 0;
  *(undefined4 *)(this + 0xa98) = 0;
  *(undefined2 *)(this + 0xaa8) = 0;
  *(undefined4 *)(this + 0xaa0) = 0;
  *(undefined4 *)(this + 0xaa4) = 0;
  *(undefined4 *)(this + 0xab0) = 0;
  *(undefined4 *)(this + 0xaac) = 0;
  *(undefined4 *)(this + 0xab6) = 0;
  *(undefined4 *)(this + 0xab2) = 0;
  uVar11 = SUB168(auVar12,0);
  *(undefined8 *)(this + 0x1c14) = uVar11;
  uVar13 = SUB168(auVar12 >> 0x40,0);
  *(undefined8 *)(this + 0x1c1c) = uVar13;
  *(undefined8 *)(this + 0x1c08) = uVar11;
  *(undefined8 *)(this + 0x1c10) = uVar13;
  *(undefined8 *)(this + 0x1bf8) = uVar11;
  *(undefined8 *)(this + 0x1c00) = uVar13;
  this_00 = (QCameraCmdThread *)(this + 0x1d38);
  QCameraCmdThread::QCameraCmdThread(this_00);
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x1d78));
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1d9c),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init((pthread_condattr_t *)&local_98);
  pthread_condattr_setclock((pthread_condattr_t *)&local_98,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x1da0),(pthread_condattr_t *)&local_98);
  pthread_condattr_destroy((pthread_condattr_t *)&local_98);
  *(undefined2 *)(this + 0x1dc4) = 0;
  this[0x1e0c] = (QCamera2HardwareInterface)0x0;
  this[0x1dfd] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x1df4) = 1;
  *(undefined4 *)(this + 0x1df0) = 0;
  this[0x1dec] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x1de8) = 0;
  *(undefined4 *)(this + 0x1dc8) = 0xffffffff;
  *(longlong *)(this + 0x1db4) = SUB168(auVar12,0);
  uVar11 = SUB168(auVar12 >> 0x40,0);
  *(undefined8 *)(this + 0x1dbc) = uVar11;
  *(longlong *)(this + 0x1da4) = SUB168(auVar12,0);
  *(undefined8 *)(this + 0x1dac) = uVar11;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1e10),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init((pthread_condattr_t *)&local_98);
  pthread_condattr_setclock((pthread_condattr_t *)&local_98,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x1e14),(pthread_condattr_t *)&local_98);
  pthread_condattr_destroy((pthread_condattr_t *)&local_98);
  this[0x1e24] = (QCamera2HardwareInterface)0x1;
  MotMemThrottle::MotMemThrottle((MotMemThrottle *)(this + 0x1e28));
  *(undefined4 *)(this + 0x1ecc) = 0xffffffff;
  *(undefined4 *)(this + 0x1ec8) = 0;
  *(longlong *)(this + 0x1f35) = SUB168(auVar12,0);
  uVar11 = SUB168(auVar12 >> 0x40,0);
  *(undefined8 *)(this + 0x1f3d) = uVar11;
  *(longlong *)(this + 0x1f28) = SUB168(auVar12,0);
  *(undefined8 *)(this + 0x1f30) = uVar11;
  property_get(DAT_000b1210 + 0xb0ea2,&local_98,DAT_000b1214 + 0xb0ea4);
  uVar4 = atoi((char *)&local_98);
  ppiVar9 = (int **)(this + 0x1ec8);
  piVar10 = (int *)(this + 0x1e00);
  puVar7 = *(uint **)(DAT_000b1218 + 0xb0eb8);
  *puVar7 = uVar4;
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000b121c + 0xb0eda) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b1220 + 0xb0eea) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b1224 + 0xb11fc);
    }
  }
  *(undefined4 *)(this + 0x14) = 0x48574454;
  *(undefined4 *)(this + 0x18) = 0x100;
  uVar3 = *(undefined4 *)(DAT_000b1228 + 0xb0f0a);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(DAT_000b122c + 0xb0f0c);
  *(undefined4 *)(this + 0x54) = uVar3;
  *(QCamera2HardwareInterface **)(this + 0x58) = this;
  pthread_condattr_init(&pStack156);
  pthread_condattr_setclock(&pStack156,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x928),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x92c),&pStack156);
  *(undefined4 *)(this + 0x930) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x99c),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x9a0),&pStack156);
  *(longlong *)(this + 0x9a4) = SUB168(auVar12,0);
  *(longlong *)(this + 0x9ac) = SUB168(auVar12 >> 0x40,0);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1c68),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x1c6c),&pStack156);
  pthread_condattr_destroy(&pStack156);
  *(undefined4 *)(this + 0x9d4) = 0;
  *(longlong *)(this + 0x9c4) = SUB168(auVar12,0);
  uVar11 = SUB168(auVar12 >> 0x40,0);
  *(undefined8 *)(this + 0x9cc) = uVar11;
  *(longlong *)(this + 0x9b4) = SUB168(auVar12,0);
  *(undefined8 *)(this + 0x9bc) = uVar11;
  __aeabi_memclr8(this + 0x9e8,0xb0);
  uVar11 = SUB168(auVar12,0);
  *(undefined8 *)(this + 0x1c54) = uVar11;
  uVar13 = SUB168(auVar12 >> 0x40,0);
  *(undefined8 *)(this + 0x1c5c) = uVar13;
  *(undefined8 *)(this + 0x1c44) = uVar11;
  *(undefined8 *)(this + 0x1c4c) = uVar13;
  *(undefined8 *)(this + 0x1c34) = uVar11;
  *(undefined8 *)(this + 0x1c3c) = uVar13;
  *(undefined8 *)(this + 0x1c24) = uVar11;
  *(undefined8 *)(this + 0x1c2c) = uVar13;
  __aeabi_memclr8(this + 0x1c70,200);
  __aeabi_memclr8(this + 0x68,0x43c);
  *(undefined4 *)(this + 0x1de4) = 0;
  *(undefined4 *)(this + 0x1de0) = 0;
  *(undefined4 *)(this + 0x1ddc) = 0;
  *(longlong *)(this + 0x1dcc) = SUB168(auVar12,0);
  *(longlong *)(this + 0x1dd4) = SUB168(auVar12 >> 0x40,0);
  QCameraCmdThread::launch(this_00,*(FuncDef57 **)(DAT_000b1230 + 0xb0ffe),this);
  QCameraCmdThread::sendCmd(this_00,1,'\0','\0');
  QCameraPerfLock::lock_init((QCameraPerfLock *)(this + 0x8e0));
  pthread_mutex_init((pthread_mutex_t *)(this + 0x1df8),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x1e20) = 0;
  *(undefined4 *)(this + 0x1e1c) = 0;
  this[0x1dfc] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x1e18) = 0;
  *piVar10 = 0;
  *(undefined4 *)(this + 0x1e04) = 0;
  *(undefined4 *)(this + 0x1e08) = 0x20;
  iVar2 = dlopen(DAT_000b1234 + 0xb1054,0);
  *piVar10 = iVar2;
  if (iVar2 != 0) {
    pcVar5 = (code *)dlsym(iVar2,DAT_000b1238 + 0xb1064);
    *(code **)(this + 0x1e04) = pcVar5;
    if (pcVar5 != (code *)0x0) {
      uVar3 = (*pcVar5)();
      *(undefined4 *)(this + 0x1e08) = uVar3;
    }
    dlclose(*piVar10);
  }
  MotMemThrottle::init((MotMemThrottle *)(this + 0x1e28),(EVP_PKEY_CTX *)&DAT_00000208);
  *(undefined2 *)(this + 0x1ec4) = 0;
  *(undefined4 *)(this + 0x1ec0) = 0xffffffff;
  *(undefined8 *)(this + 0x1eb0) = 0;
  *(undefined8 *)(this + 0x1eb8) = 0;
  *(undefined8 *)(this + 0x1ea0) = 0;
  *(undefined8 *)(this + 0x1ea8) = 0;
  *(undefined8 *)(this + 0x1e90) = 0;
  *(undefined8 *)(this + 0x1e98) = 0;
  piVar10 = (int *)operator_new(0x48);
  piVar6 = (int *)MotSmoothZoom::MotSmoothZoom((MotSmoothZoom *)piVar10,this);
  piVar8 = *ppiVar9;
  android::RefBase::incStrong((MotSmoothZoom *)(*(int *)(*piVar6 + -0xc) + (int)piVar10));
  if (piVar8 != (int *)0x0) {
    android::RefBase::decStrong((MotSmoothZoom *)(*(int *)(*piVar8 + -0xc) + (int)piVar8));
  }
  if (piVar8 != *ppiVar9) {
    android::sp_report_race();
  }
  *ppiVar9 = piVar10;
  initFactory(this);
  __aeabi_memclr8(this + 0xac8,0x1110);
  this[0x1f60] = (QCamera2HardwareInterface)0x0;
  *(undefined4 *)(this + 0x1f24) = 0;
  *(undefined4 *)(this + 0x1f20) = 0;
  *(undefined8 *)(this + 0x1f10) = 0;
  *(undefined8 *)(this + 0x1f18) = 0;
  *(undefined8 *)(this + 0x1f00) = 0;
  *(undefined8 *)(this + 0x1f08) = 0;
  *(undefined8 *)(this + 0x1ef0) = 0;
  *(undefined8 *)(this + 0x1ef8) = 0;
  *(undefined8 *)(this + 0x1ee0) = 0;
  *(undefined8 *)(this + 0x1ee8) = 0;
  *(undefined8 *)(this + 0x1ed0) = 0;
  *(undefined8 *)(this + 0x1ed8) = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_88 = 0;
  uStack128 = 0;
  local_98 = 0;
  uStack144 = 0;
  local_4c = 0;
  uStack72 = 0;
  uStack68 = 0;
  property_get(DAT_000b123c + 0xb118e,&local_98,0);
  iVar2 = strncasecmp((char *)&local_98,(char *)(DAT_000b1240 + 0xb119a),0x5c);
  if ((iVar2 != 0) &&
     (iVar2 = strncasecmp((char *)&local_98,(char *)(DAT_000b1244 + 0xb11a8),0x5c), iVar2 != 0)) {
    **(undefined4 **)(DAT_000b1248 + 0xb11b4) = 1;
  }
  if (1 < *puVar7) {
    if ((**(byte **)(DAT_000b124c + 0xb11c4) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b1250 + 0xb11d2) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar1 == local_3c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

