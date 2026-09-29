// OoT3D decomp @ 0040e000  name=FUN_0040e000  size=48

undefined4 FUN_0040e000(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  puVar1 = (undefined4 *)FUN_0040dafc(*(undefined4 *)(param_1 + 4));
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar5;
  uVar2 = puVar1[6];
  uVar3 = puVar1[7];
  uVar4 = puVar1[8];
  uVar5 = puVar1[9];
  param_2[5] = puVar1[5];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  uVar2 = puVar1[0xb];
  uVar3 = puVar1[0xc];
  uVar4 = puVar1[0xd];
  param_2[10] = puVar1[10];
  param_2[0xb] = uVar2;
  param_2[0xc] = uVar3;
  param_2[0xd] = uVar4;
  return 1;
}
