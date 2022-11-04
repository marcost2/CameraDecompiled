
/* qcamera::QCamera3HardwareInterface::QCamera3HardwareInterface(unsigned int,
   camera_module_callbacks const*) */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::QCamera3HardwareInterface
          (QCamera3HardwareInterface *this,uint param_1,camera_module_callbacks *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
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
  
  piVar1 = *(int **)(DAT_0003ab88 + 0x3a7b0);
  local_3c = *piVar1;
  auVar6 = ZEXT816(0);
  this[0x54] = (QCamera3HardwareInterface)0x0;
  *(uint *)(this + 0x4c) = param_1;
  *(undefined4 *)(this + 0x50) = 0;
  *(int *)this = *(int *)(DAT_0003ab8c + 0x3a7ca) + 8;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  QCameraPerfLock::QCameraPerfLock((QCameraPerfLock *)(this + 0x98));
  QCameraCommon::QCameraCommon((QCameraCommon *)(this + 0xd8));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  this[0x142] = (QCamera3HardwareInterface)0x0;
  *(undefined2 *)(this + 0x140) = 1;
  *(undefined4 *)(this + 0xdc) = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x154));
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x174] = (QCamera3HardwareInterface)0x0;
  FrameNumberRegistry::FrameNumberRegistry((FrameNumberRegistry *)(this + 0x17c));
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::List
            ((List_qcamera__QCamera3HardwareInterface__PendingReprocessResult_ *)(this + 400));
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::List
            ((List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *)(this + 0x198));
  android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::List
            ((List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ *)(this + 0x1a0));
  android::KeyedVector<unsigned_int,unsigned_int>::KeyedVector
            ((KeyedVector_unsigned_int_unsigned_int_ *)(this + 0x1a8));
  PendingBuffersMap::PendingBuffersMap((PendingBuffersMap *)(this + 0x200));
  android::List<qcamera::stream_info_t*>::List((List_qcamera__stream_info_t__ *)(this + 0x390));
  *(undefined4 *)(this + 0x1178d0) = 6;
  *(undefined4 *)(this + 0x1178cc) = 3;
  this[0x1178c8] = (QCamera3HardwareInterface)0x0;
  *(undefined4 *)(this + 0x117884) = 0;
  this[0x117880] = (QCamera3HardwareInterface)0x0;
  *(undefined4 *)(this + 0x11787c) = 0x41f00000;
  *(undefined2 *)(this + 0x117878) = 0;
  *(longlong *)(this + 0x3a5) = SUB168(auVar6,0);
  uVar7 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)(this + 0x3ad) = uVar7;
  *(longlong *)(this + 0x398) = SUB168(auVar6,0);
  *(undefined8 *)(this + 0x3a0) = uVar7;
  *(camera_module_callbacks **)(this + 0x3b8) = param_2;
  *(undefined2 *)(this + 0x3bc) = 0;
  QCamera3CropRegionMapper::QCamera3CropRegionMapper((QCamera3CropRegionMapper *)(this + 0x1178d4));
  *(undefined4 *)(this + 0x1178f8) = 0xffffffff;
  this[0x1178f4] = (QCamera3HardwareInterface)0x0;
  this[0x1178e8] = (QCamera3HardwareInterface)0x0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x1178fc));
  *(undefined4 *)(this + 0x11793c) = 0;
  *(undefined4 *)(this + 0x117938) = 0;
  *(undefined2 *)(this + 0x117940) = 0;
  *(undefined4 *)(this + 0x11791c) = 0;
  *(undefined4 *)(this + 0x117918) = 0;
  this[0x117916] = (QCamera3HardwareInterface)0x0;
  *(undefined2 *)(this + 0x117914) = 0x100;
  *(undefined4 *)(this + 0x117910) = 0;
  getLogLevel();
  QCameraPerfLock::lock_init((QCameraPerfLock *)(this + 0x98));
  iVar5 = *(int *)(DAT_0003ab90 + 0x3a960);
  QCameraCommon::init((QCameraCommon *)(this + 0xd8));
  uVar2 = *(undefined4 *)(DAT_0003ab94 + 0x3a970);
  uVar4 = *(undefined4 *)(DAT_0003ab98 + 0x3a976);
  *(undefined4 *)(this + 4) = 0x48574454;
  *(undefined4 *)(this + 8) = 0x304;
  *(undefined4 *)(this + 0x40) = uVar4;
  *(undefined4 *)(this + 0x44) = uVar2;
  *(QCamera3HardwareInterface **)(this + 0x48) = this;
  **(undefined4 **)(iVar5 + param_1 * 4) = 3;
  *(undefined4 *)(*(int *)(iVar5 + param_1 * 4) + 0x3014) = 3;
  pthread_condattr_init(&pStack156);
  pthread_condattr_setclock(&pStack156,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x38c),&pStack156);
  pthread_cond_init((pthread_cond_t *)(this + 0x20c),&pStack156);
  pthread_condattr_destroy(&pStack156);
  *(undefined4 *)(this + 0x218) = 0xffffffff;
  *(undefined4 *)(this + 0x210) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x388),(pthread_mutexattr_t *)0x0);
  local_98 = SUB168(auVar6,0);
  *(undefined8 *)(this + 100) = local_98;
  uStack144 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)(this + 0x6c) = uStack144;
  *(undefined8 *)(this + 0x58) = local_98;
  *(undefined8 *)(this + 0x60) = uStack144;
  uStack80 = SUB164(auVar6 >> 0x40,0);
  local_4c = SUB164(auVar6,0);
  uStack72 = SUB164(auVar6 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get();
  iVar5 = atoi((char *)&local_98);
  if (iVar5 != 0) {
    iVar5 = 1;
  }
  this[0x143] = SUB41(iVar5,0);
  property_get();
  iVar5 = atoi((char *)&local_98);
  if (iVar5 != 0) {
    iVar5 = 1;
  }
  this[0x144] = SUB41(iVar5,0);
  if ((this[0x143] != (QCamera3HardwareInterface)0x0) &&
     (*(int *)(*(int *)(DAT_0003aba8 + 0x3aa72) + 0x2c) != 0)) {
    mm_camera_debug_log();
  }
  *(undefined4 *)(this + 0x1178f0) = 0;
  *(undefined4 *)(this + 0x1178ec) = 0;
  local_98 = SUB168(auVar6,0);
  *(undefined8 *)(this + 0x164) = local_98;
  uStack144 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)(this + 0x16c) = uStack144;
  uStack80 = SUB164(auVar6 >> 0x40,0);
  local_4c = SUB164(auVar6,0);
  uStack72 = SUB164(auVar6 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get();
  iVar5 = atoi((char *)&local_98);
  this[0x177] = SUB41(iVar5,0);
  local_98 = SUB168(auVar6,0);
  uStack144 = SUB168(auVar6 >> 0x40,0);
  uStack80 = SUB164(auVar6 >> 0x40,0);
  local_4c = SUB164(auVar6,0);
  uStack72 = SUB164(auVar6 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get();
  iVar5 = atoi((char *)&local_98);
  this[0x178] = SUB41(iVar5,0);
  local_98 = SUB168(auVar6,0);
  uStack144 = SUB168(auVar6 >> 0x40,0);
  uStack80 = SUB164(auVar6 >> 0x40,0);
  local_4c = SUB164(auVar6,0);
  uStack72 = SUB164(auVar6 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get();
  iVar5 = atoi((char *)&local_98);
  this[0x179] = SUB41(iVar5,0);
  *(int *)(this + 0x117904) = 0;
  *(undefined4 *)(this + 0x117908) = 0;
  *(undefined4 *)(this + 0x11790c) = 0x20;
  iVar5 = dlopen();
  *(int *)(this + 0x117904) = iVar5;
  if (iVar5 != 0) {
    pcVar3 = (code *)dlsym();
    *(code **)(this + 0x117908) = pcVar3;
    if (pcVar3 != (code *)0x0) {
      uVar2 = (*pcVar3)();
      *(undefined4 *)(this + 0x11790c) = uVar2;
    }
    dlclose();
  }
  if (*piVar1 == local_3c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

