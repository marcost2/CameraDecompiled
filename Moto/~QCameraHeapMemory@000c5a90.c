
/* qcamera::QCameraHeapMemory::~QCameraHeapMemory() */

void __thiscall qcamera::QCameraHeapMemory::_QCameraHeapMemory(QCameraHeapMemory *this)

{
  operator_delete(this);
  return;
}

