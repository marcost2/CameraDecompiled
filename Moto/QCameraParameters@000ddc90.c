
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraParameters::QCameraParameters(android::Mutex*) */

QCameraParameters * __thiscall
qcamera::QCameraParameters::QCameraParameters(QCameraParameters *this,Mutex *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 local_f0;
  undefined8 uStack232;
  undefined8 local_e0;
  undefined8 uStack216;
  undefined8 local_d0;
  undefined8 uStack200;
  undefined8 local_c0;
  undefined8 uStack184;
  undefined8 local_b0;
  undefined4 uStack168;
  undefined4 local_a4;
  undefined4 uStack160;
  undefined8 uStack156;
  String8 aSStack144 [92];
  int local_34;
  
  piVar4 = *(int **)(DAT_000ddfb4 + 0xddca6);
  local_34 = *piVar4;
  android::CameraParameters::CameraParameters((CameraParameters *)this);
  auVar6 = ZEXT816(0);
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  this[0x18] = (QCameraParameters)0x0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  __aeabi_memclr8(this + 0x80,0x140);
  QCameraCommon::QCameraCommon((QCameraCommon *)(this + 0x1d0));
  *(undefined2 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  this[0x204] = (QCameraParameters)0x0;
  *(longlong *)(this + 0x1d4) = SUB168(auVar6,0);
  *(longlong *)(this + 0x1dc) = SUB168(auVar6 >> 0x40,0);
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x213) = 0;
  *(undefined4 *)(this + 0x20f) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x224) = 2;
  *(undefined4 *)(this + 0x228) = 2;
  *(undefined4 *)(this + 0x220) = 9;
  *(undefined4 *)(this + 0x233) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined2 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x23c) = 100;
  *(undefined2 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x297) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined2 *)(this + 0x29b) = 1;
  android::String8::String8(aSStack144);
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x2a0),8,0);
  *(int *)(this + 0x2a0) = *(int *)(DAT_000ddfb8 + 0xddd80) + 8;
  android::String8::String8((String8 *)(this + 0x2b4),aSStack144);
  android::String8::_String8(aSStack144);
  this[0x2cc] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x2c8) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x2d0),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  this[0x2da] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2d4) = 0x17;
  this[0x2f0] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x7b0) = 0;
  *(undefined4 *)(this + 0x7b4) = 0;
  this[0xd25] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0xd1c) = 0;
  *(undefined2 *)(this + 0xd18) = 0;
  this[0x808] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x7bc) = 0;
  *(undefined4 *)(this + 0x7c0) = 0;
  this[0x7ac] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x7a8) = 0;
  this[0x7a5] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 900) = 0;
  this[0x380] = (QCameraParameters)0x0;
  this[0x302] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x300) = 1;
  *(undefined4 *)(this + 0x7f8) = 0;
  *(undefined4 *)(this + 0x7fc) = 0;
  *(undefined2 *)(this + 0x800) = 0;
  MotParamStateMachine::MotParamStateMachine((MotParamStateMachine *)(this + 0xd28),param_1);
  this[0xd44] = (QCameraParameters)0x0;
  uVar3 = *(undefined4 *)(DAT_000ddfbc + 0xdde24);
  property_get(DAT_000ddfc0 + 0xdde2e,&local_f0,uVar3);
  iVar1 = atoi((char *)&local_f0);
  this[0x21d] = (QCameraParameters)(0 < iVar1);
  property_get(DAT_000ddfc4 + 0xdde50,&local_f0,DAT_000ddfc8 + 0xdde52);
  iVar1 = memcmp(&local_f0,(void *)(DAT_000ddfcc + 0xdde5e),10);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (((int)local_f0 != 0x737066) && (*(int *)(*(int *)(DAT_000ddfd0 + 0xdde78) + 0x24) != 0)) {
      mm_camera_debug_log(1,2,DAT_000ddfd8 + 0xdde92,0x476,DAT_000ddfd4 + 0xdde88,&local_f0);
      uVar2 = 0;
    }
  }
  *(undefined4 *)(this + 0x26c) = uVar2;
  local_f0 = SUB168(auVar6,0);
  uStack232 = SUB168(auVar6 >> 0x40,0);
  uStack168 = SUB164(auVar6 >> 0x40,0);
  local_a4 = SUB164(auVar6,0);
  uStack160 = SUB164(auVar6 >> 0x20,0);
  local_e0 = local_f0;
  uStack216 = uStack232;
  local_d0 = local_f0;
  uStack200 = uStack232;
  local_c0 = local_f0;
  uStack184 = uStack232;
  local_b0 = local_f0;
  uStack156 = uStack232;
  property_get(DAT_000ddfe0 + 0xdded8,&local_f0,*(undefined4 *)(DAT_000ddfdc + 0xdded2));
  iVar1 = atoi((char *)&local_f0);
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  *(longlong *)(this + 0x2dc) = SUB168(auVar6,0);
  uVar5 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)(this + 0x2e4) = uVar5;
  *(longlong *)(this + 0x2b8) = SUB168(auVar6,0);
  *(undefined8 *)(this + 0x2c0) = uVar5;
  this[0x28f] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x28d) = 0;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  this[0x7ac] = SUB41(iVar1,0);
  __aeabi_memclr8(this + 0x390,0x408);
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(longlong *)(this + 0x1ec) = SUB168(auVar6,0);
  *(longlong *)(this + 500) = SUB168(auVar6 >> 0x40,0);
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  this[0x7a4] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x79c) = 0;
  *(undefined4 *)(this + 0x7a0) = 0;
  this[0x798] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x374) = 1;
  property_get(DAT_000ddfe4 + 0xddf4a,aSStack144,uVar3);
  iVar1 = atoi((char *)aSStack144);
  uVar5 = SUB168(auVar6,0);
  *(undefined8 *)(this + 0x848) = uVar5;
  uVar7 = SUB168(auVar6 >> 0x40,0);
  *(undefined8 *)(this + 0x850) = uVar7;
  *(undefined8 *)(this + 0x83c) = uVar5;
  *(undefined8 *)(this + 0x844) = uVar7;
  *(undefined8 *)(this + 0x82c) = uVar5;
  *(undefined8 *)(this + 0x834) = uVar7;
  *(undefined8 *)(this + 0x81c) = uVar5;
  *(undefined8 *)(this + 0x824) = uVar7;
  *(undefined8 *)(this + 0x80c) = uVar5;
  *(undefined8 *)(this + 0x814) = uVar7;
  this[0x7b8] = (QCameraParameters)(0 < iVar1);
  __aeabi_memclr8(this + 0x858,0x4c0);
  this[0xd24] = (QCameraParameters)0x0;
  if (*piVar4 == local_34) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

