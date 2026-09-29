// OoT3D decomp @ 00358338  name=FUN_00358338  size=156

void FUN_00358338(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;

  if (*(byte *)(param_1 + 0x74) != 0) {
    puVar4 = param_3 + -0xd;
    puVar5 = param_2 + -0xd;
    if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      *param_2 = *param_3;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar6;
      param_2[4] = uVar7;
      param_2[5] = uVar8;
      uVar2 = param_3[7];
      uVar3 = param_3[8];
      uVar6 = param_3[9];
      uVar7 = param_3[10];
      uVar8 = param_3[0xb];
      param_2[6] = param_3[6];
      param_2[7] = uVar2;
      param_2[8] = uVar3;
      param_2[9] = uVar6;
      param_2[10] = uVar7;
      param_2[0xb] = uVar8;
      param_2[0xc] = param_3[0xc];
      puVar4 = param_3;
      puVar5 = param_2;
    }
    for (uVar1 = (uint)(*(byte *)(param_1 + 0x74) >> 1); uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = puVar4[0xe];
      uVar3 = puVar4[0xf];
      uVar6 = puVar4[0x10];
      puVar5[0xd] = puVar4[0xd];
      puVar5[0xe] = uVar2;
      puVar5[0xf] = uVar3;
      puVar5[0x10] = uVar6;
      uVar2 = puVar4[0x12];
      uVar3 = puVar4[0x13];
      uVar6 = puVar4[0x14];
      puVar5[0x11] = puVar4[0x11];
      puVar5[0x12] = uVar2;
      puVar5[0x13] = uVar3;
      puVar5[0x14] = uVar6;
      uVar2 = puVar4[0x16];
      uVar3 = puVar4[0x17];
      uVar6 = puVar4[0x18];
      uVar7 = puVar4[0x19];
      puVar5[0x15] = puVar4[0x15];
      puVar5[0x16] = uVar2;
      puVar5[0x17] = uVar3;
      puVar5[0x18] = uVar6;
      puVar5[0x19] = uVar7;
      uVar2 = puVar4[0x1b];
      uVar3 = puVar4[0x1c];
      uVar6 = puVar4[0x1d];
      uVar7 = puVar4[0x1e];
      uVar8 = puVar4[0x1f];
      puVar5[0x1a] = puVar4[0x1a];
      puVar5[0x1b] = uVar2;
      puVar5[0x1c] = uVar3;
      puVar5[0x1d] = uVar6;
      puVar5[0x1e] = uVar7;
      puVar5[0x1f] = uVar8;
      uVar2 = puVar4[0x21];
      uVar3 = puVar4[0x22];
      uVar6 = puVar4[0x23];
      uVar7 = puVar4[0x24];
      uVar8 = puVar4[0x25];
      puVar9 = puVar4 + 0x26;
      puVar5[0x20] = puVar4[0x20];
      puVar5[0x21] = uVar2;
      puVar5[0x22] = uVar3;
      puVar5[0x23] = uVar6;
      puVar5[0x24] = uVar7;
      puVar5[0x25] = uVar8;
      puVar10 = puVar5 + 0x26;
      puVar4 = puVar4 + 0x1a;
      puVar5 = puVar5 + 0x1a;
      *puVar10 = *puVar9;
    }
    return;
  }
  return;
}
