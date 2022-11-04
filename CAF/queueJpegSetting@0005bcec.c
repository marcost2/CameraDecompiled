
/* qcamera::QCamera3PicChannel::queueJpegSetting(unsigned int, metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCamera3PicChannel::queueJpegSetting
          (QCamera3PicChannel *this,uint param_1,metadata_buffer_t *param_2)

{
  undefined auVar1 [16];
  uint *puVar2;
  char *__s;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  QCamera3HardwareInterface *this_00;
  undefined8 uVar9;
  
  this_00 = *(QCamera3HardwareInterface **)(this + 4);
  puVar2 = (uint *)malloc(200);
  if (puVar2 == (uint *)0x0) {
    if (*(int *)(*(int *)(DAT_0005bedc + 0x5be28) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0xfffffff4;
  }
  __aeabi_memclr4(puVar2 + 2,0xc0);
  *puVar2 = param_1;
  puVar2[1] = 0;
  if (param_2 == (metadata_buffer_t *)0x0) {
    *(jpeg_settings_t *)((int)puVar2 + 0xc6) = (jpeg_settings_t)0x0;
    *(jpeg_settings_t *)(puVar2 + 8) = (jpeg_settings_t)0x0;
    *(jpeg_settings_t *)(puVar2 + 5) = (jpeg_settings_t)0x0;
    *(jpeg_settings_t *)(puVar2 + 2) = (jpeg_settings_t)0x55;
  }
  else {
    if (param_2[0xa8] != (metadata_buffer_t)0x0) {
      puVar2[1] = *(uint *)(param_2 + 0x736f8);
    }
    *(jpeg_settings_t *)(puVar2 + 2) = (jpeg_settings_t)0x55;
    if (param_2[0xa9] != (metadata_buffer_t)0x0) {
      *(jpeg_settings_t *)(puVar2 + 2) = SUB41(*(undefined4 *)(param_2 + 0x736fc),0);
    }
    if (param_2[0xaa] != (metadata_buffer_t)0x0) {
      *(jpeg_settings_t *)((int)puVar2 + 9) = SUB41(*(undefined4 *)(param_2 + 0x73700),0);
    }
    if (param_2[0xab] != (metadata_buffer_t)0x0) {
      uVar7 = *(uint *)(param_2 + 0x73708);
      puVar2[3] = *(uint *)(param_2 + 0x73704);
      puVar2[4] = uVar7;
    }
    *(jpeg_settings_t *)(puVar2 + 5) = (jpeg_settings_t)0x0;
    if (param_2[0xa7] != (metadata_buffer_t)0x0) {
      uVar7 = *(uint *)(param_2 + 0x736f0);
      uVar8 = *(uint *)(param_2 + 0x736f4);
      *(jpeg_settings_t *)(puVar2 + 5) = (jpeg_settings_t)0x1;
      puVar2[6] = uVar7;
      puVar2[7] = uVar8;
    }
    *(jpeg_settings_t *)(puVar2 + 8) = (jpeg_settings_t)0x0;
    if (param_2[0xa5] != (metadata_buffer_t)0x0) {
      auVar1 = *(undefined (*) [16])(param_2 + 0x736b0);
      uVar9 = *(undefined8 *)(param_2 + 0x736c0);
      *(jpeg_settings_t *)(puVar2 + 8) = (jpeg_settings_t)0x1;
      *(undefined8 *)(puVar2 + 0xe) = uVar9;
      *(longlong *)(puVar2 + 10) = SUB168(auVar1,0);
      *(longlong *)(puVar2 + 0xc) = SUB168(auVar1 >> 0x40,0);
    }
    if (param_2[0xa6] != (metadata_buffer_t)0x0) {
      *(jpeg_settings_t *)(puVar2 + 0x18) = (jpeg_settings_t)0x0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      *(undefined8 *)(puVar2 + 0x16) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x12) = 0;
      __strlcpy_chk();
    }
    *(jpeg_settings_t *)((int)puVar2 + 0xc6) = (jpeg_settings_t)0x0;
    if ((param_2[0xe7] != (metadata_buffer_t)0x0) && (*(int *)(param_2 + 0x76c98) != 0)) {
      *(jpeg_settings_t *)((int)puVar2 + 0xc6) = (jpeg_settings_t)0x1;
    }
  }
  __s = (char *)QCamera3HardwareInterface::getEepromVersionInfo(this_00);
  puVar3 = (undefined4 *)QCamera3HardwareInterface::getLdafCalib(this_00);
  if (__s == (char *)0x0) {
    if (puVar3 == (undefined4 *)0x0) goto LAB_0005becc;
    *(jpeg_settings_t *)((int)puVar2 + 0x61) = (jpeg_settings_t)0x1;
    iVar5 = 0;
  }
  else {
    sVar4 = strlen(__s);
    if (puVar3 == (undefined4 *)0x0 && sVar4 == 0) goto LAB_0005becc;
    *(jpeg_settings_t *)((int)puVar2 + 0x61) = (jpeg_settings_t)0x1;
    sVar4 = strlen(__s);
    if (sVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = snprintf((char *)((int)puVar2 + 0x62),100,(char *)0x64,DAT_0005bee8 + 0x5be94,__s);
    }
    if (puVar3 == (undefined4 *)0x0) goto LAB_0005becc;
  }
  snprintf((char *)((int)puVar2 + iVar5 + 0x62),0xffffffff,(char *)(100 - iVar5),
           DAT_0005beec + 0x5bec4,*puVar3,puVar3[1]);
LAB_0005becc:
  uVar6 = QCamera3PostProcessor::
          __ThumbV7PILongThunk__ZN7qcamera21QCamera3PostProcessor22processJpegSettingDataEPNS_15jpeg_settings_tE
                    ((QCamera3PostProcessor *)(this + 0x90),(jpeg_settings_t *)puVar2);
  return uVar6;
}

