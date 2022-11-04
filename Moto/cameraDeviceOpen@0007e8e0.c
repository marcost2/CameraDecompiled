
/* qcamera::QCamera2Factory::cameraDeviceOpen(int, hw_device_t**) */

int __thiscall
qcamera::QCamera2Factory::cameraDeviceOpen(QCamera2Factory *this,int param_1,hw_device_t **param_2)

{
  int iVar1;
  int *piVar2;
  QCamera3HardwareInterface *this_00;
  QCamera2HardwareInterface *this_01;
  BSTBokehParam *this_02;
  int *piVar3;
  EVP_PKEY_CTX *ctx;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    iVar4 = *(int *)(this + 8);
    if (iVar4 != 0) {
      iVar5 = *(int *)(DAT_0007ea74 + 0x7e900);
      if (*(int *)(iVar5 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_0007ea7c + 0x7e926,0x1b6,DAT_0007ea78 + 0x7e918,param_1,
                            *(undefined4 *)(iVar4 + param_1 * 8 + 4));
        iVar4 = *(int *)(this + 8);
      }
      iVar1 = *(int *)(iVar4 + param_1 * 8 + 4);
      if (iVar1 == 0x100) {
        piVar2 = (int *)operator_new(0x1f90);
        this_01 = (QCamera2HardwareInterface *)
                  QCamera2HardwareInterface::QCamera2HardwareInterface
                            ((QCamera2HardwareInterface *)piVar2,param_1);
        iVar4 = QCamera2HardwareInterface::openCamera(this_01,param_2);
        if (iVar4 != 0) {
          (**(code **)(*piVar2 + 0x24))(piVar2);
          return iVar4;
        }
      }
      else {
        if (iVar1 != 0x300) {
          if (*(int *)(iVar5 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0007ea94 + 0x7e9dc,0x1e7,DAT_0007ea90 + 0x7e9ce,param_1,
                                iVar1);
          }
          return -0x16;
        }
        piVar2 = (int *)operator_new(0x118040);
        this_00 = (QCamera3HardwareInterface *)
                  QCamera3HardwareInterface::QCamera3HardwareInterface
                            ((QCamera3HardwareInterface *)piVar2,*(uint *)(iVar4 + param_1 * 8),
                             *(camera_module_callbacks **)(this + 0xc));
        iVar4 = QCamera3HardwareInterface::openCamera(this_00,param_2);
        if (iVar4 != 0) {
          (**(code **)(*piVar2 + 4))(piVar2);
          return iVar4;
        }
        uVar6 = BSTBokehParam::createInstance();
        ctx = (EVP_PKEY_CTX *)((ulonglong)uVar6 >> 0x20);
        this_02 = (BSTBokehParam *)uVar6;
        if (param_1 == 2) {
          if (*(int *)(iVar5 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_0007ea8c + 0x7ea3e,0x1cc,DAT_0007ea88 + 0x7ea36);
          }
          piVar3 = (int *)BSTLiveBokeh::createInstance();
          iVar4 = BSTBokehParam::regStereoCam(this_02,2);
          if (iVar4 != 0) {
            (**(code **)(*piVar3 + 8))(piVar3,piVar2);
            return 0;
          }
        }
        else if (param_1 == 1) {
          BSTBokehParam::init(this_02,ctx);
        }
        else if (param_1 == 0) {
          BSTBokehParam::init(this_02,ctx);
          BSTBokehParam::regStereoCam(this_02,0);
          if (*(int *)(iVar5 + 0x28) == 0) {
            return 0;
          }
          mm_camera_debug_log(1,3,DAT_0007ea84 + 0x7ea20,0x1c9,DAT_0007ea80 + 0x7ea18);
        }
      }
      return 0;
    }
    if (*(int *)(*(int *)(DAT_0007ea68 + 0x7e972) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007ea70 + 0x7e98a,0x1b1,DAT_0007ea6c + 0x7e982);
    }
  }
  return -0x13;
}

