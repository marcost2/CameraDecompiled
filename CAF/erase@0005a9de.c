
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase(android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>) */

void android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase(_ListIterator param_1)

{
  QCamera3Stream *this;
  _Node *this_00;
  _Node *this_01;
  _Node *this_02;
  AbstractUnwindCursor *this_03;
  void *pvVar1;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  
  this = (QCamera3Stream *)
         List<qcamera::ReprocessBuffer>::
         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
         ::getNode(in_r2);
  this_00 = (_Node *)qcamera::QCamera3Stream::getStreamInfo(this);
  this_01 = (_Node *)List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode(in_r2);
  this_02 = (_Node *)List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::getNext(this_01)
  ;
  _Node::setNext(this_02,this_00);
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::setNext
            ((_Node *)this_00,(_Node *)this_02);
  this_03 = (AbstractUnwindCursor *)
            List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::getNode(in_r2);
  if (this_03 != (AbstractUnwindCursor *)0x0) {
    pvVar1 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(this_03);
    operator_delete(pvVar1);
  }
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this_00);
  return;
}

