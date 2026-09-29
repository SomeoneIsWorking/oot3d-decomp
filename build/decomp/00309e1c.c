// OoT3D decomp @ 00309e1c  name=FUN_00309e1c  size=8

void FUN_00309e1c(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;

  puVar2 = (uint *)(param_1 + 8U);
  for (puVar3 = *(uint **)(param_1 + 8U); puVar3 != (uint *)0x0; puVar3 = (uint *)*puVar3) {
    bVar4 = puVar3 <= param_2;
    if (param_2 <= puVar3) {
      bVar4 = param_3 + param_2 <= puVar3;
    }
    puVar1 = puVar3;
    if (!bVar4) {
      *puVar2 = *puVar3;
      puVar1 = puVar2;
    }
    puVar2 = puVar1;
  }
  return;
}
