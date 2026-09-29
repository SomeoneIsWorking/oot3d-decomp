// OoT3D decomp @ 003135ac  name=FUN_003135ac  size=56

void FUN_003135ac(int *param_1,uint param_2)

{
  uint *puVar1;

  puVar1 = *(uint **)(*param_1 + 8);
  *puVar1 = param_2 | 0x7fff0000;
  puVar1[1] = DAT_003135e4;
  *(uint **)(*param_1 + 8) = puVar1 + 2;
  return;
}
