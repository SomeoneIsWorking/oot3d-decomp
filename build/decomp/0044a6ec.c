// OoT3D decomp @ 0044a6ec  name=FUN_0044a6ec  size=80

void FUN_0044a6ec(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  do {
    iVar2 = (int)(char)iVar1;
    FUN_002e2330(DAT_0044a73c,iVar2,param_1 + iVar2 * 0x14);
    FUN_002e21ec(DAT_0044a73c,iVar2,param_1 + iVar2 * 0x34 + 0x28);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
