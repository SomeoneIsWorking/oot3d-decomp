// OoT3D decomp @ 0033c730  name=FUN_0033c730  size=40

void FUN_0033c730(int param_1,int param_2)

{
  *(uint *)(DAT_0033c758 + 0xb8) =
       *(uint *)(DAT_0033c758 + 0xb8) & *(uint *)(DAT_0033c75c + param_1 * 4) |
       param_2 << *(sbyte *)(DAT_0033c760 + param_1);
  return;
}

