// OoT3D decomp @ 002d2504  name=FUN_002d2504  size=348

void FUN_002d2504(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int local_4c;

  local_4c = 0;
  iVar1 = param_6 >> 3;
  if (0 < param_7 >> 3) {
    do {
      pbVar10 = (byte *)(param_5 + local_4c * iVar1 * 0x20);
      iVar5 = param_2 + ((param_9 >> 3) + local_4c) * (param_3 >> 3) * 0x20 + (param_8 >> 3) * 0x20;
      iVar11 = 0;
      if (0 < iVar1) {
        do {
          iVar9 = 8;
          pbVar7 = DAT_002d2660 + 1;
          pbVar4 = pbVar10;
          pbVar6 = DAT_002d2660;
          pbVar8 = DAT_002d2660 + 3;
          pbVar12 = DAT_002d2660 + 2;
          do {
            bVar3 = *pbVar6;
            iVar9 = iVar9 + -1;
            pbVar6 = pbVar6 + 4;
            *(byte *)((uint)bVar3 + iVar5) = *pbVar4 << 4 | *pbVar4 >> 4;
            bVar3 = *pbVar7;
            pbVar7 = pbVar7 + 4;
            *(byte *)((uint)bVar3 + iVar5) = pbVar4[1] << 4 | pbVar4[1] >> 4;
            *(byte *)((uint)*pbVar12 + iVar5) = pbVar4[2] << 4 | pbVar4[2] >> 4;
            pbVar2 = pbVar4 + 3;
            pbVar4 = pbVar4 + (param_6 + -8) / 2 + 4;
            *(byte *)((uint)*pbVar8 + iVar5) = *pbVar2 << 4 | *pbVar2 >> 4;
            pbVar8 = pbVar8 + 4;
            pbVar12 = pbVar12 + 4;
          } while (iVar9 != 0);
          iVar11 = iVar11 + 1;
          pbVar10 = pbVar10 + 4;
          iVar5 = iVar5 + 0x20;
        } while (iVar11 < iVar1);
      }
      local_4c = local_4c + 1;
    } while (local_4c < param_7 >> 3);
  }
  return;
}
