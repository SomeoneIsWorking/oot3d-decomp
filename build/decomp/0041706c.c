// OoT3D decomp @ 0041706c  name=FUN_0041706c  size=276

void FUN_0041706c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = DAT_00417180;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = param_1 + 0xb;
  param_1[9] = param_1 + 0x40b;
  param_1[10] = param_1 + 0x80b;
  iVar3 = 0;
  iVar4 = 0x200;
  puVar1 = param_1 + 0xc;
  puVar2 = param_1 + 0x40c;
  do {
    iVar4 = iVar4 + -1;
    param_1[iVar3 * 2 + 0xb] = 0;
    *(undefined *)puVar1 = 3;
    param_1[iVar3 * 2 + 0x40b] = 0;
    iVar3 = iVar3 + 1;
    *(undefined *)puVar2 = 3;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
  } while (iVar4 != 0);
  puVar1 = param_1 + 0x80a;
  iVar3 = 0;
  iVar4 = 0x10;
  do {
    iVar4 = iVar4 + -1;
    param_1[iVar3 * 2 + 0x80b] = 0;
    *(undefined *)(puVar1 + 2) = 3;
    param_1[iVar3 * 2 + 0x80d] = 0;
    iVar3 = iVar3 + 2;
    puVar1 = puVar1 + 4;
    *(undefined *)puVar1 = 3;
  } while (iVar4 != 0);
  puVar1 = param_1 + 0x84b;
  iVar3 = 0;
  iVar4 = 4;
  do {
    iVar4 = iVar4 + -1;
    param_1[iVar3 * 2 + 0x84c] = 0;
    *(undefined *)(puVar1 + 2) = 3;
    param_1[iVar3 * 2 + 0x84e] = 0;
    iVar3 = iVar3 + 2;
    puVar1 = puVar1 + 4;
    *(undefined *)puVar1 = 3;
  } while (iVar4 != 0);
  *(undefined4 *)(DAT_00417184 + (int)param_1) = 0;
  param_1[2] = 0;
  param_1[7] = param_1 + 0xb;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[6] = param_1 + 2;
  param_1[5] = 0x200;
  return;
}

