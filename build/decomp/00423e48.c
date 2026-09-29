// OoT3D decomp @ 00423e48  name=FUN_00423e48  size=264

void FUN_00423e48(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_1c [12];
  int local_10;

  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_002f9ca0(0x208,&local_10);
    if (param_1[10] == 0) {
      FUN_00313d58(auStack_1c);
      FUN_00438524(auStack_1c,param_1[8],local_10,param_1[0xc]);
      iVar1 = FUN_00314870(auStack_1c);
      FUN_00438530(auStack_1c);
      iVar2 = FUN_00314870(auStack_1c);
      FUN_002f9c88(iVar2 - iVar1);
      FUN_002f9ca0(0x208,&local_10);
      FUN_003120d4(*param_1);
    }
    uVar3 = local_10 - param_1[8];
    param_1[5] = uVar3;
    if (uVar3 <= (uint)param_1[0xe]) {
      uVar3 = param_1[0xe];
    }
    param_1[0xe] = uVar3;
    return;
  }
  if (param_1[10] == 0) {
    FUN_00302a1c();
  }
  FUN_004479e0(param_1 + 4,param_1 + 5,param_1 + 6,param_1 + 7);
  FUN_002f9ca0(DAT_00423f50,param_1 + 8);
  param_1[8] = param_1[8] + param_1[4];
  FUN_002f9c44(0x800);
  FUN_003120d4(*param_1);
  return;
}
