// OoT3D decomp @ 0016ea34  name=FUN_0016ea34  size=104

void FUN_0016ea34(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;

  uVar1 = *(ushort *)(param_1 + 0x1c);
  FUN_00357fd0(*(undefined4 *)(param_2 + 0x20ac),*(undefined4 *)(param_1 + 0x178),param_1 + 0x28);
  iVar2 = param_1 + (((uint)uVar1 << 0x19) >> 0x1d) * 4;
  if (*(int *)(iVar2 + 0x2b0) != 0) {
    FUN_003721e0(*(int *)(iVar2 + 0x2b0),param_1 + 0x148);
    *(undefined1 *)(*(int *)(iVar2 + 0x2b0) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(iVar2 + 0x2b0),0);
    return;
  }
  return;
}
