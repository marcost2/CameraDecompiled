
/* qcamera::QCamera2HardwareInterface::addOfflineReprocChannel(cam_pp_offline_src_config_t&,
   cam_pp_feature_config_t&, void (*)(mm_camera_super_buf_t*, qcamera::QCameraStream*, void*),
   void*) */

int * __thiscall
qcamera::QCamera2HardwareInterface::addOfflineReprocChannel
          (QCamera2HardwareInterface *this,cam_pp_offline_src_config_t *param_1,
          cam_pp_feature_config_t *param_2,FuncDef90 *param_3,void *param_4)

{
  cam_pp_offline_src_config_t cVar1;
  int *this_00;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  
  this_00 = (int *)operator_new(100);
  QCameraReprocessChannel::QCameraReprocessChannel
            ((QCameraReprocessChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  iVar2 = (**(code **)(*this_00 + 8))(this_00,0,0,0);
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(*(int *)this + 8))(this,9);
    if (piVar3 == (int *)0x0) {
      if (*(int *)(*(int *)(DAT_000b96e4 + 0xb96be) + 0x20) == 0) goto LAB_000b95d0;
      uVar6 = 0x2699;
      iVar2 = DAT_000b96e8 + 0xb96d0;
      iVar5 = (int)&DAT_000b96d8 + DAT_000b96ec;
    }
    else {
      pvVar4 = (void *)(**(code **)(*piVar3 + 0x24))(piVar3,0);
      __aeabi_memclr8(pvVar4,0x8350);
      *(undefined4 *)((int)pvVar4 + 4) = 9;
      *(undefined4 *)((int)pvVar4 + 8) = *(undefined4 *)param_1;
      uVar6 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((int)pvVar4 + 0xc) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((int)pvVar4 + 0x10) = uVar6;
      __aeabi_memcpy8((void *)((int)pvVar4 + 0x14),param_1 + 0xc,0x188);
      *(undefined4 *)((int)pvVar4 + 0x1a0) = 1;
      cVar1 = param_1[0x194];
      *(undefined4 *)((int)pvVar4 + 0x248) = 1;
      *(cam_pp_offline_src_config_t *)((int)pvVar4 + 0x1a4) = cVar1;
      __aeabi_memcpy8((void *)((int)pvVar4 + 0x24c),param_1,0x19c);
      __aeabi_memcpy8((void *)((int)pvVar4 + 1000),param_2,0x90);
      iVar2 = (**(code **)(*this_00 + 0xc))
                        (this_00,this,piVar3,0,param_1[0x194],
                         *(int *)(*(int *)(DAT_000b96f0 + 0xb9666) + *(int *)(this + 0x5c) * 4) +
                         0x3008,param_3,param_4,0,0,1);
      if (iVar2 == 0) {
        return this_00;
      }
      if (*(int *)(*(int *)(DAT_000b96f4 + 0xb969c) + 0x20) == 0) goto LAB_000b95d0;
      uVar6 = 0x26b1;
      iVar2 = DAT_000b96f8 + 0xb96ac;
      iVar5 = DAT_000b96fc + 0xb96b8;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000b96d8 + 0xb95b4) + 0x20) == 0) goto LAB_000b95d0;
    uVar6 = 0x2692;
    iVar2 = DAT_000b96dc + 0xb95c2;
    iVar5 = DAT_000b96e0 + 0xb95ce;
  }
  mm_camera_debug_log(1,1,iVar5,uVar6,iVar2);
LAB_000b95d0:
  (**(code **)(*this_00 + 4))(this_00);
  return (int *)0x0;
}

