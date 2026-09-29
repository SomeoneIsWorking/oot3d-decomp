// OoT3D decomp @ 001700c0  name=FUN_001700c0  size=600

void FUN_001700c0(int param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;

  FUN_00354570();
  fVar10 = DAT_00170334;
  fVar9 = DAT_00170330;
  fVar8 = DAT_0017032c;
  fVar7 = DAT_00170328;
  fVar6 = DAT_00170324;
  fVar5 = DAT_00170320;
  iVar4 = DAT_0017031c;
  fVar3 = DAT_00170318;
  iVar12 = 0x17;
  do {
    iVar11 = (int)*(short *)(param_1 + 0xad2) + (0x18 - iVar12);
    lVar2 = (longlong)iVar4 * (longlong)iVar11;
    iVar11 = param_1 + (short)((short)iVar11 +
                              ((short)(int)(lVar2 >> 0x22) - (short)(lVar2 >> 0x3f)) * -0x18) * 0xc;
    local_6c = *(undefined4 *)(iVar11 + 0xc20);
    local_5c = *(undefined4 *)(iVar11 + 0xc24);
    local_4c = *(undefined4 *)(iVar11 + 0xc28);
    fVar16 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    local_50 = fVar3 - fVar16 * fVar6;
    local_58 = *(float *)(param_1 + 0x54) * local_50;
    local_54 = *(float *)(param_1 + 0x58) * local_50;
    local_50 = *(float *)(param_1 + 0x5c) * local_50;
    local_78 = local_58 * 1.0;
    local_68 = local_58 * 0.0;
    local_58 = local_58 * 0.0;
    local_74 = local_54 * 0.0;
    local_64 = local_54 * 1.0;
    local_54 = local_54 * 0.0;
    local_70 = local_50 * 0.0;
    local_60 = local_50 * 0.0;
    local_50 = local_50 * 1.0;
    FUN_00371fac(&local_78,param_2 + 0x2fc);
    fVar16 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar16 = fVar16 * fVar7 * fVar8 * fVar9 + fVar13 * fVar10 * fVar7;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar5) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar14 = (float)FUN_003727f0(fVar16);
      fVar15 = (float)FUN_00372674(fVar16);
      fVar16 = local_74 * fVar14;
      local_74 = local_74 * fVar15 - local_78 * fVar14;
      fVar13 = local_64 * fVar14;
      local_64 = local_64 * fVar15 - local_68 * fVar14;
      fVar1 = local_54 * fVar14;
      local_54 = local_54 * fVar15 - local_58 * fVar14;
      local_78 = local_78 * fVar15 + fVar16;
      local_68 = local_68 * fVar15 + fVar13;
      local_58 = local_58 * fVar15 + fVar1;
    }
    iVar11 = param_1 + iVar12 * 4;
    *(undefined1 *)(*(int *)(iVar11 + 0x4f0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(iVar11 + 0x4f0),&local_78);
    FUN_00372170(*(undefined4 *)(iVar11 + 0x4f0),0);
    iVar12 = (int)(short)((short)iVar12 + -1);
  } while (-1 < iVar12);
  return;
}
