
/* cam_cds_mode_type_t
   qcamera::lookupProp<qcamera::QCamera3HardwareInterface::QCameraPropMap>(qcamera::QCamera3HardwareInterface::QCameraPropMap
   const*, unsigned int, char const*) */

cam_cds_mode_type_t
qcamera::lookupProp_qcamera__QCamera3HardwareInterface__QCameraPropMap_
          (QCameraPropMap *param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint unaff_r6;
  uint uVar2;
  
  if (param_3 != (char *)0x0) {
    unaff_r6 = param_2;
  }
  if (param_3 != (char *)0x0 && param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = strcmp(*(char **)(param_1 + uVar2 * 8),param_3);
      if (iVar1 == 0) {
        return *(cam_cds_mode_type_t *)(param_1 + uVar2 * 8 + 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < unaff_r6);
    return 4;
  }
  return 4;
}

