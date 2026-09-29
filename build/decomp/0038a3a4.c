// OoT3D decomp @ 0038a3a4  name=FUN_0038a3a4  size=168

void FUN_0038a3a4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_0038a454;
  uVar3 = DAT_0038a450;
  *(undefined4 *)(param_2 + 0x28) = DAT_0038a44c;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  *(undefined2 *)(param_2 + 0xbe) = 0x8000;
  iVar2 = DAT_0038a458;
  *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x4000;
  uVar3 = *(undefined4 *)(*(int *)(DAT_0038a45c + param_2) + 0xfc);
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_00358dfc(DAT_0038a464,param_2 + 0x254,param_1,uVar3);
  }
  else {
    FUN_00358dfc(DAT_0038a460,param_2 + 0x254,param_1,uVar3);
  }
  FUN_003603f8(param_1,param_2,DAT_0038a468);
  return;
}
