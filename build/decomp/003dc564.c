// OoT3D decomp @ 003dc564  name=FUN_003dc564  size=156

void FUN_003dc564(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float local_18 [2];
  float local_10;

  FUN_0036c5d8(param_1,local_18,*(int *)(DAT_003dc600 + param_2) + 0x28);
  if (((int)ABS(local_18[0]) < DAT_003dc604) && ((int)ABS(local_10) < DAT_003dc604 + 0x280000)) {
    FUN_003705a0(DAT_003dc60c,DAT_003dc608,param_1 + 0x58);
    return;
  }
  iVar2 = FUN_003705a0(DAT_003dc610,DAT_003dc610,param_1 + 0x58);
  uVar1 = DAT_003dc614;
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}
