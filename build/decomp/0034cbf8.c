// OoT3D decomp @ 0034cbf8  name=FUN_0034cbf8  size=44

void FUN_0034cbf8(uint param_1)

{
  int iVar1;

  iVar1 = DAT_0034cc24 + ((int)param_1 >> 4) * 2;
  *(ushort *)(iVar1 + 0xeec) = (ushort)(1 << (param_1 & 0xf)) | *(ushort *)(iVar1 + 0xeec);
  return;
}
