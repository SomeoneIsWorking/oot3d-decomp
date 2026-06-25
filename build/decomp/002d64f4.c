// OoT3D decomp @ 002d64f4  name=FUN_002d64f4  size=288

void FUN_002d64f4(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_0036055c(param_1,param_2,DAT_002d6614,0);
  *(undefined *)(param_2 + 0x2228) = 0xc;
  if (1 < param_3 - 0x12U) {
    FUN_0034bbfc(param_2);
  }
  if ((*(char *)(param_2 + 0x2226) != param_3) || (2 < *(byte *)(param_2 + 0x2229))) {
    *(undefined *)(param_2 + 0x2229) = 0;
  }
  uVar4 = DAT_002d661c;
  iVar2 = DAT_002d6618;
  bVar1 = *(char *)(param_2 + 0x2229) + 1;
  if (2 < bVar1) {
    param_3 = param_3 + 2;
  }
  *(byte *)(param_2 + 0x2229) = bVar1;
  *(char *)(param_2 + 0x2226) = (char)param_3;
  FUN_00358dfc(uVar4,param_2 + 0x254,param_1,*(undefined4 *)(iVar2 + param_3 * 0x18));
  if (param_3 != 0x10 && param_3 != 0x11) {
    FUN_003603f8(param_1,param_2,DAT_002d6620);
  }
  *(undefined2 *)(param_2 + 0x2220) = *(undefined2 *)(param_2 + 0xbe);
  iVar2 = FUN_002bb884(param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_0033100c(param_2);
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = 1;
  }
  puVar3 = (undefined4 *)(DAT_002d6624 + iVar2 * 8);
  if (param_3 - 0x10U < 4) {
    uVar4 = puVar3[1];
  }
  else {
    uVar4 = *puVar3;
  }
  if (*(char *)(param_2 + 0x1ac) == '\x06') {
    uVar4 = 2;
  }
  FUN_002bb7cc(param_2,0,uVar4);
  FUN_002bb7cc(param_2,1,uVar4);
  return;
}

