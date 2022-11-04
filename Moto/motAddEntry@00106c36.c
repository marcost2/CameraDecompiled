
/* qcamera::MotExifHal3::motAddEntry(unsigned int, exif_tag_type_t, unsigned int, void*) */

void qcamera::MotExifHal3::motAddEntry
               (uint param_1,exif_tag_type_t param_2,uint param_3,void *param_4)

{
  void *in_stack_00000000;
  
  QCamera3Exif::addEntry
            (*(QCamera3Exif **)(param_1 + 8),param_2,param_3,(uint)param_4,in_stack_00000000);
  return;
}

