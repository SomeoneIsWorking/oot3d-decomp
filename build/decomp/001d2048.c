// OoT3D decomp @ 001d2048  name=FUN_001d2048  size=124

void FUN_001d2048(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0037571c(param_2);
  if ((((iVar1 == 0) ||
       (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == (short *)0x0)) ||
      (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) != 1)) &&
     ((*(ushort *)(param_1 + 0x290) & 1) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2a8),0);
    return;
  }
  return;
}
