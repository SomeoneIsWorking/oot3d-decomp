// OoT3D decomp @ 002d5a28  name=FUN_002d5a28  size=152

void FUN_002d5a28(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_002d5ac0;
  *(undefined *)((int)param_1 + 99) = 0x25;
  param_1[8] = uVar1;
  param_1[7] = uVar1;
  param_1[6] = uVar1;
  param_1[5] = uVar1;
  param_1[4] = uVar1;
  param_1[3] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xb] = uVar1;
  param_1[2] = uVar1;
  param_1[1] = uVar1;
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x5e) = 0;
  *(undefined *)((int)param_1 + 0x62) = 0x80;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = param_1 + 0x11;
  iVar3 = 6;
  *(undefined2 *)(param_1 + 0x11) = 0;
  do {
    *(undefined2 *)((int)puVar2 + 2) = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
    *(undefined2 *)puVar2 = 0;
  } while (iVar3 != 0);
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  return;
}

