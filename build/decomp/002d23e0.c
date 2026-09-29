// OoT3D decomp @ 002d23e0  name=FUN_002d23e0  size=288

void FUN_002d23e0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_48;

  iVar2 = DAT_002d2500;
  local_48 = 0;
  iVar1 = param_6 >> 3;
  if (0 < param_7 >> 3) {
    do {
      iVar9 = param_5 + local_48 * iVar1 * 0x40;
      iVar6 = param_2 + ((param_9 >> 3) + local_48) * (param_3 >> 3) * 0x40 + (param_8 >> 3) * 0x40;
      iVar10 = 0;
      if (0 < iVar1) {
        do {
          iVar8 = 0;
          iVar7 = 0;
          do {
            puVar4 = (undefined1 *)(param_6 * iVar7 + iVar9 + -1);
            pbVar3 = (byte *)(iVar2 + iVar8 + -1);
            iVar5 = 4;
            do {
              iVar5 = iVar5 + -1;
              *(undefined1 *)((uint)pbVar3[1] + iVar6) = puVar4[1];
              pbVar3 = pbVar3 + 2;
              puVar4 = puVar4 + 2;
              *(undefined1 *)((uint)*pbVar3 + iVar6) = *puVar4;
            } while (iVar5 != 0);
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 8;
          } while (iVar7 < 8);
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 8;
          iVar6 = iVar6 + 0x40;
        } while (iVar10 < iVar1);
      }
      local_48 = local_48 + 1;
    } while (local_48 < param_7 >> 3);
  }
  return;
}
