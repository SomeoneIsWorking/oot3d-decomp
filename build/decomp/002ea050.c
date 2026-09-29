// OoT3D decomp @ 002ea050  name=FUN_002ea050  size=88

void FUN_002ea050(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;

  puVar3 = (undefined4 *)(param_2 + 3U & 0xfffffffc);
  uVar4 = param_4 + 3U & 0xfffffffc;
  uVar1 = FUN_00339384(param_3 - ((int)puVar3 - param_2),uVar4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = *param_1;
      *param_1 = puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + uVar4);
    } while (uVar2 < uVar1);
  }
  return;
}
