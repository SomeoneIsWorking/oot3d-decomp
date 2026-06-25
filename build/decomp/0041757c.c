// OoT3D decomp @ 0041757c  name=FUN_0041757c  size=72

void FUN_0041757c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *param_1 = DAT_004175c4;
  iVar3 = 0xb;
  puVar1 = param_1;
  do {
    iVar3 = iVar3 + -1;
    param_1[iVar2 * 2 + 1] = 0;
    *(undefined *)(puVar1 + 2) = 3;
    param_1[iVar2 * 2 + 3] = 0;
    iVar2 = iVar2 + 2;
    puVar1 = puVar1 + 4;
    *(undefined *)puVar1 = 3;
  } while (iVar3 != 0);
  return;
}

