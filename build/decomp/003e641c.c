// OoT3D decomp @ 003e641c  name=FUN_003e641c  size=160

void FUN_003e641c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_003e64bc + param_2);
  FUN_003731e0(param_1 + 0x22c);
  if ((((*(short *)(param_1 + 0x1b8) == 1) && (*(int *)(param_1 + 0x98) < DAT_003e64c0)) &&
      (iVar1 = FUN_0037577c(param_2), iVar1 == 0)) &&
     ((*(uint *)(DAT_003e64c4 + iVar2) & 0x800) == 0)) {
    FUN_00371808(param_2,DAT_003e64c8,0xffffff9d,param_1,0);
    *(undefined2 *)(param_1 + 0x1b8) = 0;
    FUN_0036e980(param_2,0,8);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003e64cc;
  }
  return;
}
