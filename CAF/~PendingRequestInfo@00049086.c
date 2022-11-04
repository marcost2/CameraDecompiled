
/* qcamera::QCamera3HardwareInterface::PendingRequestInfo::~PendingRequestInfo() */

PendingRequestInfo * __thiscall
qcamera::QCamera3HardwareInterface::PendingRequestInfo::_PendingRequestInfo
          (PendingRequestInfo *this)

{
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x38));
  android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)(this + 0x14));
  android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::_List
            ((List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *)(this + 0xc));
  return this;
}

