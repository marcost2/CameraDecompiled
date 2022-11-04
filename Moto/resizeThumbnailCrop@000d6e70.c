
/* qcamera::QCameraPostProcessor::resizeThumbnailCrop(cam_dimension_t const&, cam_rect_t&) */

void qcamera::QCameraPostProcessor::resizeThumbnailCrop
               (cam_dimension_t *param_1,cam_rect_t *param_2)

{
  int iVar1;
  cam_rect_t cVar2;
  int iVar3;
  cam_rect_t in_r3;
  uint uVar4;
  
  cVar2 = param_2[3];
  if (cVar2 != 0) {
    in_r3 = param_2[2];
  }
  if (cVar2 != 0 && in_r3 != 0) {
    uVar4 = *(uint *)param_1;
    if (uVar4 != 0) {
      param_1 = *(cam_dimension_t **)(param_1 + 4);
    }
    if (uVar4 != 0 && param_1 != (cam_dimension_t *)0x0) {
      if ((int)((int)param_1 * in_r3) < (int)(uVar4 * cVar2)) {
        uVar4 = ((int)param_1 * in_r3) / uVar4;
        param_2[3] = uVar4;
        uVar4 = param_2[1] + (int)(cVar2 - uVar4) / 2;
        param_2[1] = uVar4;
        if (0x7fffffff < uVar4) {
          param_2[1] = 0;
          return;
        }
      }
      else {
        uVar4 = (uVar4 * cVar2) / (uint)param_1;
        param_2[2] = uVar4;
        cVar2 = *param_2 + (int)(in_r3 - uVar4) / 2;
        *param_2 = cVar2;
        if ((int)cVar2 < 0) {
          *param_2 = 0;
          return;
        }
      }
      return;
    }
    iVar1 = DAT_000d6f08 + 0xd6ea2;
    iVar3 = DAT_000d6f0c + 0xd6ea4;
  }
  else {
    iVar1 = DAT_000d6efc + 0xd6e86;
    iVar3 = DAT_000d6f00 + 0xd6e88;
  }
  __android_log_print(6,iVar1,iVar3,DAT_000d6f04 + 0xd6eaa);
  return;
}

