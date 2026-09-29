// OoT3D decomp @ 002b6ac0  name=FUN_002b6ac0  size=80

void FUN_002b6ac0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    *(undefined2 *)(DAT_002b6b10 + param_1) = 3;
    *(undefined4 *)(param_1 + 0xc04) = DAT_002b6b14;
  }
  return;
}
