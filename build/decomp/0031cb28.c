// OoT3D decomp @ 0031cb28  name=FUN_0031cb28  size=640

void FUN_0031cb28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 extraout_s0;
  float fVar9;
  float fVar10;
  undefined4 extraout_s1;
  float fVar11;
  float fVar12;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined4 extraout_s7;
  undefined1 auStack_4c [48];

  iVar8 = *(int *)(param_9 + 0x124);
  if (((*DAT_0031cdc0 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0031cdc0), puVar3 = DAT_0031cdcc, uVar2 = DAT_0031cdc8,
     uVar1 = DAT_0031cdc4, param_1 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
     param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
     param_8 = extraout_s7, iVar5 != 0)) {
    *DAT_0031cdcc = DAT_0031cdc4;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
    param_1 = uVar2;
    param_2 = uVar2;
    param_3 = uVar2;
    param_4 = uVar1;
    param_5 = uVar2;
    param_6 = uVar2;
    param_7 = uVar2;
    param_8 = uVar2;
  }
  FUN_00372224(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_4c,
               DAT_0031cdcc);
  FUN_003713fc(*(undefined4 *)(iVar8 + 0x28),*(undefined4 *)(iVar8 + 0x2c),
               *(undefined4 *)(iVar8 + 0x30),auStack_4c,0);
  fVar10 = DAT_0031cdd0;
  sVar4 = *(short *)(iVar8 + 0xbc);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar9 * DAT_0031cdd0,auStack_4c,1);
  if (sVar4 != 0) {
    fVar9 = (float)VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar9 * fVar10,auStack_4c,1);
  }
  FUN_003735ac(param_9 + 0x28,auStack_4c,DAT_0031cdd4 + *(short *)(param_9 + 0x1c) * 0xc);
  iVar5 = DAT_0031cdd8;
  iVar6 = (int)*(short *)(param_9 + 0x1c);
  switch(iVar6) {
  case 0:
  case 1:
  case 2:
    if (*(char *)(param_9 + 0xf94) != '\0') goto switchD_0031cc60_default;
    psVar7 = (short *)(DAT_0031cdd8 + iVar6 * 6);
    *(short *)(param_9 + 0xbc) = *(short *)(iVar8 + 0xbc) + *psVar7;
    *(short *)(param_9 + 0xbe) = psVar7[1];
    sVar4 = psVar7[2] + *(short *)(iVar8 + 0xc0);
    break;
  case 3:
  case 4:
  case 5:
    iVar6 = DAT_0031cdd8 + iVar6 * 6;
    *(undefined2 *)(param_9 + 0xbe) = *(undefined2 *)(iVar6 + 2);
    fVar10 = (float)FUN_00338f60((int)*(short *)(iVar6 + 2));
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
    psVar7 = (short *)(iVar5 + *(short *)(param_9 + 0x1c) * 6);
    sVar4 = *psVar7;
    fVar9 = (float)FUN_002cfca0((int)psVar7[1]);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_9 + 0xbc) =
         (sVar4 + (short)(int)(fVar10 * fVar11)) - (short)(int)(fVar9 * fVar12);
    fVar10 = (float)FUN_00338f60((int)*(short *)(iVar5 + *(short *)(param_9 + 0x1c) * 6 + 2));
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = iVar5 + *(short *)(param_9 + 0x1c) * 6;
    sVar4 = *(short *)(iVar5 + 4);
    fVar9 = (float)FUN_002cfca0((int)*(short *)(iVar5 + 2));
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
    sVar4 = sVar4 + (short)(int)(fVar10 * fVar11) + (short)(int)(fVar9 * fVar12);
    break;
  default:
    goto switchD_0031cc60_default;
  }
  *(short *)(param_9 + 0xc0) = sVar4;
switchD_0031cc60_default:
  *(undefined2 *)(param_9 + 0x34) = *(undefined2 *)(param_9 + 0xbc);
  *(undefined2 *)(param_9 + 0x36) = *(undefined2 *)(param_9 + 0xbe);
  *(undefined2 *)(param_9 + 0x38) = *(undefined2 *)(param_9 + 0xc0);
  *(undefined4 *)(param_9 + 0xc4) = *(undefined4 *)(*(int *)(param_9 + 0x124) + 0xc4);
  return;
}
