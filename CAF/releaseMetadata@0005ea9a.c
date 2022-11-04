
/* qcamera::QCamera3PostProcessor::releaseMetadata(void*, void*) */

void qcamera::QCamera3PostProcessor::releaseMetadata(void *param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    QCamera3ProcessingChannel::metadataBufDone
              (*(QCamera3ProcessingChannel **)((int)param_2 + 4),*param_1);
    __ThumbV7PILongThunk_free(param_1);
    return;
  }
  return;
}

