
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_Node::~_Node() */

_Node * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_Node::__Node
          (_Node *this,uint *param_1)

{
  hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x38));
  List<qcamera::QCamera3HardwareInterface::InternalRequest>::_List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)(this + 0x14));
  List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::_List
            ((List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *)(this + 0xc));
  return this;
}

