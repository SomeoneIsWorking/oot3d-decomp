// OoT3D decomp @ 00289aec  name=FUN_00289aec  size=716

void FUN_00289aec(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  short sVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;

  iVar6 = param_1 + 0x48a8;
  FUN_0035e3a4(iVar6,0,(int)*(short *)(param_1 + 0xd32));
  FUN_0035e3a4(iVar6,1,(int)*(short *)(param_1 + 0xd36));
  if (*(int *)(param_1 + 0x1a4) != DAT_00289db8) {
    FUN_0035e240(param_1 + 0x1a8,param_1 + 0x148,DAT_00289dbc,0,param_1,0);
  }
  FUN_0035e330(iVar6);
  fVar5 = DAT_00289dc4;
  fVar4 = DAT_00289dc0;
  bVar3 = false;
  pcVar7 = (char *)(param_1 + 0xde0);
  sVar8 = 0;
  do {
    if (*pcVar7 == '\x01') {
      local_64 = *(undefined4 *)(pcVar7 + 4);
      local_54 = *(undefined4 *)(pcVar7 + 8);
      local_44 = *(undefined4 *)(pcVar7 + 0xc);
      local_68 = 0;
      local_6c = 0.0;
      local_70 = 1.0;
      local_60 = 0.0;
      local_5c = 1.0;
      local_58 = 0;
      local_50 = 0.0;
      local_4c = 0.0;
      uStack_48 = 0x3f800000;
      if (!bVar3) {
        bVar3 = true;
      }
      local_40 = local_64;
      local_3c = local_54;
      local_38 = local_44;
      FUN_00371fac(&local_70,param_2 + 0x2fc);
      fVar9 = *(float *)(pcVar7 + 0x30);
      local_70 = local_70 * fVar9;
      local_60 = local_60 * fVar9;
      local_50 = local_50 * fVar9;
      local_6c = local_6c * fVar9;
      local_5c = local_5c * fVar9;
      local_4c = local_4c * fVar9;
      fVar9 = *(float *)(pcVar7 + 0x40);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar10 = (float)FUN_003727f0(fVar9);
        fVar11 = (float)FUN_00372674(fVar9);
        fVar9 = local_6c * fVar10;
        local_6c = local_6c * fVar11 - local_70 * fVar10;
        fVar1 = local_5c * fVar10;
        local_5c = local_5c * fVar11 - local_60 * fVar10;
        fVar2 = local_4c * fVar10;
        local_4c = local_4c * fVar11 - local_50 * fVar10;
        local_70 = local_70 * fVar11 + fVar9;
        local_60 = local_60 * fVar11 + fVar1;
        local_50 = local_50 * fVar11 + fVar2;
      }
      if (*(int *)(pcVar7 + 0x44) != 0) {
        iVar6 = *(int *)(*(int *)(pcVar7 + 0x44) + 4);
        FUN_003687a8(iVar6);
        uStack_74 = *(undefined4 *)(DAT_00289dc8 + 0xc);
        local_80 = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar7[0x28],(byte)(in_fpscr >> 0x15) & 3);
        local_80 = local_80 * fVar5;
        local_7c = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar7[0x29],(byte)(in_fpscr >> 0x15) & 3);
        local_7c = local_7c * fVar5;
        local_78 = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar7[0x2a],(byte)(in_fpscr >> 0x15) & 3);
        local_78 = local_78 * fVar5;
        local_90 = *DAT_00289dcc;
        uStack_8c = DAT_00289dcc[1];
        uStack_88 = DAT_00289dcc[2];
        local_84 = (float)VectorSignedToFloat((int)*(short *)(pcVar7 + 0x2e),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_84 = local_84 * fVar5;
        FUN_00358778(iVar6,0,0,&local_80,0);
        FUN_00358778(iVar6,0,4,&local_90,2);
        *(undefined1 *)(iVar6 + 0xac) = 1;
        FUN_003721e0(iVar6,&local_70);
        FUN_00372170(iVar6,0);
      }
    }
    sVar8 = sVar8 + 1;
    pcVar7 = pcVar7 + 0x48;
  } while (sVar8 < 200);
  return;
}
