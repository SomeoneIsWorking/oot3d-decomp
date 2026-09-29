// OoT3D decomp @ 0033b6bc  name=FUN_0033b6bc  size=448

undefined4 FUN_0033b6bc(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_230 [524];

  if (param_2[0x7d1] != '\0') {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x7a8);
  if (iVar2 != 0) {
    FUN_003254f4(iVar2,param_1,iVar2);
    FUN_003254d8(param_1,param_2 + 0x3dc);
    FUN_00325430(param_1,param_2 + 0x3dc);
    param_2[0x3dc] = -1;
    param_2[0x7a8] = '\0';
    param_2[0x7a9] = '\0';
    param_2[0x7aa] = '\0';
    param_2[0x7ab] = '\0';
    FUN_00325354(param_1);
    FUN_0032525c(param_1,param_1 + 0x208c);
    FUN_00325114(param_1,(int)*param_2);
    if (0x12 < (int)*(short *)(param_1 + 0x104) - 0x51U) {
      FUN_003470b8(param_1);
    }
  }
  FUN_00371738(param_2 + 0x3dc,param_2,0x3dc);
  *param_2 = (char)param_3;
  param_2[0x3cc] = '\0';
  param_2[0x3cd] = '\0';
  param_2[0x3ce] = '\0';
  param_2[0x3cf] = '\0';
  param_2[6] = '\0';
  FUN_00343280(param_2 + 8,0x3c0);
  param_2[0x7d1] = '\x01';
  iVar3 = *(int *)(param_1 + 0x5c08) + param_3 * 0x44;
  iVar2 = *(int *)(iVar3 + 0x40);
  if (iVar2 == 0) {
    iVar2 = FUN_00324fd0(iVar3);
    *(int *)(iVar3 + 0x40) = iVar2;
  }
  if (param_2[0x7d2] == '\0') {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7c4);
    param_2[0x7d2] = '\x01';
    param_2[0x3d4] = '\0';
  }
  else if (param_2[0x7d3] == '\0') {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7c8);
    param_2[0x7d3] = '\x01';
    param_2[0x3d4] = '\x01';
  }
  else if (param_2[0x7d4] == '\0') {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7cc);
    param_2[0x7d4] = '\x01';
    param_2[0x3d4] = '\x02';
  }
  uVar4 = *(undefined4 *)(param_2 + 0x7b8);
  sVar1 = *(short *)(param_1 + 0x104);
  FUN_00324f44(auStack_230,*(int *)(param_1 + 0x5c08) + param_3 * 0x44,DAT_0033b87c);
  uVar4 = FUN_00324eac(auStack_230,uVar4,iVar2,param_3 | (int)sVar1 << 8 | 0x40000000,0);
  *(undefined4 *)(param_2 + 0x7bc) = uVar4;
  return 1;
}
