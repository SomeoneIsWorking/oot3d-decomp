// OoT3D decomp @ 004b0a70  name=FUN_004b0a70  size=176

void FUN_004b0a70(int param_1)

{
  byte bVar1;
  byte bVar2;
  int unaff_r4;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;

  if (unaff_r4 < 0xc) {
    unaff_r4 = 0xc;
  }
  if (0x34 < unaff_r4) {
    unaff_r4 = 0x34;
  }
  *(int *)(param_1 + 0x48) = unaff_r4;
  bVar1 = *(byte *)(unaff_r4 + 0x4b0a04);
  bVar2 = *(byte *)(unaff_r4 + 0x4b0a3a);
  iVar6 = 0x10;
  pbVar3 = &DAT_004b0994 + (uint)bVar2 * 0x10;
  pbVar4 = &DAT_004b09f4;
  puVar5 = (uint *)(param_1 + 0x178);
  do {
    *puVar5 = (uint)*pbVar4 | (uint)*pbVar3 << (bVar1 + 8 & 0xff);
    iVar6 = iVar6 + -1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 0x40;
  pbVar3 = &DAT_004b07d4 + (uint)bVar2 * 0x40;
  pbVar4 = &DAT_004b0954;
  puVar5 = (uint *)(param_1 + 0x78);
  do {
    *puVar5 = (uint)*pbVar4 | (uint)*pbVar3 << (bVar1 + 6 & 0xff);
    iVar6 = iVar6 + -1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  *(undefined1 *)(param_1 + 0x51) = 9;
  *(undefined1 *)(param_1 + 0x52) = 9;
  *(undefined1 *)(param_1 + 0x53) = 9;
  *(undefined1 *)(param_1 + 0x54) = 9;
  *(undefined1 *)(param_1 + 0x58) = 9;
  *(undefined1 *)(param_1 + 0x60) = 9;
  *(undefined1 *)(param_1 + 0x68) = 9;
  *(undefined1 *)(param_1 + 0x70) = 9;
  return;
}
