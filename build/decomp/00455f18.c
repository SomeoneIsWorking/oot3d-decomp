// OoT3D decomp @ 00455f18  name=FUN_00455f18  size=768

undefined4 FUN_00455f18(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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

  FUN_0046a160();
  fVar1 = DAT_00456218;
  iVar5 = 0;
  do {
    pcVar4 = (char *)(param_2 + iVar5 * 0x28);
    if (*pcVar4 == '\0') {
      *(undefined4 *)(param_1 + iVar5 * 4 + 0x18) = 0;
    }
    else if (pcVar4[1] != -1) {
      iVar2 = *(int *)(param_1 + 0x14);
      if ((uint)(*(int *)(param_1 + 0x10) - iVar2) < 0x394) {
        iVar2 = 0;
      }
      else {
        *(int *)(param_1 + 0x14) = iVar2 + 0x394;
        iVar2 = iVar2 + *(int *)(param_1 + 0xc);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_002db010();
      }
      if (iVar2 == 0) {
        return 0;
      }
      iVar6 = 0;
      iVar3 = 0;
      if (((uint)(byte)pcVar4[1] < *(uint *)(param_1 + 8)) &&
         (iVar6 = *(int *)(*(int *)(param_1 + 4) + (uint)(byte)pcVar4[1] * 4), iVar6 != 0)) {
        iVar3 = iVar6 + 0x24;
      }
      local_68 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_68 = local_68 * fVar1;
      local_64 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_64 = local_64 * fVar1;
      local_60 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_60 = local_60 * fVar1;
      local_5c = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_5c = local_5c * fVar1;
      local_58 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_58 = local_58 * fVar1;
      local_54 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_54 = local_54 * fVar1;
      local_50 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_50 = local_50 * fVar1;
      local_4c = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_4c = local_4c * fVar1;
      local_48 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_48 = local_48 * fVar1;
      local_44 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_44 = local_44 * fVar1;
      local_40 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_40 = local_40 * fVar1;
      local_3c = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_3c = local_3c * fVar1;
      local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x24],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_38 = local_38 * fVar1;
      local_34 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x25],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_34 = local_34 * fVar1;
      local_30 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x26],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_30 = local_30 * fVar1;
      local_2c = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0x27],(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_2c = local_2c * fVar1;
      if (iVar6 == 0 || iVar3 == 0) {
        FUN_0046aabc(*(undefined4 *)(pcVar4 + 4),*(undefined4 *)(pcVar4 + 8),
                     *(undefined4 *)(pcVar4 + 0xc),*(undefined4 *)(pcVar4 + 0x10),iVar2,&local_68);
      }
      else {
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3)
        ;
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3
                                           );
        if ((pcVar4[2] & 2U) == 0) {
          FUN_002dae70(iVar2,iVar6,0);
        }
        else {
          FUN_00469e64(*(undefined4 *)(pcVar4 + 4),*(undefined4 *)(pcVar4 + 8),
                       *(undefined4 *)(pcVar4 + 0xc),*(undefined4 *)(pcVar4 + 0x10),
                       *(float *)(pcVar4 + 0x14) / fVar8,*(float *)(pcVar4 + 0x18) / fVar9,
                       *(float *)(pcVar4 + 0x14) / fVar8 + *(float *)(pcVar4 + 0x1c) / fVar7,
                       *(float *)(pcVar4 + 0x18) / fVar9 + *(float *)(pcVar4 + 0x20) / fVar10,
                       param_1,iVar2,iVar6,&local_68,pcVar4[2] & 1);
        }
      }
      *(int *)(param_1 + iVar5 * 4 + 0x18) = iVar2;
    }
    iVar5 = iVar5 + 1;
    if (0xff < iVar5) {
      return 1;
    }
  } while( true );
}
