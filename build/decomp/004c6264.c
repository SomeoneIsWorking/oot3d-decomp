// OoT3D decomp @ 004c6264  name=FUN_004c6264  size=252

void FUN_004c6264(undefined1 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pcVar1 = (char *)func_0x00350820(param_1 + 4,uRam004c6360,0x2c,8);
  pcVar1[0x180] = '\0';
  pcVar1[0x181] = '\0';
  pcVar1[0x182] = '\0';
  pcVar1[0x183] = '\0';
  pcVar1[0x184] = '\0';
  pcVar1[0x185] = '\0';
  pcVar1[0x186] = '\0';
  pcVar1[0x187] = '\0';
  pcVar1[0x188] = '\0';
  pcVar1[0x189] = '\0';
  pcVar1[0x18a] = '\x01';
  pcVar1[0x18b] = '\0';
  pcVar1[0x18c] = '\0';
  pcVar1[0x18d] = '\x01';
  pcVar1[400] = '\0';
  pcVar1[0x191] = '\0';
  pcVar1[0x192] = '\0';
  pcVar1[0x194] = '\0';
  pcVar1[0x195] = '\0';
  pcVar1[0x196] = '\0';
  pcVar1[0x198] = '\0';
  pcVar1[0x199] = '\0';
  pcVar1[0x19a] = '\0';
  pcVar1[0x19c] = '\0';
  pcVar1[0x19d] = '\0';
  pcVar1[0x19e] = '\0';
  pcVar1[0x1a0] = '\0';
  pcVar1[0x1a1] = '\0';
  pcVar1[0x1a2] = '\0';
  pcVar1[0x1a4] = '\0';
  pcVar1[0x1a5] = '\0';
  pcVar1[0x1a6] = '\0';
  pcVar1[0x1a8] = '\0';
  pcVar1[0x1a9] = '\0';
  cVar5 = '\0';
  iVar6 = 8;
  pcVar1[0x1aa] = '\0';
  pcVar2 = pcVar1 + 0x160;
  pcVar3 = pcVar1 + 0x168;
  pcVar4 = pcVar1 + 0x170;
  pcVar7 = pcVar1 + 0x178;
  do {
    *pcVar2 = '\0';
    *pcVar3 = '\0';
    *pcVar4 = '\0';
    *pcVar7 = '\0';
    *pcVar1 = cVar5;
    iVar6 = iVar6 + -1;
    cVar5 = cVar5 + '\x01';
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    pcVar1 = pcVar1 + 0x2c;
    pcVar7 = pcVar7 + 1;
  } while (iVar6 != 0);
  return;
}
