// OoT3D decomp @ 00401860  name=FUN_00401860  size=196

void FUN_00401860(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint *puVar5;

  FUN_0030dd88();
  iVar2 = FUN_0030dd7c();
  iVar2 = iVar2 + 0x5c;
  if (param_1 < 2) {
    pbVar3 = *(byte **)(iVar2 + param_1 * 4);
    uVar4 = 1 - *pbVar3 & 0xff;
    pbVar3 = pbVar3 + uVar4 * 0x1c + 4;
    *(undefined4 *)pbVar3 = param_2;
    *(undefined4 *)(pbVar3 + 4) = param_3;
    *(undefined4 *)(pbVar3 + 8) = param_4;
    *(undefined4 *)(pbVar3 + 0xc) = param_5;
    *(undefined4 *)(pbVar3 + 0x10) = param_6;
    *(undefined4 *)(pbVar3 + 0x14) = param_7;
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    coproc_moveto_Data_Synchronization(0);
    do {
      puVar5 = *(uint **)(iVar2 + param_1 * 4);
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = **(uint **)(iVar2 + param_1 * 4) & 0xffff0000 | uVar4 | 0x100;
  }
  return;
}
