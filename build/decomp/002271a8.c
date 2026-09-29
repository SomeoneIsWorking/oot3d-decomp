// OoT3D decomp @ 002271a8  name=FUN_002271a8  size=1008

void FUN_002271a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
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
  float local_28;
  float local_24;
  float local_20;

  FUN_00332c98();
  fVar4 = DAT_00227594;
  fVar3 = DAT_00227590;
  fVar2 = DAT_0022758c;
  fVar1 = DAT_00227588;
  if (param_1 != 0) {
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x53c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x540),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x52c),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51c),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 / fVar7;
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51c),(byte)(in_fpscr >> 0x15) & 3);
    local_5c = (fVar7 + (fVar10 - fVar9) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x52d),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51d),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51d),(byte)(in_fpscr >> 0x15) & 3);
    local_58 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x52e),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51e),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51e),(byte)(in_fpscr >> 0x15) & 3);
    local_54 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x52f),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51f),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x51f),(byte)(in_fpscr >> 0x15) & 3);
    local_50 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x530),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x520),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x520),(byte)(in_fpscr >> 0x15) & 3);
    local_4c = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x531),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x521),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x521),(byte)(in_fpscr >> 0x15) & 3);
    local_48 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x532),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x522),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x522),(byte)(in_fpscr >> 0x15) & 3);
    local_44 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x533),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x523),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x523),(byte)(in_fpscr >> 0x15) & 3);
    local_40 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x534),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x524),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x524),(byte)(in_fpscr >> 0x15) & 3);
    local_3c = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x535),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x525),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x525),(byte)(in_fpscr >> 0x15) & 3);
    local_38 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x536),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x526),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x526),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x537),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x527),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x527),(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = 0;
    local_30 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x538),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x528),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x528),(byte)(in_fpscr >> 0x15) & 3);
    local_2c = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x539),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x529),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x529),(byte)(in_fpscr >> 0x15) & 3);
    local_28 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x53a),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x52a),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x52a),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    fVar10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x53b),(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x52b),(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x52b),(byte)(in_fpscr >> 0x15) & 3);
    local_20 = (fVar9 + (fVar10 - fVar7) * fVar8) * DAT_00227584;
    iVar5 = *(int *)(param_1 + 8);
    if (0 < iVar5) {
      do {
        iVar5 = param_1 + iVar6 * 0x28;
        local_60 = *(undefined4 *)(iVar5 + 0x20);
        local_64 = *(undefined4 *)(iVar5 + 0x1c);
        local_68 = *(undefined4 *)(iVar5 + 0x18);
        local_74 = (fVar2 + *(float *)(iVar5 + 0x30) * fVar1) * fVar3 * fVar4;
        local_70 = local_74;
        local_6c = local_74;
        FUN_00332a14(*(undefined4 *)(param_1 + 0x544),&local_68,0,&local_74,&local_5c,0);
        iVar5 = *(int *)(param_1 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    if (iVar5 != 0) {
      FUN_00371eac(*(undefined4 *)(param_1 + 0x544),0);
    }
  }
  return;
}
