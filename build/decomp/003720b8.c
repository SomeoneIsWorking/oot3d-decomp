// OoT3D decomp @ 003720b8  name=FUN_003720b8  size=184

void FUN_003720b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_0037571c(param_2);
  if ((((iVar1 == 0) ||
       (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == (short *)0x0)) ||
      (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) != 1)) &&
     (((iVar1 = FUN_0037571c(param_2), iVar1 == 0 ||
       (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == (short *)0x0)) ||
      (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) != 4)))) {
    if (*(char *)(param_1 + 0x28a) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2a8),param_1 + 0x148);
      uVar2 = *(undefined4 *)(param_1 + 0x2a8);
      if (((*DAT_003721cc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_003721cc), iVar1 != 0)) {
        FUN_0036788c(DAT_003721d0);
      }
      FUN_00330b98(DAT_003721dc,uVar2,0);
      return;
    }
    *(undefined1 *)(param_1 + 0x28a) = 1;
  }
  return;
}
