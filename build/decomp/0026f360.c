// OoT3D decomp @ 0026f360  name=FUN_0026f360  size=96

void FUN_0026f360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((*(ushort *)(param_1 + 0x200) & 2) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x270) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x270),param_1 + 0x148);
    iVar1 = *(int *)(param_1 + 0x270);
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    FUN_00372170(*(undefined4 *)(param_1 + 0x270),0);
    return;
  }
  return;
}
