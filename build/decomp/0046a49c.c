// OoT3D decomp @ 0046a49c  name=FUN_0046a49c  size=664

void FUN_0046a49c(int *param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  iVar3 = FUN_00303ea8(param_1[4]);
  fVar2 = DAT_0046a734;
  iVar7 = 0;
  do {
    pcVar6 = (char *)(iVar3 + iVar7 * 0x28);
    if (*pcVar6 == '\0') {
      param_1[iVar7 + 0x49] = 0;
    }
    else {
      iVar4 = (**(code **)(*param_1 + 8))(param_1,0x394);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = FUN_002db010();
      }
      bVar1 = pcVar6[1];
      local_68 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_68 = local_68 * fVar2;
      local_64 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_64 = local_64 * fVar2;
      local_60 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_60 = local_60 * fVar2;
      local_5c = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_5c = local_5c * fVar2;
      local_58 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_58 = local_58 * fVar2;
      local_54 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_54 = local_54 * fVar2;
      local_50 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_50 = local_50 * fVar2;
      local_4c = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_4c = local_4c * fVar2;
      local_48 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_48 = local_48 * fVar2;
      local_44 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_44 = local_44 * fVar2;
      local_40 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_40 = local_40 * fVar2;
      local_3c = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_3c = local_3c * fVar2;
      local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_38 = local_38 * fVar2;
      local_34 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_34 = local_34 * fVar2;
      local_30 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_30 = local_30 * fVar2;
      local_2c = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_2c = local_2c * fVar2;
      iVar4 = (int)*(short *)((int)param_1 + (uint)bVar1 * 0x54 + 0x4e);
      fVar8 = (float)VectorSignedToFloat((int)(short)param_1[(uint)bVar1 * 0x15 + 0x13],
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)(short)param_1[(uint)bVar1 * 0x15 + 0x13],
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_002dae70(*(undefined4 *)(pcVar6 + 4),*(undefined4 *)(pcVar6 + 8),
                   *(undefined4 *)(pcVar6 + 0xc),*(undefined4 *)(pcVar6 + 0x10),
                   *(float *)(pcVar6 + 0x14) / fVar8,*(float *)(pcVar6 + 0x18) / fVar9,
                   *(float *)(pcVar6 + 0x14) / fVar8 + *(float *)(pcVar6 + 0x1c) / fVar10,
                   *(float *)(pcVar6 + 0x18) / fVar9 + *(float *)(pcVar6 + 0x20) / fVar11,iVar5,
                   param_1 + (uint)bVar1 * 0x15 + 8,0,&local_68,pcVar6[2] != '\0');
      param_1[iVar7 + 0x49] = iVar5;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  iVar3 = (**(code **)(*param_1 + 8))(param_1,0x394);
  param_1[0x148] = iVar3;
  if (iVar3 != 0) {
    FUN_002db010();
  }
  return;
}
