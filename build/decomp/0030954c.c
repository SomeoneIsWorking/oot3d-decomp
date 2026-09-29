// OoT3D decomp @ 0030954c  name=FUN_0030954c  size=100

void FUN_0030954c(float param_1,int param_2,uint param_3)

{
  bool bVar1;
  float fVar2;

  fVar2 = DAT_003095b4;
  if ((param_1 <= DAT_003095b4) && (fVar2 = param_1, param_1 < DAT_003095b0)) {
    fVar2 = DAT_003095b0;
  }
  bVar1 = *(byte *)(param_2 + 0x22) != param_3;
  if (bVar1) {
    *(char *)(param_2 + 0x22) = (char)param_3;
  }
  if (*(float *)(param_2 + 0x3c) == fVar2) {
    if (!bVar1) {
      return;
    }
  }
  else {
    *(float *)(param_2 + 0x3c) = fVar2;
  }
  *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 0x20;
  return;
}
