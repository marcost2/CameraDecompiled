
/* qcamera::QCameraThermalCallback::setThermalLevel(qcamera::qcamera_thermal_level_enum_t) */

void __thiscall
qcamera::QCameraThermalCallback::setThermalLevel
          (QCameraThermalCallback *this,qcamera_thermal_level_enum_t param_1)

{
  *(uint *)(this + 4) = (uint)(byte)param_1;
  return;
}

