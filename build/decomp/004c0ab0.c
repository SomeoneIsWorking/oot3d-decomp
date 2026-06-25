// OoT3D decomp @ 004c0ab0  name=FUN_004c0ab0  size=276

ushort * FUN_004c0ab0(int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = 0xff;
  if (*param_2 == 0x7f) {
    param_2 = param_2 + 1;
    uVar3 = *param_2 & 0xff;
  }
  *(char *)(param_1 + 4) = (char)uVar3;
  if (uVar3 == 0xff) {
    return param_2 + 1;
  }
  puVar5 = (uint *)(DAT_004c0bc4 + uVar3 * 8);
  uVar6 = *puVar5;
  uVar8 = puVar5[1];
  if (uVar3 == 0xe || uVar3 == 0xd) {
    *(uint *)(param_1 + 8) = (uint)param_2[1];
    *(uint *)(param_1 + 0xc) = *(uint *)(param_2 + 2) >> 0x10 | *(uint *)(param_2 + 2) << 0x10;
  }
  else if (uVar3 == 0x11) {
    *(uint *)(param_1 + 8) = (uint)param_2[1];
    *(uint *)(param_1 + 0xc) = (uint)(param_2[2] >> 0xc);
    *(uint *)(param_1 + 0x10) = (param_2[2] & 0xf00) >> 8;
    *(uint *)(param_1 + 0x14) = (param_2[2] & 0xf0) >> 4;
    *(uint *)(param_1 + 0x18) = param_2[2] & 0xf;
  }
  else if (uVar3 == 0x1d) {
    *(uint *)(param_1 + 8) = param_2[1] & 7;
  }
  else if (0 < (int)uVar6) {
    puVar5 = (uint *)(param_1 + 4);
    puVar4 = param_2;
    if ((uVar6 & 1) != 0) {
      puVar4 = param_2 + 1;
      puVar5 = (uint *)(param_1 + 8);
      *puVar5 = (uint)*puVar4;
    }
    uVar1 = puVar4[1];
    for (iVar7 = (int)uVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar2 = puVar4[2];
      puVar5[1] = (uint)uVar1;
      uVar1 = puVar4[3];
      puVar5 = puVar5 + 2;
      *puVar5 = (uint)uVar2;
      puVar4 = puVar4 + 2;
    }
  }
  return param_2 + uVar8;
}

