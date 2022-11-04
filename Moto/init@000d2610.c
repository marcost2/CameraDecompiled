
/* qcamera::QCameraPostProcessor::init(void (*)(jpeg_job_status_t, unsigned int, unsigned int,
   mm_jpeg_output_t*, void*), void*) */

int __thiscall qcamera::QCameraPostProcessor::init(QCameraPostProcessor *this,EVP_PKEY_CTX *ctx)

{
  undefined4 in_r2;
  
  *(EVP_PKEY_CTX **)(this + 0xc) = ctx;
  *(undefined4 *)(this + 0x10) = in_r2;
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 0x244),*(FuncDef57 **)(DAT_000d264c + 0xd2620),this);
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 0x284),*(FuncDef57 **)(DAT_000d2650 + 0xd2630),this);
  QCameraParametersIntf::setReprocCount((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
  this[0x168] = (QCameraPostProcessor)0x1;
  return 0;
}

