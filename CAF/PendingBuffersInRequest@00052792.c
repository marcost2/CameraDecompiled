
/* qcamera::PendingBuffersInRequest::PendingBuffersInRequest(qcamera::PendingBuffersInRequest
   const&) */

PendingBuffersInRequest * __thiscall
qcamera::PendingBuffersInRequest::PendingBuffersInRequest(PendingBuffersInRequest *this)

{
  undefined8 *in_r1;
  undefined8 uVar1;
  
  uVar1 = in_r1[1];
  *(undefined8 *)this = *in_r1;
  *(undefined8 *)(this + 8) = uVar1;
  android::List<qcamera::PendingBufferInfo>::List((List_qcamera__PendingBufferInfo_ *)(this + 0x10))
  ;
  return this;
}

