// OoT3D decomp @ 004289b8  name=FUN_004289b8  size=276

void FUN_004289b8(undefined2 *param_1,undefined2 *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  undefined2 local_1c;
  undefined2 local_1a;
  byte local_18;

  pbVar4 = DAT_00428acc;
  iVar6 = FUN_00436c98(*(undefined4 *)(DAT_00428acc + 0x14),&local_1c);
  if (iVar6 == 0) {
    *param_1 = *(undefined2 *)(pbVar4 + 2);
    *param_2 = *(undefined2 *)(pbVar4 + 4);
    *param_3 = *pbVar4;
  }
  else {
    if (local_18 == 0) {
      *param_1 = *(undefined2 *)(pbVar4 + 2);
      *param_2 = *(undefined2 *)(pbVar4 + 4);
    }
    else {
      *param_1 = local_1c;
      *(undefined2 *)(pbVar4 + 2) = local_1c;
      *param_2 = local_1a;
      *(undefined2 *)(pbVar4 + 4) = local_1a;
    }
    *param_3 = local_18;
    *pbVar4 = local_18;
  }
  bVar1 = *param_3;
  uVar7 = (ushort)bVar1;
  FUN_002f43e8();
  uVar2 = *(ushort *)(pbVar4 + 6);
  *(ushort *)(pbVar4 + 6) = (ushort)bVar1;
  uVar5 = uVar7 & ~uVar2;
  *(ushort *)(pbVar4 + 8) = uVar5;
  *(ushort *)(pbVar4 + 10) = uVar2 & ~(ushort)bVar1;
  if (uVar7 == 0) {
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    uVar5 = 0;
  }
  else if (uVar5 == 0) {
    uVar5 = 0;
    if (*(ushort *)(pbVar4 + 0xc) < 8) {
      *(ushort *)(pbVar4 + 0xc) = *(ushort *)(pbVar4 + 0xc) + 1;
    }
    else {
      sVar3 = *(short *)(pbVar4 + 0xe);
      *(ushort *)(pbVar4 + 0xe) = sVar3 + 1U;
      if (1 < (ushort)(sVar3 + 1U)) {
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar5 = uVar7;
      }
    }
  }
  *(ushort *)(pbVar4 + 0x10) = uVar5;
  return;
}
