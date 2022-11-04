
/* qcamera::MotExifHal1::motAddEntry(unsigned int, exif_tag_type_t, unsigned int, void*) */

void qcamera::MotExifHal1::motAddEntry
               (uint param_1,exif_tag_type_t param_2,uint param_3,void *param_4)

{
  void *in_stack_00000000;
  
  QCameraExif::addEntry
            (*(QCameraExif **)(param_1 + 0xc),param_2,param_3,(uint)param_4,in_stack_00000000);
  return;
}

