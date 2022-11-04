
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_Node::_Node(qcamera::QCamera3HardwareInterface::PendingRequestInfo
   const&) */

_Node * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_Node::_Node
          (_Node *this,uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)param_1;
  *(uint *)(this + 8) = param_1[2];
  *(undefined8 *)this = uVar1;
  List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::List
            ((List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_ *)(this + 0xc));
  List<qcamera::QCamera3HardwareInterface::InternalRequest>::List
            ((List_qcamera__QCamera3HardwareInterface__InternalRequest_ *)(this + 0x14));
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 7);
  uVar3 = *(undefined8 *)(param_1 + 9);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x1c) = uVar2;
  *(undefined8 *)(this + 0x24) = uVar3;
  hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
            ((CameraMetadata *)(this + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x45) = *(undefined8 *)((int)param_1 + 0x45);
  *(undefined8 *)(this + 0x40) = uVar1;
  return this;
}

