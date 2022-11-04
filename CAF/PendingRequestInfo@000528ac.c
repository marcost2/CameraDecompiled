
/* qcamera::QCamera3HardwareInterface::PendingRequestInfo::PendingRequestInfo(qcamera::QCamera3HardwareInterface::PendingRequestInfo
   const&) */

PendingRequestInfo * __thiscall
qcamera::QCamera3HardwareInterface::PendingRequestInfo::PendingRequestInfo(PendingRequestInfo *this)

{
  undefined8 *in_r1;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *in_r1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(in_r1 + 1);
  *(undefined8 *)this = uVar1;
  android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::List
            ((List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *)(this + 0xc));
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)(this + 0x14));
  uVar1 = in_r1[6];
  uVar2 = *(undefined8 *)((int)in_r1 + 0x1c);
  uVar3 = *(undefined8 *)((int)in_r1 + 0x24);
  *(undefined8 *)(this + 0x28) = in_r1[5];
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x1c) = uVar2;
  *(undefined8 *)(this + 0x24) = uVar3;
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x38));
  uVar1 = in_r1[8];
  *(undefined8 *)(this + 0x45) = *(undefined8 *)((int)in_r1 + 0x45);
  *(undefined8 *)(this + 0x40) = uVar1;
  return this;
}

