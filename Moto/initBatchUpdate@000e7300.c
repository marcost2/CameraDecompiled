
/* qcamera::QCameraParameters::initBatchUpdate(metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCameraParameters::initBatchUpdate(QCameraParameters *this,metadata_buffer_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (metadata_buffer_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
    uVar2 = 0;
    if (iVar1 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(param_1,0x10f);
      param_1[0x117aec] = (metadata_buffer_t)0x0;
      param_1[0x106974] = (metadata_buffer_t)0x0;
      param_1[0xe1f78] = (metadata_buffer_t)0x0;
      param_1[0xcfa74] = (metadata_buffer_t)0x0;
      param_1[0xcfa08] = (metadata_buffer_t)0x0;
      param_1[0xc36b0] = (metadata_buffer_t)0x0;
      param_1[0xb86e0] = (metadata_buffer_t)0x0;
      param_1[0xb7340] = (metadata_buffer_t)0x0;
      param_1[0xb72e8] = (metadata_buffer_t)0x0;
      param_1[0x772c8] = (metadata_buffer_t)0x0;
      MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
    }
  }
  return uVar2;
}

