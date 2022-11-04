
/* qcamera::QCameraParameters::QCameraParameters(android::String8 const&) */

QCameraParameters * __thiscall
qcamera::QCameraParameters::QCameraParameters(QCameraParameters *this,String8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  String8 aSStack144 [92];
  int local_34;
  
  piVar1 = *(int **)(DAT_000de21c + 0xde000);
  local_34 = *piVar1;
  android::String8::String8(aSStack144);
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)this,8,0);
  iVar2 = *(int *)(DAT_000de220 + 0xde022) + 8;
  *(int *)this = iVar2;
  android::String8::String8((String8 *)(this + 0x14),aSStack144);
  android::String8::_String8(aSStack144);
  android::CameraParameters::unflatten((CameraParameters *)this,param_1);
  auVar4 = ZEXT816(0);
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
  this[0x21d] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x218) = 0;
  this[0x204] = (QCameraParameters)0x0;
  *(longlong *)(this + 0x1d4) = SUB168(auVar4,0);
  *(longlong *)(this + 0x1dc) = SUB168(auVar4 >> 0x40,0);
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x213) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x224) = 2;
  *(undefined4 *)(this + 0x228) = 2;
  *(undefined4 *)(this + 0x220) = 9;
  *(undefined4 *)(this + 0x233) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  this[0x28a] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x23c) = 100;
  *(undefined4 *)(this + 0x297) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x266) = 0;
  *(undefined2 *)(this + 0x29b) = 1;
  android::String8::String8(aSStack144);
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)(this + 0x2a0),8,0);
  *(int *)(this + 0x2a0) = iVar2;
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
  this[0x808] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x7bc) = 0;
  *(undefined4 *)(this + 0x7c0) = 0;
  this[0x7ac] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 0x7a8) = 0;
  this[0x7a5] = (QCameraParameters)0x0;
  *(undefined4 *)(this + 900) = 0;
  *(undefined4 *)(this + 0x388) = 0;
  this[0x380] = (QCameraParameters)0x0;
  this[0x302] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x300) = 1;
  *(undefined4 *)(this + 0x7f8) = 0;
  *(undefined4 *)(this + 0x7fc) = 0;
  *(undefined2 *)(this + 0x800) = 0;
  MotParamStateMachine::MotParamStateMachine((MotParamStateMachine *)(this + 0xd28));
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  uVar3 = SUB168(auVar4,0);
  *(undefined8 *)(this + 0x2dc) = uVar3;
  uVar5 = SUB168(auVar4 >> 0x40,0);
  *(undefined8 *)(this + 0x2e4) = uVar5;
  *(undefined8 *)(this + 0x2b8) = uVar3;
  *(undefined8 *)(this + 0x2c0) = uVar5;
  this[0xd44] = (QCameraParameters)0x0;
  this[0x28f] = (QCameraParameters)0x0;
  *(undefined2 *)(this + 0x28d) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined8 *)(this + 0x1ec) = uVar3;
  *(undefined8 *)(this + 500) = uVar5;
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x37c) = 0;
  *(undefined4 *)(this + 0x79c) = 0;
  *(undefined4 *)(this + 0x7a0) = 0;
  *(undefined2 *)(this + 0x374) = 0;
  this[0x7a4] = (QCameraParameters)0x0;
  this[0x798] = (QCameraParameters)0x0;
  property_get(DAT_000de228 + 0xde1e8,aSStack144,*(undefined4 *)(DAT_000de224 + 0xde1e2));
  iVar2 = atoi((char *)aSStack144);
  this[0xd24] = (QCameraParameters)0x0;
  this[0x7b8] = (QCameraParameters)(0 < iVar2);
  if (*piVar1 == local_34) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

