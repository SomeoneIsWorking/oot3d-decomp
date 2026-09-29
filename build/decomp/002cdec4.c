// OoT3D decomp @ 002cdec4  name=FUN_002cdec4  size=32

void FUN_002cdec4(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;

  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 7) | 1;
  }
  *(byte *)(param_1 + 7) = bVar2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(byte *)(iVar1 + 0xf) = bVar2;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 4;
  return;
}
