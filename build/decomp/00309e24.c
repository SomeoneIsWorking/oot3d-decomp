// OoT3D decomp @ 00309e24  name=FUN_00309e24  size=56

void FUN_00309e24(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;

  puVar2 = (uint *)*param_1;
  for (; puVar2 != (uint *)0x0; puVar2 = (uint *)*puVar2) {
    bVar3 = puVar2 <= param_2;
    if (param_2 <= puVar2) {
      bVar3 = param_3 + param_2 <= puVar2;
    }
    puVar1 = puVar2;
    if (!bVar3) {
      *param_1 = *puVar2;
      puVar1 = param_1;
    }
    param_1 = puVar1;
  }
  return;
}
