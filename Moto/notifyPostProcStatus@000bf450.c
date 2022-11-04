
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::notifyPostProcStatus() */

void __thiscall
qcamera::QCamera2HardwareInterface::notifyPostProcStatus(QCamera2HardwareInterface *this)

{
  QCamera2HardwareInterface QVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  QCamera2HardwareInterface QVar5;
  QCamera2HardwareInterface *pQVar6;
  QCameraCbNotifier *this_00;
  int *piVar7;
  undefined auVar8 [16];
  float fVar9;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack200;
  undefined8 local_c0;
  undefined8 uStack184;
  undefined4 local_b0;
  undefined4 local_ac;
  char acStack168 [92];
  int local_4c;
  
  piVar7 = *(int **)(DAT_000bf4a0 + 0xbf464);
  local_4c = *piVar7;
  property_get(DAT_000bf4a4 + 0xbf478,acStack168,DAT_000bf4a8 + 0xbf47a);
  uVar3 = atoi(acStack168);
  iVar4 = QCameraParametersIntf::getRecordingHintValue((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar4 == 0) {
    QVar5 = (QCamera2HardwareInterface)0x4;
  }
  else {
    iVar4 = QCameraParametersIntf::isHfrMode((QCameraParametersIntf *)(this + 0x4ac));
    QVar5 = (QCamera2HardwareInterface)0x1e;
    if (iVar4 != 0) {
      QVar5 = (QCamera2HardwareInterface)0x78;
    }
  }
  if (*(int *)(this + 0x4bc) != 0) {
    pQVar6 = this + 0x1ec4;
    QVar1 = *pQVar6;
    *pQVar6 = (QCamera2HardwareInterface)((char)QVar1 + 1U);
    if ((byte)QVar5 <= (byte)((char)QVar1 + 1U)) {
      auVar8 = ZEXT816(0);
      *pQVar6 = (QCamera2HardwareInterface)0x0;
      fVar9 = *(float *)(this + 0x1ebc);
      local_ac = 0;
      local_c0 = 0;
      uStack184 = 0;
      local_d0 = 0;
      uStack200 = 0;
      local_b0 = 0;
      local_e0 = 0x400000000000;
      local_d8 = CONCAT44(ROUND(fVar9),0xc);
      QCameraCbNotifier::notifyCallback
                ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(SUB84(ROUND((double)(fVar9 - (float)(longlong)(int)ROUND(fVar9)) *
                                      DAT_000bf8c0),0),0xd);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback
                ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_e0);
      if (*(int *)(this + 0x4bc) == 0) goto LAB_000bf8a4;
    }
    QVar5 = this[0x1ec5];
    this[0x1ec5] = (QCamera2HardwareInterface)((char)QVar5 + 1U);
    if ((uVar3 & 0xff) <= (uint)(byte)((char)QVar5 + 1U)) {
      auVar8 = ZEXT816(0);
      this_00 = (QCameraCbNotifier *)(this + 0x854);
      this[0x1ec5] = (QCamera2HardwareInterface)0x0;
      local_b0 = 0;
      local_c0 = 0;
      uStack184 = 0;
      local_d0 = 0;
      uStack200 = 0;
      local_ac = 0;
      local_d8 = CONCAT44(*(undefined4 *)(this + 0x1e94),0x18);
      local_e0 = 0x400000000000;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_b0 = 0;
      local_ac = 0;
      local_d8 = CONCAT44(*(undefined4 *)(this + 0x1e98),0x19);
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(ROUND(*(float *)(this + 0x1e9c) * DAT_000bf8c8),0x14);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      fVar9 = *(float *)(this + 0x1ea0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(ROUND(fVar9),0x1a);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      dVar2 = DAT_000bf8c0;
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(SUB84(ROUND((double)(fVar9 - (float)(longlong)(int)ROUND(fVar9)) *
                                      DAT_000bf8c0),0),0x1b);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_b0 = 0;
      local_ac = 0;
      local_d8 = CONCAT44(*(undefined4 *)(this + 0x1ea4),0x1c);
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_b0 = 0;
      local_ac = 0;
      local_d8 = CONCAT44(*(undefined4 *)(this + 0x1ea8),0x1d);
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      fVar9 = *(float *)(this + 0x1eac);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(ROUND(fVar9),0x1e);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(SUB84(ROUND((double)(fVar9 - (float)(longlong)(int)ROUND(fVar9)) * dVar2),
                                0),0x1f);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      fVar9 = *(float *)(this + 0x1eb0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(ROUND(fVar9),0x20);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(SUB84(ROUND((double)(fVar9 - (float)(longlong)(int)ROUND(fVar9)) * dVar2),
                                0),0x21);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      fVar9 = *(float *)(this + 0x1eb4);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(ROUND(fVar9),0x22);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
      local_d0 = SUB168(auVar8,0);
      uStack200 = SUB168(auVar8 >> 0x40,0);
      local_ac = 0;
      local_b0 = 0;
      local_e0._0_4_ = SUB164(auVar8,0);
      local_e0 = CONCAT44(0x4000,(undefined4)local_e0);
      local_d8 = CONCAT44(SUB84(ROUND((double)(fVar9 - (float)(longlong)(int)ROUND(fVar9)) * dVar2),
                                0),0x23);
      local_c0 = local_d0;
      uStack184 = uStack200;
      QCameraCbNotifier::notifyCallback(this_00,(qcamera_callback_argm_t *)&local_e0);
    }
  }
LAB_000bf8a4:
  if (*piVar7 != local_4c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

