
/* qcamera::QCamera2HardwareInterface::setPreviewWindow(preview_stream_ops*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::setPreviewWindow
          (QCamera2HardwareInterface *this,preview_stream_ops *param_1)

{
  *(preview_stream_ops **)(this + 0x4a8) = param_1;
  return 0;
}

