
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::QCamera3HardwareInterface(unsigned int,
   camera_module_callbacks const*) */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::QCamera3HardwareInterface
          (QCamera3HardwareInterface *this,uint param_1,camera_module_callbacks *param_2)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  MotCameraFactory *pMVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  pthread_condattr_t pStack156;
  undefined8 local_98;
  ulonglong uStack144;
  undefined8 local_88;
  ulonglong uStack128;
  undefined8 local_78;
  ulonglong uStack112;
  undefined8 local_68;
  ulonglong uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined4 uStack72;
  ulonglong uStack68;
  int local_3c;
  
  auVar13 = ZEXT816(0);
  piVar1 = *(int **)(DAT_0007f46c + 0x7f0f2);
  local_3c = *piVar1;
  this[0x68] = (QCamera3HardwareInterface)0x0;
  *(uint *)(this + 0x60) = param_1;
  *(undefined4 *)(this + 100) = 0;
  *(int *)this = *(int *)(DAT_0007f470 + 0x7f106) + 8;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  QCameraPerfLock::QCameraPerfLock((QCameraPerfLock *)(this + 0xa8));
  QCameraCommon::QCameraCommon((QCameraCommon *)(this + 0xf0));
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  this[0x1aa] = (QCamera3HardwareInterface)0x0;
  *(undefined2 *)(this + 0x1a8) = 1;
  *(undefined4 *)(this + 0xf4) = 0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x1bc));
  this[0x1dc] = (QCamera3HardwareInterface)0x0;
  *(QCamera3HardwareInterface **)(this + 0x1e4) = this + 0x1e8;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 500),(pthread_mutexattr_t *)0x0);
  *(int *)(this + 0x1f8) = *(int *)(DAT_0007f474 + 0x7f16e) + 8;
  *(undefined4 *)(this + 0x1f0) = 800;
  pvVar2 = operator_new__(0x48);
  *(void **)((int)pvVar2 + 0x40) = pvVar2;
  *(void **)((int)pvVar2 + 0x44) = pvVar2;
  iVar8 = *(int *)(DAT_0007f478 + 0x7f18c);
  *(void **)(this + 0x1fc) = pvVar2;
  *(int *)(this + 0x200) = iVar8 + 8;
  pvVar2 = operator_new__(0x58);
  *(void **)((int)pvVar2 + 0x50) = pvVar2;
  *(void **)((int)pvVar2 + 0x54) = pvVar2;
  iVar8 = *(int *)(DAT_0007f47c + 0x7f1a2);
  *(void **)(this + 0x204) = pvVar2;
  *(int *)(this + 0x208) = iVar8 + 8;
  pvVar2 = operator_new__(0x10);
  *(void **)(this + 0x20c) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(void **)((int)pvVar2 + 0xc) = pvVar2;
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x210),8,7);
  *(int *)(this + 0x26c) = *(int *)(DAT_0007f480 + 0x7f1ca) + 8;
  *(int *)(this + 0x210) = *(int *)(DAT_0007f484 + 0x7f1d6) + 8;
  pvVar2 = operator_new__(0x20);
  *(void **)(this + 0x270) = pvVar2;
  *(void **)((int)pvVar2 + 0x18) = pvVar2;
  *(void **)((int)pvVar2 + 0x1c) = pvVar2;
  *(int *)(this + 0x3f8) = *(int *)(DAT_0007f488 + 0x7f1f0) + 8;
  pvVar2 = operator_new__(0xc);
  *(void **)(this + 0x3fc) = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)pvVar2 + 8) = pvVar2;
  *(undefined4 *)(this + 0x117f24) = 0x41f00000;
  *(undefined4 *)(this + 0x117f84) = 8;
  *(undefined4 *)(this + 0x117f80) = 6;
  this[0x117f7c] = (QCamera3HardwareInterface)0x0;
  *(undefined4 *)(this + 0x117f38) = 0;
  *(undefined4 *)(this + 0x117f30) = 0;
  this[0x117f28] = (QCamera3HardwareInterface)0x0;
  *(undefined2 *)(this + 0x117f20) = 0;
  *(longlong *)(this + 0x40d) = SUB168(auVar13,0);
  uVar14 = SUB168(auVar13 >> 0x40,0);
  *(undefined8 *)(this + 0x415) = uVar14;
  *(longlong *)(this + 0x400) = SUB168(auVar13,0);
  *(undefined8 *)(this + 0x408) = uVar14;
  *(undefined2 *)(this + 0x424) = 0;
  *(camera_module_callbacks **)(this + 0x420) = param_2;
  QCamera3CropRegionMapper::QCamera3CropRegionMapper((QCamera3CropRegionMapper *)(this + 0x117f88));
  *(undefined4 *)(this + 0x117fc0) = 0xffffffff;
  this[0x117fbc] = (QCamera3HardwareInterface)0x0;
  this[0x117fb0] = (QCamera3HardwareInterface)0x0;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x117fc4));
  *(undefined4 *)(this + 0x117fdc) = 0;
  *(undefined4 *)(this + 0x117fd8) = 0;
  *(undefined4 *)(this + 0x11800c) = 0;
  *(undefined4 *)(this + 0x118008) = 0;
  *(undefined4 *)(this + 0x117fe8) = 0;
  *(undefined4 *)(this + 0x117fe4) = 0;
  *(undefined4 *)(this + 0x117fe0) = 0x10000;
  *(undefined4 *)(this + 0x118011) = 0;
  *(undefined4 *)(this + 0x11800d) = 0;
  *(undefined2 *)(this + 0x11802c) = 0;
  this[0x118016] = (QCamera3HardwareInterface)0x1;
  *(undefined4 *)(this + 0x118028) = 0;
  getLogLevel();
  QCameraPerfLock::lock_init((QCameraPerfLock *)(this + 0xa8));
  iVar9 = *(int *)(DAT_0007f670 + 0x7f342);
  QCameraCommon::init((QCameraCommon *)(this + 0xf0),*(EVP_PKEY_CTX **)(iVar9 + param_1 * 4));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(DAT_0007f674 + 0x7f35e);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(DAT_0007f678 + 0x7f366);
  *(undefined4 *)(this + 0x18) = 0x48574454;
  *(undefined4 *)(this + 0x1c) = 0x304;
  *(QCamera3HardwareInterface **)(this + 0x5c) = this;
  **(undefined4 **)(iVar9 + param_1 * 4) = 3;
  *(undefined4 *)(*(int *)(iVar9 + param_1 * 4) + 0x3024) = 3;
  pthread_condattr_init(&pStack156);
  pthread_condattr_setclock(&pStack156,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x3f4),&pStack156);
  pthread_cond_init((pthread_cond_t *)(this + 0x274),&pStack156);
  pthread_condattr_destroy(&pStack156);
  *(undefined4 *)(this + 0x280) = 0xffffffff;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x3f0),(pthread_mutexattr_t *)0x0);
  local_98 = SUB168(auVar13,0);
  *(undefined8 *)(this + 0x78) = local_98;
  uStack144 = SUB168(auVar13 >> 0x40,0);
  *(ulonglong *)(this + 0x80) = uStack144;
  *(undefined8 *)(this + 0x6c) = local_98;
  *(ulonglong *)(this + 0x74) = uStack144;
  uStack80._0_4_ = SUB164(auVar13 >> 0x40,0);
  uStack80._4_4_ = SUB164(auVar13,0);
  uStack72 = SUB164(auVar13 >> 0x20,0);
  iVar10 = DAT_0007f680 + 0x7f414;
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get(DAT_0007f67c + 0x7f416,&local_98,iVar10);
  iVar8 = atoi((char *)&local_98);
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  this[0x1ab] = SUB41(iVar8,0);
  property_get(DAT_0007f684 + 0x7f434,&local_98,iVar10);
  iVar8 = atoi((char *)&local_98);
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  this[0x1ac] = SUB41(iVar8,0);
  piVar3 = (int *)(this + 0x117fcc);
  iVar8 = *(int *)(DAT_0007f688 + 0x7f458);
  uVar4 = (uint)(byte)this[0x1ab];
  bVar12 = uVar4 != 0;
  if (bVar12) {
    uVar4 = *(uint *)(iVar8 + 0x2c);
  }
  if (bVar12 && uVar4 != 0) {
    mm_camera_debug_log(1,4,DAT_0007f690 + 0x7f4a0,0x1fe,DAT_0007f68c + 0x7f498);
  }
  *(undefined4 *)(this + 0x117fb8) = 0;
  *(undefined4 *)(this + 0x117fb4) = 0;
  local_98 = SUB168(auVar13,0);
  *(undefined8 *)(this + 0x1cc) = local_98;
  uStack144 = SUB168(auVar13 >> 0x40,0);
  *(ulonglong *)(this + 0x1d4) = uStack144;
  uStack80._4_4_ = SUB164(auVar13,0);
  uStack80 = uStack144 & 0xffffffff | (ulonglong)uStack80._4_4_ << 0x20;
  uStack72 = SUB164(auVar13 >> 0x20,0);
  iVar11 = DAT_0007f698 + 0x7f4fe;
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get(DAT_0007f694 + 0x7f500,&local_98,iVar11);
  iVar10 = atoi((char *)&local_98);
  this[0x1df] = SUB41(iVar10,0);
  local_98 = SUB168(auVar13,0);
  uStack144 = SUB168(auVar13 >> 0x40,0);
  uStack80._4_4_ = SUB164(auVar13,0);
  uStack80 = uStack144 & 0xffffffff | (ulonglong)uStack80._4_4_ << 0x20;
  uStack72 = SUB164(auVar13 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get(DAT_0007f69c + 0x7f530,&local_98,iVar11);
  iVar10 = atoi((char *)&local_98);
  this[0x1e0] = SUB41(iVar10,0);
  local_98 = SUB168(auVar13,0);
  uStack144 = SUB168(auVar13 >> 0x40,0);
  uStack80._4_4_ = SUB164(auVar13,0);
  uStack80 = uStack144 & 0xffffffff | (ulonglong)uStack80._4_4_ << 0x20;
  uStack72 = SUB164(auVar13 >> 0x20,0);
  local_88 = local_98;
  uStack128 = uStack144;
  local_78 = local_98;
  uStack112 = uStack144;
  local_68 = local_98;
  uStack96 = uStack144;
  local_58 = local_98;
  uStack68 = uStack144;
  property_get(DAT_0007f6a0 + 0x7f55e,&local_98,iVar11);
  iVar10 = atoi((char *)&local_98);
  this[0x1e1] = SUB41(iVar10,0);
  *(undefined4 *)(this + 0x117f2c) =
       *(undefined4 *)(*(int *)(iVar9 + *(int *)(this + 0x60) * 4) + 0x3028);
  *piVar3 = 0;
  *(undefined4 *)(this + 0x117fd0) = 0;
  *(undefined4 *)(this + 0x117fd4) = 0x20;
  iVar10 = dlopen(DAT_0007f6a4 + 0x7f596,0);
  *piVar3 = iVar10;
  if (iVar10 != 0) {
    pcVar5 = (code *)dlsym(iVar10,DAT_0007f6a8 + 0x7f5a4);
    *(code **)(this + 0x117fd0) = pcVar5;
    if (pcVar5 != (code *)0x0) {
      uVar6 = (*pcVar5)();
      *(undefined4 *)(this + 0x117fd4) = uVar6;
    }
    dlclose(*piVar3);
  }
  if (*(int *)(*(int *)(iVar9 + param_1 * 4) + 0x25ac) != 0) {
    if (*(int *)(iVar8 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0007f6b0 + 0x7f5e6,0x21f,DAT_0007f6ac + 0x7f5de);
    }
    this[0x118013] = (QCamera3HardwareInterface)0x1;
  }
  auVar13 = ZEXT816(0);
  this[0x118015] = (QCamera3HardwareInterface)0x0;
  this[0x117f34] = (QCamera3HardwareInterface)0x0;
  *(undefined8 *)(this + 0x118018) = 0;
  *(undefined8 *)(this + 0x118020) = 0;
  pMVar7 = (MotCameraFactory *)operator_new(0x1010);
  pMVar7 = (MotCameraFactory *)MotCameraFactory::MotCameraFactory(pMVar7);
  *(MotCameraFactory **)(this + 0x118028) = pMVar7;
  MotCameraFactory::setHWI(pMVar7,this);
  uVar14 = DAT_0007f668;
  *(undefined8 *)(this + 0x118030) = DAT_0007f660;
  *(undefined8 *)(this + 0x118038) = uVar14;
  *(longlong *)(this + 4) = SUB168(auVar13,0);
  *(longlong *)(this + 0xc) = SUB168(auVar13 >> 0x40,0);
  if (*piVar1 != local_3c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

