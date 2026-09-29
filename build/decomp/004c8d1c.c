// OoT3D decomp @ 004c8d1c  name=FUN_004c8d1c  size=340

void FUN_004c8d1c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int local_48;

  local_48 = 0;
  iVar1 = param_6 >> 3;
  if (0 < param_7 >> 3) {
    do {
      pbVar8 = (byte *)(param_5 + local_48 * iVar1 * 8);
      iVar7 = param_2 + ((param_9 >> 3) + local_48) * (param_3 >> 3) * 0x20 + (param_8 >> 3) * 0x20;
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          iVar6 = 0;
          iVar10 = 8;
          pbVar5 = pbVar8;
          do {
            bVar2 = *pbVar5;
            uVar3 = (uint)bVar2;
            pbVar4 = (byte *)(iVar7 + iVar6 * 4);
            iVar10 = iVar10 + -1;
            pbVar5 = pbVar5 + ((int)(param_6 + ((uint)(param_6 >> 0x1f) >> 0x1d)) >> 3);
            *pbVar4 = ((char)bVar2 >> 7) * -0xf | bVar2 >> 2 & 0x10;
            iVar6 = iVar6 + 1;
            pbVar4[1] = (char)((int)(uVar3 << 0x1a) >> 0x1f) * -0xf | bVar2 & 0x10;
            pbVar4[2] = (char)((int)(uVar3 << 0x1c) >> 0x1f) * -0xf | (bVar2 & 4) << 2;
            pbVar4[3] = (char)((int)(uVar3 << 0x1e) >> 0x1f) * -0xf | (byte)((uVar3 & 1) << 4);
          } while (iVar10 != 0);
          iVar9 = iVar9 + 1;
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar7 + 0x20;
        } while (iVar9 < iVar1);
      }
      local_48 = local_48 + 1;
    } while (local_48 < param_7 >> 3);
  }
  return;
}
