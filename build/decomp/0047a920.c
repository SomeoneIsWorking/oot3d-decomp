// OoT3D decomp @ 0047a920  name=FUN_0047a920  size=760

void FUN_0047a920(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  short *psVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  psVar3 = DAT_0047ac1c;
  sVar1 = *(short *)(param_1 + 0x2dda);
  psVar8 = DAT_0047ac1c + 9;
  fVar9 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_0047ac18;
  if (*(short *)(param_1 + 0x2ddc) == 0) {
    *(short *)(param_1 + 0x2dda) = sVar1 + 1;
    if (0xe < (short)(sVar1 + 1)) {
      *(undefined2 *)(param_1 + 0x2dda) = 0xf;
      *(undefined2 *)(param_1 + 0x2ddc) = 1;
    }
  }
  else {
    *(short *)(param_1 + 0x2dda) = sVar1 + -1;
    if ((short)(sVar1 + -1) < 1) {
      *(undefined2 *)(param_1 + 0x2dda) = 0;
      *(undefined2 *)(param_1 + 0x2ddc) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x2dea) = 0xff;
  *(undefined2 *)(param_1 + 0x2dee) = 0x46;
  *(undefined2 *)(param_1 + 0x2df2) = 0x32;
  *(undefined2 *)(param_1 + 0x2df6) = 0x32;
  *(undefined2 *)(param_1 + 0x2dfa) = 0x28;
  *(undefined2 *)(param_1 + 0x2dfe) = 0x3c;
  puVar4 = DAT_0047ac20;
  *(undefined2 *)(param_1 + 0x2dec) = *DAT_0047ac20;
  *(undefined2 *)(param_1 + 0x2df0) = puVar4[1];
  *(undefined2 *)(param_1 + 0x2df4) = puVar4[2];
  *(undefined2 *)(param_1 + 0x2df8) = puVar4[9];
  *(undefined2 *)(param_1 + 0x2dfc) = puVar4[10];
  *(undefined2 *)(param_1 + 0x2e00) = puVar4[0xb];
  sVar1 = psVar3[1];
  sVar2 = psVar3[2];
  fVar10 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(ushort *)(param_1 + 0x2dde) = (short)(int)(fVar10 * fVar9) + 0xffU & 0xff;
  fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(ushort *)(param_1 + 0x2de0) = (short)(int)(fVar10 * fVar9) + 0x46U & 0xff;
  fVar10 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(ushort *)(param_1 + 0x2de2) = (short)(int)(fVar10 * fVar9) + 0x32U & 0xff;
  sVar1 = psVar3[10];
  sVar2 = psVar3[0xb];
  fVar10 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x15) & 3);
  *(ushort *)(param_1 + 0x2de4) = (short)(int)(fVar10 * fVar9) + 0x32U & 0xff;
  fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(ushort *)(param_1 + 0x2de6) = (short)(int)(fVar10 * fVar9) + 0x28U & 0xff;
  *(ushort *)(param_1 + 0x2de8) = (short)(int)(fVar11 * fVar9) + 0x3cU & 0xff;
  puVar4 = DAT_0047ac24;
  puVar7 = DAT_0047ac24 + 6;
  *DAT_0047ac24 = 0xff;
  puVar4[1] = 0xff;
  puVar4[2] = 0xff;
  *puVar7 = 200;
  puVar7 = DAT_0047ac28;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[3] = *puVar7;
  puVar4[4] = puVar7[1];
  puVar4[5] = puVar7[2];
  puVar7 = DAT_0047ac2c;
  puVar4[9] = *DAT_0047ac2c;
  puVar4[10] = puVar7[1];
  psVar3 = DAT_0047ac30;
  puVar4[0xb] = puVar7[2];
  puVar5 = DAT_0047ac34;
  sVar1 = psVar3[2];
  fVar10 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)psVar3[1],(byte)(in_fpscr >> 0x15) & 3);
  *DAT_0047ac34 = (short)(int)(fVar10 * fVar9) + 0xffU & 0xff;
  puVar5[1] = (short)(int)(fVar11 * fVar9) + 0xffU & 0xff;
  fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  puVar5[2] = (short)(int)(fVar10 * fVar9) + 0xffU & 0xff;
  puVar6 = DAT_0047ac38;
  fVar10 = (float)VectorSignedToFloat((int)(short)puVar5[0x45],(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)(short)puVar5[0x46],(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat((int)(short)puVar5[0x47],(byte)(in_fpscr >> 0x15) & 3);
  *DAT_0047ac38 = (short)(int)(fVar10 * fVar9) + 200U & 0xff;
  puVar6[1] = (ushort)(int)(fVar11 * fVar9) & 0xff;
  puVar6[2] = (ushort)(int)(fVar12 * fVar9) & 0xff;
  return;
}
