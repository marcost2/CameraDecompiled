
/* qcamera::QCamera3HardwareInterface::PendingRequestInfo::PendingRequestInfo() */

PendingRequestInfo * __thiscall
qcamera::QCamera3HardwareInterface::PendingRequestInfo::PendingRequestInfo(PendingRequestInfo *this)

{
  android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::List
            ((List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *)(this + 0xc));
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)(this + 0x14));
  android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x38));
  return this;
}

