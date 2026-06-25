// OoT3D decomp @ 00417838  name=FUN_00417838  size=120

void FUN_00417838(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_004178b4;
  uVar1 = DAT_004178b0;
  *param_1 = 0;
  param_1[0x25] = uVar1;
  param_1[0x26] = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    param_1[iVar3 * 3 + 7] = uVar2;
    param_1[iVar3 * 3 + 8] = uVar2;
    param_1[iVar3 * 3 + 9] = uVar2;
    iVar3 = iVar4;
  } while (iVar4 < 10);
  param_1[0x27] = uVar2;
  return;
}

