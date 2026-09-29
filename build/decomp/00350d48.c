// OoT3D decomp @ 00350d48  name=FUN_00350d48  size=356

undefined4
FUN_00350d48(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 *param_5)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint in_fpscr;
  float fVar13;

  *param_2 = param_3;
  *(undefined1 *)(param_2 + 5) = *param_4;
  *(undefined1 *)(param_2 + 4) = param_4[1];
  *(undefined1 *)((int)param_2 + 0x11) = param_4[2];
  *(undefined1 *)((int)param_2 + 0x12) = param_4[3];
  *(undefined1 *)((int)param_2 + 0x13) = param_4[4];
  *(undefined1 *)((int)param_2 + 0x15) = param_4[5];
  iVar5 = *(int *)(param_4 + 8);
  param_2[7] = param_5;
  param_2[6] = iVar5;
  fVar4 = DAT_00350eb4;
  puVar3 = DAT_00350eb0;
  puVar2 = DAT_00350eac;
  puVar8 = *(undefined1 **)(param_4 + 0xc);
  if (param_5 < param_5 + iVar5 * 0x14) {
    puVar11 = DAT_00350eac + -3;
    do {
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = puVar2[4];
      uVar12 = puVar2[5];
      *param_5 = *puVar2;
      param_5[1] = uVar6;
      param_5[2] = uVar7;
      param_5[3] = uVar9;
      param_5[4] = uVar10;
      param_5[5] = uVar12;
      uVar6 = puVar2[7];
      uVar7 = puVar2[8];
      uVar9 = puVar2[9];
      param_5[6] = puVar2[6];
      param_5[7] = uVar6;
      param_5[8] = uVar7;
      param_5[9] = uVar9;
      uVar6 = puVar2[-0x4f];
      *param_5 = puVar2[-0x50];
      param_5[1] = uVar6;
      uVar6 = puVar2[-2];
      uVar7 = puVar2[-1];
      param_5[2] = *puVar11;
      param_5[3] = uVar6;
      param_5[4] = uVar7;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar9 = puVar3[3];
      uVar10 = puVar3[4];
      param_5[10] = *puVar3;
      param_5[0xb] = uVar6;
      param_5[0xc] = uVar7;
      param_5[0xd] = uVar9;
      param_5[0xe] = uVar10;
      uVar6 = puVar3[6];
      uVar7 = puVar3[7];
      uVar9 = puVar3[8];
      uVar10 = puVar3[9];
      param_5[0xf] = puVar3[5];
      param_5[0x10] = uVar6;
      param_5[0x11] = uVar7;
      param_5[0x12] = uVar9;
      param_5[0x13] = uVar10;
      *(undefined1 *)(param_5 + 5) = *puVar8;
      *param_5 = *(undefined4 *)(puVar8 + 4);
      *(undefined1 *)(param_5 + 1) = puVar8[8];
      *(undefined1 *)((int)param_5 + 5) = puVar8[9];
      param_5[2] = *(undefined4 *)(puVar8 + 0xc);
      *(undefined1 *)(param_5 + 3) = puVar8[0x10];
      *(undefined1 *)((int)param_5 + 0xd) = puVar8[0x11];
      *(undefined1 *)((int)param_5 + 0x15) = puVar8[0x14];
      *(undefined1 *)((int)param_5 + 0x16) = puVar8[0x15];
      *(undefined1 *)((int)param_5 + 0x17) = puVar8[0x16];
      *(undefined1 *)(param_5 + 0x13) = puVar8[0x18];
      uVar6 = *(undefined4 *)(puVar8 + 0x20);
      uVar7 = *(undefined4 *)(puVar8 + 0x24);
      uVar9 = *(undefined4 *)(puVar8 + 0x28);
      param_5[10] = *(undefined4 *)(puVar8 + 0x1c);
      param_5[0xb] = uVar6;
      param_5[0xc] = uVar7;
      param_5[0xd] = uVar9;
      psVar1 = (short *)(puVar8 + 0x2c);
      puVar8 = puVar8 + 0x30;
      fVar13 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
      param_5[0x12] = fVar13 * fVar4;
      param_5 = param_5 + 0x14;
    } while (param_5 < (undefined4 *)(param_2[7] + param_2[6] * 0x50));
  }
  return 1;
}
