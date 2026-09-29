// OoT3D decomp @ 003225c4  name=FUN_003225c4  size=84

undefined4 FUN_003225c4(int param_1,uint param_2)

{
  int iVar1;

  if (*(int *)(param_1 + 0x28) + param_2 <
      (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24))) {
    iVar1 = param_1 + 0xc;
    do {
      if ((0 < (int)*(uint *)(iVar1 + 0xc)) && (param_2 <= *(uint *)(iVar1 + 0xc))) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 0xc);
  }
  return 0;
}
